
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_4__ {scalar_t__ dirRootEntry; scalar_t__ leftChild; scalar_t__ rightChild; int name; } ;
typedef int StorageBaseImpl ;
typedef int OLECHAR ;
typedef scalar_t__ LONG ;
typedef int HRESULT ;
typedef scalar_t__ DirRef ;
typedef TYPE_1__ DirEntry ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int const*,int ) ;

__attribute__((used)) static HRESULT FUNC_2(StorageBaseImpl *VAR_6, DirRef VAR_7,
    const OLECHAR *VAR_8, DirEntry *VAR_9, DirRef *VAR_10,
    ULONG *VAR_11)
{
  DirRef VAR_12;
  DirEntry VAR_13;


  FUNC_0(VAR_6, VAR_7, VAR_9);

  *VAR_10 = VAR_7;
  *VAR_11 = VAR_1;

  VAR_12 = VAR_9->dirRootEntry;

  while (VAR_12 != VAR_0)
  {
    LONG VAR_14;

    FUNC_0(VAR_6, VAR_12, &VAR_13);

    VAR_14 = FUNC_1(VAR_8, VAR_13.name);

    if (VAR_14 == 0)

      break;

    else if (VAR_14 < 0)
    {
      *VAR_9 = VAR_13;
      *VAR_10 = VAR_12;
      *VAR_11 = VAR_3;

      VAR_12 = VAR_9->leftChild;
    }

    else if (VAR_14 > 0)
    {
      *VAR_9 = VAR_13;
      *VAR_10 = VAR_12;
      *VAR_11 = VAR_2;

      VAR_12 = VAR_9->rightChild;
    }
  }

  if (VAR_12 == VAR_0)
    return VAR_4;
  else
    return VAR_5;
}
