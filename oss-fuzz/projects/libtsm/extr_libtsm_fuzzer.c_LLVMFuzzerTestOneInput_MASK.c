
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tsm_vte {int dummy; } ;
struct tsm_screen {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tsm_screen*,int ,int *) ;
 int FUNC_1 (struct tsm_screen**,int *,int *) ;
 int FUNC_2 (struct tsm_screen*,int ,int ) ;
 int FUNC_3 (struct tsm_screen*,int const) ;
 int FUNC_4 (struct tsm_screen*) ;
 int FUNC_5 (struct tsm_vte*,char const*,size_t) ;
 int FUNC_6 (struct tsm_vte**,struct tsm_screen*,int ,int *,int *,int *) ;
 int FUNC_7 (struct tsm_vte*) ;

int FUNC_8(const uint8_t* VAR_4, size_t VAR_5) {
  struct tsm_screen *VAR_6;
  struct tsm_vte *VAR_7;
  const int VAR_8 = 200;

  FUNC_1(&VAR_6, ((void*)0), ((void*)0));
  FUNC_3(VAR_6, VAR_8);
  FUNC_6(&VAR_7, VAR_6, VAR_3, ((void*)0), ((void*)0), ((void*)0));
  FUNC_2(VAR_6, VAR_1, VAR_0);

  FUNC_5(VAR_7, (const char*) VAR_4, VAR_5);
  FUNC_0(VAR_6, VAR_2, ((void*)0));

  FUNC_7(VAR_7);
  FUNC_4(VAR_6);
  return 0;
}
