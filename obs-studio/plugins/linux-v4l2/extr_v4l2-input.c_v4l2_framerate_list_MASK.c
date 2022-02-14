
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint_fast32_t ;
struct TYPE_2__ {float numerator; scalar_t__ denominator; } ;
struct v4l2_frmivalenum {int type; scalar_t__ index; TYPE_1__ discrete; void* height; void* width; void* pixel_format; } ;
struct dstr {int array; } ;
typedef int obs_property_t ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dstr*) ;
 int FUNC_2 (struct dstr*) ;
 int FUNC_3 (struct dstr*,char*,float) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ,int const) ;
 int FUNC_6 (int *) ;
 int* VAR_2 ;
 int FUNC_7 (int,int ,struct v4l2_frmivalenum*) ;
 int FUNC_8 (float,scalar_t__) ;
 int FUNC_9 (int*,int*,int const) ;

__attribute__((used)) static void FUNC_10(int VAR_3, uint_fast32_t VAR_4,
    uint_fast32_t VAR_5, uint_fast32_t VAR_6,
    obs_property_t *VAR_7)
{
 struct v4l2_frmivalenum VAR_8;
 VAR_8.pixel_format = VAR_4;
 VAR_8.width = VAR_5;
 VAR_8.height = VAR_6;
 VAR_8.index = 0;
 struct dstr VAR_9;
 FUNC_2(&VAR_9);

 FUNC_6(VAR_7);

 FUNC_5(VAR_7, FUNC_4("LeaveUnchanged"), -1);

 FUNC_7(VAR_3, VAR_1, &VAR_8);

 switch (VAR_8.type) {
 case 128:
  while (FUNC_7(VAR_3, VAR_1, &VAR_8) ==
         0) {
   float VAR_10 = (float)VAR_8.discrete.denominator /
        VAR_8.discrete.numerator;
   int VAR_11 =
    FUNC_8(VAR_8.discrete.numerator,
      VAR_8.discrete.denominator);
   FUNC_3(&VAR_9, "%.2f", VAR_10);
   FUNC_5(VAR_7, VAR_9.array, VAR_11);
   VAR_8.index++;
  }
  break;
 default:
  FUNC_0(VAR_0, "Stepwise and Continuous framerates "
          "are currently hardcoded");

  for (const int *VAR_12 = VAR_2; *VAR_12; ++VAR_12) {
   int VAR_13;
   int VAR_14;
   FUNC_9(&VAR_13, &VAR_14, *VAR_12);
   float VAR_15 = (float)VAR_14 / VAR_13;
   FUNC_3(&VAR_9, "%.2f", VAR_15);
   FUNC_5(VAR_7, VAR_9.array, *VAR_12);
  }
  break;
 }

 FUNC_1(&VAR_9);
}
