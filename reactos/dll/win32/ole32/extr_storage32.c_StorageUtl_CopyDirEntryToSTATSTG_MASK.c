
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_6__ {int stgType; scalar_t__* name; int clsid; int size; } ;
struct TYPE_5__ {int type; scalar_t__ reserved; scalar_t__ grfStateBits; int clsid; scalar_t__ grfLocksSupported; scalar_t__ grfMode; int cbSize; scalar_t__ pwcsName; } ;
typedef int StorageBaseImpl ;
typedef TYPE_1__ STATSTG ;
typedef TYPE_2__ DirEntry ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;



 int FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (scalar_t__,scalar_t__*) ;
 int FUNC_3 (scalar_t__*) ;

void FUNC_4(
  StorageBaseImpl* VAR_1,
  STATSTG* VAR_2,
  const DirEntry* VAR_3,
  int VAR_4)
{



  if (!(VAR_4 & VAR_0) && VAR_3->stgType == 130)
  {

    VAR_2->pwcsName = 0;
    FUNC_1(VAR_1, &VAR_2->pwcsName);
  }
  else if( ((VAR_4 & VAR_0) != 0) ||
       (VAR_3->name[0] == 0) )
  {
    VAR_2->pwcsName = 0;
  }
  else
  {
    VAR_2->pwcsName =
      FUNC_0((FUNC_3(VAR_3->name)+1)*sizeof(WCHAR));

    FUNC_2(VAR_2->pwcsName, VAR_3->name);
  }

  switch (VAR_3->stgType)
  {
    case 129:
    case 130:
      VAR_2->type = 129;
      break;
    case 128:
      VAR_2->type = 128;
      break;
    default:
      VAR_2->type = 128;
      break;
  }

  VAR_2->cbSize = VAR_3->size;





  VAR_2->grfMode = 0;
  VAR_2->grfLocksSupported = 0;
  VAR_2->clsid = VAR_3->clsid;
  VAR_2->grfStateBits = 0;
  VAR_2->reserved = 0;
}
