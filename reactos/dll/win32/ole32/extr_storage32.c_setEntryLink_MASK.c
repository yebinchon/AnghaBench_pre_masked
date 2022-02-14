
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {void* dirRootEntry; void* rightChild; void* leftChild; } ;
typedef void* DirRef ;
typedef TYPE_1__ DirEntry ;





 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(DirEntry *VAR_0, ULONG VAR_1, DirRef VAR_2)
{
  switch (VAR_1)
  {
    case 128:
      VAR_0->leftChild = VAR_2;
      break;
    case 129:
      VAR_0->rightChild = VAR_2;
      break;
    case 130:
      VAR_0->dirRootEntry = VAR_2;
      break;
    default:
      FUNC_0(0);
  }
}
