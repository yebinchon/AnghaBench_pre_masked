
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int * lpVtbl; } ;
struct TYPE_11__ {int LowPart; scalar_t__ HighPart; } ;
struct TYPE_12__ {TYPE_3__ u; } ;
struct TYPE_9__ {scalar_t__ LowPart; scalar_t__ HighPart; } ;
struct TYPE_10__ {TYPE_1__ u; } ;
struct TYPE_13__ {int ref; TYPE_6__ IStream_iface; scalar_t__ supportHandle; TYPE_4__ streamSize; TYPE_2__ currentPosition; } ;
typedef TYPE_5__ NoStatStreamImpl ;
typedef TYPE_6__ IStream ;
typedef scalar_t__ HGLOBAL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_5__* FUNC_3 (int ,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static IStream* FUNC_4(HGLOBAL VAR_4)
{
  NoStatStreamImpl* VAR_5;

  VAR_5 = FUNC_3(FUNC_0(), 0, sizeof(NoStatStreamImpl));
  if (VAR_5!=0)
  {
    VAR_5->IStream_iface.lpVtbl = &VAR_3;
    VAR_5->ref = 1;
    VAR_5->supportHandle = VAR_4;

    if (!VAR_5->supportHandle)
      VAR_5->supportHandle = FUNC_1(VAR_0 | VAR_1 |
          VAR_2, 0);
    VAR_5->currentPosition.u.HighPart = 0;
    VAR_5->currentPosition.u.LowPart = 0;
    VAR_5->streamSize.u.HighPart = 0;
    VAR_5->streamSize.u.LowPart = FUNC_2(VAR_5->supportHandle);
  }
  return &VAR_5->IStream_iface;
}
