
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef double (* interpolation_method ) (double) ;
struct TYPE_7__ {TYPE_1__* ContribRow; } ;
struct TYPE_6__ {int Left; int Right; double* Weights; } ;
typedef TYPE_2__ LineContribType ;


 double VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;
 TYPE_2__* FUNC_2 (unsigned int,int) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (double const) ;
 scalar_t__ FUNC_5 (double const) ;
 double FUNC_6 (double) ;

__attribute__((used)) static inline LineContribType *FUNC_7(unsigned int VAR_1, unsigned int VAR_2, double VAR_3, const interpolation_method VAR_4)
{
 double VAR_5;
 double VAR_6 = 1.0;
 const double VAR_7 = VAR_0;
 int VAR_8;
 unsigned int VAR_9;
 LineContribType *VAR_10;

 if (VAR_3 < 1.0) {
  VAR_5 = VAR_7 / VAR_3;
  VAR_6 = VAR_3;
 } else {
  VAR_5= VAR_7;
 }

 VAR_8 = 2 * (int)FUNC_4(VAR_5) + 1;
 VAR_10 = FUNC_2(VAR_1, VAR_8);
 if (VAR_10 == ((void*)0)) {
  return ((void*)0);
 }
 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
 const double VAR_11 = (double)VAR_9 / VAR_3;

 register int VAR_12 = FUNC_0(0, (int)FUNC_5 (VAR_11 - VAR_5));
 int VAR_13 = FUNC_1((int)FUNC_4(VAR_11 + VAR_5), (int)VAR_2 - 1);
 double VAR_14 = 0.0;
  int VAR_15;


 if (VAR_13 - VAR_12 + 1 > VAR_8) {
  if (VAR_12 < ((int)VAR_2 - 1 / 2)) {
   VAR_12++;
  } else {
   VAR_13--;
  }
 }

 VAR_10->ContribRow[VAR_9].Left = VAR_12;
 VAR_10->ContribRow[VAR_9].Right = VAR_13;

 for (VAR_15 = VAR_12; VAR_15 <= VAR_13; VAR_15++) {
  VAR_14 += (VAR_10->ContribRow[VAR_9].Weights[VAR_15-VAR_12] = VAR_6 * (*VAR_4)(VAR_6 * (VAR_11 - (double)VAR_15)));
 }

  if (VAR_14 < 0.0) {
   FUNC_3(VAR_10);
   return ((void*)0);
  }

 if (VAR_14 > 0.0) {
  for (VAR_15 = VAR_12; VAR_15 <= VAR_13; VAR_15++) {
   VAR_10->ContribRow[VAR_9].Weights[VAR_15-VAR_12] /= VAR_14;
  }
 }
 }
 return VAR_10;
}
