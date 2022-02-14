
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ LowPart; scalar_t__ HighPart; } ;
struct TYPE_9__ {TYPE_1__ u; } ;
struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_11__ {TYPE_2__ currentPosition; int dirEntry; int grfMode; int * parentStorage; scalar_t__ ref; TYPE_3__ IStream_iface; } ;
typedef int StorageBaseImpl ;
typedef TYPE_4__ StgStreamImpl ;
typedef int DirRef ;
typedef int DWORD ;


 int FUNC_0 () ;
 TYPE_4__* FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int *,TYPE_4__*) ;

StgStreamImpl* FUNC_3(
  StorageBaseImpl* VAR_1,
    DWORD VAR_2,
    DirRef VAR_3)
{
  StgStreamImpl* VAR_4;

  VAR_4 = FUNC_1(FUNC_0(), 0, sizeof(StgStreamImpl));

  if (VAR_4)
  {



    VAR_4->IStream_iface.lpVtbl = &VAR_0;
    VAR_4->ref = 0;

    VAR_4->parentStorage = VAR_1;
    VAR_4->grfMode = VAR_2;
    VAR_4->dirEntry = VAR_3;




    VAR_4->currentPosition.u.HighPart = 0;
    VAR_4->currentPosition.u.LowPart = 0;


    FUNC_2(VAR_1, VAR_4);
  }

  return VAR_4;
}
