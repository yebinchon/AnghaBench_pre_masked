
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {double x; double y; double z; } ;
struct TYPE_15__ {double x; double y; double z; } ;
struct TYPE_14__ {double x; double y; double z; } ;
struct TYPE_13__ {double x; double y; double z; } ;
struct TYPE_17__ {int dwSize; int flDopplerFactor; int flRolloffFactor; int flDistanceFactor; TYPE_4__ vOrientTop; TYPE_3__ vOrientFront; TYPE_2__ vVelocity; TYPE_1__ vPosition; } ;
struct TYPE_19__ {int ds3dl_need_recalc; TYPE_5__ ds3dl; } ;
struct TYPE_18__ {TYPE_7__* device; int * lpVtbl; scalar_t__ ref; } ;
typedef TYPE_6__ IDirectSound3DListenerImpl ;
typedef int HRESULT ;
typedef TYPE_7__ DirectSoundDevice ;
typedef int DS3DLISTENER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 TYPE_6__* FUNC_1 (int ,int ,int) ;
 int VAR_5 ;
 int FUNC_2 (char*,TYPE_7__*,TYPE_6__**) ;
 int VAR_6 ;
 int FUNC_3 (char*) ;
 int VAR_7 ;

HRESULT FUNC_4(
 DirectSoundDevice * VAR_8,
 IDirectSound3DListenerImpl ** VAR_9)
{
 IDirectSound3DListenerImpl *VAR_10;
 FUNC_2("(%p,%p)\n",VAR_8,VAR_9);

 VAR_10 = FUNC_1(FUNC_0(),VAR_4,sizeof(*VAR_10));

 if (VAR_10 == ((void*)0)) {
  FUNC_3("out of memory\n");
  *VAR_9 = 0;
  return VAR_3;
 }

 VAR_10->ref = 0;
 VAR_10->lpVtbl = &VAR_7;

 VAR_10->device = VAR_8;

 VAR_10->device->ds3dl.dwSize = sizeof(DS3DLISTENER);
 VAR_10->device->ds3dl.vPosition.x = 0.0;
 VAR_10->device->ds3dl.vPosition.y = 0.0;
 VAR_10->device->ds3dl.vPosition.z = 0.0;
 VAR_10->device->ds3dl.vVelocity.x = 0.0;
 VAR_10->device->ds3dl.vVelocity.y = 0.0;
 VAR_10->device->ds3dl.vVelocity.z = 0.0;
 VAR_10->device->ds3dl.vOrientFront.x = 0.0;
 VAR_10->device->ds3dl.vOrientFront.y = 0.0;
 VAR_10->device->ds3dl.vOrientFront.z = 1.0;
 VAR_10->device->ds3dl.vOrientTop.x = 0.0;
 VAR_10->device->ds3dl.vOrientTop.y = 1.0;
 VAR_10->device->ds3dl.vOrientTop.z = 0.0;
 VAR_10->device->ds3dl.flDistanceFactor = VAR_0;
 VAR_10->device->ds3dl.flRolloffFactor = VAR_2;
 VAR_10->device->ds3dl.flDopplerFactor = VAR_1;

 VAR_10->device->ds3dl_need_recalc = VAR_6;

 *VAR_9 = VAR_10;
 return VAR_5;
}
