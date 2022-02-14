
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
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline void FUNC_5(gdImagePtr VAR_0, unsigned int VAR_1, gdImagePtr VAR_2, unsigned int VAR_3, unsigned int VAR_4, LineContribType *VAR_5)
{
    int *VAR_6 = VAR_0->tpixels[VAR_4];
    int *VAR_7 = VAR_2->tpixels[VAR_4];
 unsigned int VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_3 - 1; VAR_8++) {
  register unsigned char VAR_9 = 0, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
        const int VAR_13 = VAR_5->ContribRow[VAR_8].Left;
        const int VAR_14 = VAR_5->ContribRow[VAR_8].Right;
  int VAR_15;


        for (VAR_15 = VAR_13; VAR_15 <= VAR_14; VAR_15++) {
   const int VAR_16 = VAR_15 - VAR_13;
            VAR_9 += (unsigned char)(VAR_5->ContribRow[VAR_8].Weights[VAR_16] * (double)(FUNC_4(VAR_6[VAR_15])));
            VAR_10 += (unsigned char)(VAR_5->ContribRow[VAR_8].Weights[VAR_16] * (double)(FUNC_3(VAR_6[VAR_15])));
            VAR_11 += (unsigned char)(VAR_5->ContribRow[VAR_8].Weights[VAR_16] * (double)(FUNC_2(VAR_6[VAR_15])));
   VAR_12 += (unsigned char)(VAR_5->ContribRow[VAR_8].Weights[VAR_16] * (double)(FUNC_1(VAR_6[VAR_15])));
        }
        VAR_7[VAR_8] = FUNC_0(VAR_9, VAR_10, VAR_11, VAR_12);
    }
}
