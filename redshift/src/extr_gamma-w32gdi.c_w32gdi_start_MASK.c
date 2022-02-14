
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * saved_ramps; } ;
typedef TYPE_1__ w32gdi_state_t ;
typedef int WORD ;
typedef int * HDC ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ) ;
 int * FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_8(w32gdi_state_t *VAR_4)
{
 BOOL VAR_5;


 HDC VAR_6 = FUNC_0(((void*)0));
 if (VAR_6 == ((void*)0)) {
  FUNC_5(FUNC_4("Unable to open device context.\n"), VAR_3);
  return -1;
 }


 int VAR_7 = FUNC_1(VAR_6, VAR_1);
 if (VAR_7 != VAR_0) {
  FUNC_5(FUNC_4("Display device does not support gamma ramps.\n"),
        VAR_3);
  return -1;
 }


 VAR_4->saved_ramps = FUNC_6(3*VAR_2*sizeof(WORD));
 if (VAR_4->saved_ramps == ((void*)0)) {
  FUNC_7("malloc");
  FUNC_3(((void*)0), VAR_6);
  return -1;
 }


 VAR_5 = FUNC_2(VAR_6, VAR_4->saved_ramps);
 if (!VAR_5) {
  FUNC_5(FUNC_4("Unable to save current gamma ramp.\n"), VAR_3);
  FUNC_3(((void*)0), VAR_6);
  return -1;
 }


 FUNC_3(((void*)0), VAR_6);

 return 0;
}
