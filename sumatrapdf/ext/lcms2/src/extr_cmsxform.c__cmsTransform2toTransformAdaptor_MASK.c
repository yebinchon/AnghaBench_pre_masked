
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct _cmstransform_struct {int (* OldXform ) (int ,struct _cmstransform_struct*,void*,void*,scalar_t__,int ) ;} ;
typedef int cmsUInt8Number ;
typedef scalar_t__ cmsUInt32Number ;
struct TYPE_4__ {scalar_t__ BytesPerLineIn; scalar_t__ BytesPerLineOut; int BytesPerPlaneIn; } ;
typedef TYPE_1__ cmsStride ;
typedef int cmsContext ;


 int FUNC_0 (int ,struct _cmstransform_struct*,void const*,void*,scalar_t__,scalar_t__,TYPE_1__ const*) ;
 int FUNC_1 (int ,struct _cmstransform_struct*,void*,void*,scalar_t__,int ) ;

__attribute__((used)) static
void FUNC_2(cmsContext VAR_0, struct _cmstransform_struct *VAR_1,
                                      const void* VAR_2,
                                      void* VAR_3,
                                      cmsUInt32Number VAR_4,
                                      cmsUInt32Number VAR_5,
                                      const cmsStride* VAR_6)
{

       cmsUInt32Number VAR_7, VAR_8, VAR_9;

       FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

       VAR_8 = 0;
       VAR_9 = 0;

       for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {

              void *VAR_10 = (cmsUInt8Number*)VAR_2 + VAR_8;
              void *VAR_11 = (cmsUInt8Number*)VAR_3 + VAR_9;

              VAR_1->OldXform(VAR_0, VAR_1, VAR_10, VAR_11, VAR_4, VAR_6->BytesPerPlaneIn);

              VAR_8 += VAR_6->BytesPerLineIn;
              VAR_9 += VAR_6->BytesPerLineOut;
       }
}
