
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint_fast32_t ;
struct TYPE_2__ {int width; int height; } ;
struct v4l2_frmsizeenum {int type; scalar_t__ index; TYPE_1__ discrete; int pixel_format; } ;
struct dstr {int array; } ;
typedef int obs_property_t ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dstr*) ;
 int FUNC_2 (struct dstr*) ;
 int FUNC_3 (struct dstr*,char*,int,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ,int const) ;
 int FUNC_6 (int *) ;
 int* VAR_2 ;
 int FUNC_7 (int,int ,struct v4l2_frmsizeenum*) ;
 int const FUNC_8 (int,int) ;
 int FUNC_9 (int*,int*,int const) ;

__attribute__((used)) static void FUNC_10(int VAR_3, uint_fast32_t VAR_4,
     obs_property_t *VAR_5)
{
 struct v4l2_frmsizeenum VAR_6;
 VAR_6.pixel_format = VAR_4;
 VAR_6.index = 0;
 struct dstr VAR_7;
 FUNC_2(&VAR_7);

 FUNC_6(VAR_5);

 FUNC_5(VAR_5, FUNC_4("LeaveUnchanged"), -1);

 FUNC_7(VAR_3, VAR_1, &VAR_6);

 switch (VAR_6.type) {
 case 128:
  while (FUNC_7(VAR_3, VAR_1, &VAR_6) == 0) {
   FUNC_3(&VAR_7, "%dx%d", VAR_6.discrete.width,
        VAR_6.discrete.height);
   FUNC_5(
    VAR_5, VAR_7.array,
    FUNC_8(VAR_6.discrete.width,
      VAR_6.discrete.height));
   VAR_6.index++;
  }
  break;
 default:
  FUNC_0(VAR_0, "Stepwise and Continuous framesizes "
          "are currently hardcoded");

  for (const int *VAR_8 = VAR_2; *VAR_8; ++VAR_8) {
   int VAR_9;
   int VAR_10;
   FUNC_9(&VAR_9, &VAR_10, *VAR_8);
   FUNC_3(&VAR_7, "%dx%d", VAR_9, VAR_10);
   FUNC_5(VAR_5, VAR_7.array, *VAR_8);
  }
  break;
 }

 FUNC_1(&VAR_7);
}
