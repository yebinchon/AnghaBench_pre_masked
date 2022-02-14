
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ face_id; } ;
struct TYPE_4__ {TYPE_1__ scaler; } ;
typedef int FT_Pointer ;
typedef int FT_Bool ;
typedef TYPE_2__* FTC_SizeNode ;
typedef int FTC_MruNode ;
typedef scalar_t__ FTC_FaceID ;


 int FUNC_0 (int) ;

__attribute__((used)) static FT_Bool
  FUNC_1( FTC_MruNode VAR_0,
                                FT_Pointer VAR_1 )
  {
    FTC_SizeNode VAR_2 = (FTC_SizeNode)VAR_0;
    FTC_FaceID VAR_3 = (FTC_FaceID)VAR_1;


    return FUNC_0( VAR_2->scaler.face_id == VAR_3 );
  }
