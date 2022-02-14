
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_data_t ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,float) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,char*) ;

__attribute__((used)) static void FUNC_4(obs_data_t *VAR_0)
{
 FUNC_2(VAR_0, "bitrate", 2500);
 FUNC_0(VAR_0, "limit_bitrate", 0);
 FUNC_2(VAR_0, "max_bitrate", 2500);
 FUNC_1(VAR_0, "max_bitrate_window", 1.5f);
 FUNC_2(VAR_0, "keyint_sec", 0);
 FUNC_3(VAR_0, "profile", "");
 FUNC_0(VAR_0, "bframes", 1);
}
