
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int VAR_0 ;

int FUNC_5(int VAR_1, char **VAR_2)
{
 int VAR_3;

 FUNC_4("Mqueue latency :                          ");
 FUNC_0(VAR_0);

 VAR_3 = FUNC_3();
 if (VAR_3 < 0) {
  FUNC_4("[FAILED]\n");
  return FUNC_1();
 }
 FUNC_4("[OK]\n");
 return FUNC_2();
}
