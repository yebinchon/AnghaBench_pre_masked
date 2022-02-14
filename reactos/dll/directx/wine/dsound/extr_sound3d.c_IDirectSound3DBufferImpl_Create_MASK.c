
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_17__ {TYPE_5__* dsb; int * lpVtbl; scalar_t__ ref; } ;
struct TYPE_14__ {double x; double y; double z; } ;
struct TYPE_13__ {double x; double y; double z; } ;
struct TYPE_12__ {double x; double y; double z; } ;
struct TYPE_15__ {int dwSize; int dwMode; int flMaxDistance; int flMinDistance; int lConeOutsideVolume; TYPE_3__ vConeOrientation; void* dwOutsideConeAngle; void* dwInsideConeAngle; TYPE_2__ vVelocity; TYPE_1__ vPosition; } ;
struct TYPE_16__ {int ds3db_need_recalc; TYPE_4__ ds3db_ds3db; } ;
typedef TYPE_5__ IDirectSoundBufferImpl ;
typedef TYPE_6__ IDirectSound3DBufferImpl ;
typedef int HRESULT ;
typedef int DS3DBUFFER ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int VAR_6 ;
 TYPE_6__* FUNC_1 (int ,int ,int) ;
 int VAR_7 ;
 int FUNC_2 (char*,TYPE_5__*,TYPE_6__**) ;
 int VAR_8 ;
 int FUNC_3 (char*) ;
 int VAR_9 ;

HRESULT FUNC_4(
 IDirectSoundBufferImpl *VAR_10,
 IDirectSound3DBufferImpl **VAR_11)
{
 IDirectSound3DBufferImpl *VAR_12;
 FUNC_2("(%p,%p)\n",VAR_10,VAR_11);

 VAR_12 = FUNC_1(FUNC_0(),VAR_6,sizeof(*VAR_12));

 if (VAR_12 == ((void*)0)) {
  FUNC_3("out of memory\n");
  *VAR_11 = 0;
  return VAR_5;
 }

 VAR_12->ref = 0;
 VAR_12->dsb = VAR_10;
 VAR_12->lpVtbl = &VAR_9;

 VAR_12->dsb->ds3db_ds3db.dwSize = sizeof(DS3DBUFFER);
 VAR_12->dsb->ds3db_ds3db.vPosition.x = 0.0;
 VAR_12->dsb->ds3db_ds3db.vPosition.y = 0.0;
 VAR_12->dsb->ds3db_ds3db.vPosition.z = 0.0;
 VAR_12->dsb->ds3db_ds3db.vVelocity.x = 0.0;
 VAR_12->dsb->ds3db_ds3db.vVelocity.y = 0.0;
 VAR_12->dsb->ds3db_ds3db.vVelocity.z = 0.0;
 VAR_12->dsb->ds3db_ds3db.dwInsideConeAngle = VAR_1;
 VAR_12->dsb->ds3db_ds3db.dwOutsideConeAngle = VAR_1;
 VAR_12->dsb->ds3db_ds3db.vConeOrientation.x = 0.0;
 VAR_12->dsb->ds3db_ds3db.vConeOrientation.y = 0.0;
 VAR_12->dsb->ds3db_ds3db.vConeOrientation.z = 0.0;
 VAR_12->dsb->ds3db_ds3db.lConeOutsideVolume = VAR_2;
 VAR_12->dsb->ds3db_ds3db.flMinDistance = VAR_4;
 VAR_12->dsb->ds3db_ds3db.flMaxDistance = VAR_3;
 VAR_12->dsb->ds3db_ds3db.dwMode = VAR_0;

 VAR_12->dsb->ds3db_need_recalc = VAR_8;

 *VAR_11 = VAR_12;
 return VAR_7;
}
