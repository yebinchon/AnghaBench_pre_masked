
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int saved_ramps; } ;
typedef TYPE_1__ w32gdi_state_t ;
typedef int * HDC ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5(w32gdi_state_t *VAR_3)
{

 HDC VAR_4 = FUNC_0(((void*)0));
 if (VAR_4 == ((void*)0)) {
  FUNC_4(FUNC_3("Unable to open device context.\n"), VAR_2);
  return;
 }


 BOOL VAR_5 = VAR_0;
 for (int VAR_6 = 0; VAR_6 < VAR_1 && !VAR_5; VAR_6++) {



  VAR_5 = FUNC_2(VAR_4, VAR_3->saved_ramps);
 }
 if (!VAR_5) FUNC_4(FUNC_3("Unable to restore gamma ramps.\n"), VAR_2);


 FUNC_1(((void*)0), VAR_4);
}
