
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int predictor; int (* printdir ) (int *,int *,long) ;} ;
typedef TYPE_1__ TIFFPredictorState ;
typedef int TIFF ;
typedef int FILE ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,int *,long) ;

__attribute__((used)) static void
FUNC_4(TIFF* VAR_1, FILE* VAR_2, long VAR_3)
{
 TIFFPredictorState* VAR_4 = FUNC_0(VAR_1);

 (void) VAR_3;
 if (FUNC_1(VAR_1,VAR_0)) {
  FUNC_2(VAR_2, "  Predictor: ");
  switch (VAR_4->predictor) {
   case 1: FUNC_2(VAR_2, "none "); break;
   case 2: FUNC_2(VAR_2, "horizontal differencing "); break;
   case 3: FUNC_2(VAR_2, "floating point predictor "); break;
  }
  FUNC_2(VAR_2, "%d (0x%x)\n", VAR_4->predictor, VAR_4->predictor);
 }
 if (VAR_4->printdir)
  (*VAR_4->printdir)(VAR_1, VAR_2, VAR_3);
}
