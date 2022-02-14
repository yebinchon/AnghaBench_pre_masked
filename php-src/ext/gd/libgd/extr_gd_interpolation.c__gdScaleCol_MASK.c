
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* gdImagePtr ;
struct TYPE_9__ {TYPE_1__* ContribRow; } ;
struct TYPE_8__ {int** tpixels; } ;
struct TYPE_7__ {int Left; int Right; double* Weights; } ;
typedef TYPE_3__ LineContribType ;


 int FUNC_0 (unsigned char,unsigned char,unsigned char,unsigned char) ;
 scalar_t__ FUNC_1 (int const) ;
 scalar_t__ FUNC_2 (int const) ;
 scalar_t__ FUNC_3 (int const) ;
 scalar_t__ FUNC_4 (int const) ;

__attribute__((used)) static inline void FUNC_5 (gdImagePtr VAR_0, unsigned int VAR_1, gdImagePtr VAR_2, unsigned int VAR_3, unsigned int VAR_4, unsigned int VAR_5, LineContribType *VAR_6)
{
 unsigned int VAR_7;
 for (VAR_7 = 0; VAR_7 < VAR_4 - 1; VAR_7++) {
  register unsigned char VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
  const int VAR_12 = VAR_6->ContribRow[VAR_7].Left;
  const int VAR_13 = VAR_6->ContribRow[VAR_7].Right;
  int VAR_14;


  for (VAR_14 = VAR_12; VAR_14 <= VAR_13; VAR_14++) {
   const int VAR_15 = VAR_0->tpixels[VAR_14][VAR_5];
   const int VAR_16 = VAR_14 - VAR_12;
   VAR_8 += (unsigned char)(VAR_6->ContribRow[VAR_7].Weights[VAR_16] * (double)(FUNC_4(VAR_15)));
   VAR_9 += (unsigned char)(VAR_6->ContribRow[VAR_7].Weights[VAR_16] * (double)(FUNC_3(VAR_15)));
   VAR_10 += (unsigned char)(VAR_6->ContribRow[VAR_7].Weights[VAR_16] * (double)(FUNC_2(VAR_15)));
   VAR_11 += (unsigned char)(VAR_6->ContribRow[VAR_7].Weights[VAR_16] * (double)(FUNC_1(VAR_15)));
  }
  VAR_2->tpixels[VAR_7][VAR_5] = FUNC_0(VAR_8, VAR_9, VAR_10, VAR_11);
 }
}
