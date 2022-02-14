
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ H; float W; float B; } ;
typedef int RGBType ;
typedef TYPE_1__ HWBType ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,int,int,int) ;
 float FUNC_2 (scalar_t__) ;

__attribute__((used)) static float FUNC_3 (int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 RGBType VAR_7, VAR_8;
 HWBType VAR_9, VAR_10;
 float VAR_11;

 FUNC_1(VAR_7, VAR_1, VAR_2, VAR_3);
 FUNC_1(VAR_8, VAR_4, VAR_5, VAR_6);

 FUNC_0(VAR_7, &VAR_9);
 FUNC_0(VAR_8, &VAR_10);






 if ((VAR_9 == VAR_0) || (VAR_10 == VAR_0)) {
  VAR_11 = 0.0f;
 } else {
  VAR_11 = FUNC_2(VAR_9 - VAR_10);
  if (VAR_11 > 3.0f) {
   VAR_11 = 6.0f - VAR_11;
  }
 }

 VAR_11 = VAR_11 * VAR_11 + (VAR_9 - VAR_10) * (VAR_9 - VAR_10) + (VAR_9 - VAR_10) * (VAR_9 - VAR_10);

 return VAR_11;
}
