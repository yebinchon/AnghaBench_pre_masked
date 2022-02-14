
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_data_t ;
typedef int json_t ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int) ;

__attribute__((used)) static void FUNC_5(obs_data_t *VAR_0,
      json_t *VAR_1)
{
 json_t *VAR_2 = FUNC_2(VAR_1, "max audio bitrate");
 if (FUNC_1(VAR_2)) {
  int VAR_3 = (int)FUNC_0(VAR_2);
  if (FUNC_3(VAR_0, "bitrate") > VAR_3)
   FUNC_4(VAR_0, "bitrate", VAR_3);
 }
}
