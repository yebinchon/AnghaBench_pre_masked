
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dirRootEntry; scalar_t__ leftChild; scalar_t__ rightChild; int name; } ;
typedef int StorageBaseImpl ;
typedef int OLECHAR ;
typedef scalar_t__ LONG ;
typedef scalar_t__ DirRef ;
typedef TYPE_1__ DirEntry ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int const*,int ) ;

__attribute__((used)) static DirRef FUNC_2(StorageBaseImpl *VAR_1, DirRef VAR_2,
    const OLECHAR *VAR_3, DirEntry *VAR_4)
{
  DirRef VAR_5;


  FUNC_0(VAR_1, VAR_2, VAR_4);

  VAR_5 = VAR_4->dirRootEntry;

  while (VAR_5 != VAR_0)
  {
    LONG VAR_6;

    FUNC_0(VAR_1, VAR_5, VAR_4);

    VAR_6 = FUNC_1(VAR_3, VAR_4->name);

    if (VAR_6 == 0)

      break;

    else if (VAR_6 < 0)
      VAR_5 = VAR_4->leftChild;

    else if (VAR_6 > 0)
      VAR_5 = VAR_4->rightChild;
  }

  return VAR_5;
}
