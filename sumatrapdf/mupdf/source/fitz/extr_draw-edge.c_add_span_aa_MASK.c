
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int super; } ;
typedef TYPE_1__ fz_gel ;
typedef int fz_context ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void
FUNC_1(fz_context *VAR_0, fz_gel *VAR_1, int *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;
 int VAR_9, VAR_10;
 const int VAR_11 = FUNC_0(&VAR_1->super);

 if (VAR_3 == VAR_4)
  return;


 VAR_3 -= VAR_5;
 VAR_4 -= VAR_5;




 VAR_7 = ((unsigned int)VAR_3) / VAR_11;
 VAR_8 = ((unsigned int)VAR_3) % VAR_11;
 VAR_9 = ((unsigned int)VAR_4) / VAR_11;
 VAR_10 = ((unsigned int)VAR_4) % VAR_11;

 if (VAR_7 == VAR_9)
 {
  VAR_2[VAR_7] += VAR_6*(VAR_10 - VAR_8);
  VAR_2[VAR_7+1] += VAR_6*(VAR_8 - VAR_10);
 }

 else
 {
  VAR_2[VAR_7] += VAR_6*(VAR_11 - VAR_8);
  VAR_2[VAR_7+1] += VAR_6*VAR_8;
  VAR_2[VAR_9] += VAR_6*(VAR_10 - VAR_11);
  VAR_2[VAR_9+1] += VAR_6*-VAR_10;
 }
}
