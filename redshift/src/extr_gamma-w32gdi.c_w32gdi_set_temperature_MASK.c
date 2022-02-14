
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int saved_ramps; } ;
typedef TYPE_1__ w32gdi_state_t ;
typedef int color_setting_t ;
typedef double WORD ;
typedef int * HDC ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,double*) ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (double*,double*,double*,int,int const*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (double*) ;
 double* FUNC_7 (int) ;
 int FUNC_8 (double*,int ,int) ;
 int FUNC_9 (char*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_10(
 w32gdi_state_t *VAR_5, const color_setting_t *VAR_6, int VAR_7)
{
 BOOL VAR_8;


 HDC VAR_9 = FUNC_0(((void*)0));
 if (VAR_9 == ((void*)0)) {
  FUNC_5(FUNC_3("Unable to open device context.\n"), VAR_4);
  return -1;
 }


 WORD *VAR_10 = FUNC_7(3*VAR_1*sizeof(WORD));
 if (VAR_10 == ((void*)0)) {
  FUNC_9("malloc");
  FUNC_1(((void*)0), VAR_9);
  return -1;
 }

 WORD *VAR_11 = &VAR_10[0*VAR_1];
 WORD *VAR_12 = &VAR_10[1*VAR_1];
 WORD *VAR_13 = &VAR_10[2*VAR_1];

 if (VAR_7) {

  FUNC_8(VAR_10, VAR_5->saved_ramps,
         3*VAR_1*sizeof(WORD));
 } else {

  for (int VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
   WORD VAR_15 = (double)VAR_14/VAR_1 *
    (VAR_3+1);
   VAR_11[VAR_14] = VAR_15;
   VAR_12[VAR_14] = VAR_15;
   VAR_13[VAR_14] = VAR_15;
  }
 }

 FUNC_4(VAR_11, VAR_12, VAR_13, VAR_1,
         VAR_6);


 VAR_8 = VAR_0;
 for (int VAR_16 = 0; VAR_16 < VAR_2 && !VAR_8; VAR_16++) {



  VAR_8 = FUNC_2(VAR_9, VAR_10);
 }
 if (!VAR_8) {
  FUNC_5(FUNC_3("Unable to set gamma ramps.\n"), VAR_4);
  FUNC_6(VAR_10);
  FUNC_1(((void*)0), VAR_9);
  return -1;
 }

 FUNC_6(VAR_10);


 FUNC_1(((void*)0), VAR_9);

 return 0;
}
