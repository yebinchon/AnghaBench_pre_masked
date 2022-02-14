
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct media_frames_per_second {int denominator; int numerator; } ;
typedef int obs_data_t ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,char const*) ;

__attribute__((used)) static inline obs_data_t *
FUNC_3(struct media_frames_per_second VAR_0, const char *VAR_1)
{
 obs_data_t *VAR_2 = FUNC_0();

 if (!VAR_1) {
  FUNC_1(VAR_2, "numerator", VAR_0.numerator);
  FUNC_1(VAR_2, "denominator", VAR_0.denominator);

 } else {
  FUNC_2(VAR_2, "option", VAR_1);
 }

 return VAR_2;
}
