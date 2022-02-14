
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_data_t ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,char*) ;

__attribute__((used)) static void FUNC_3(obs_data_t *VAR_0)
{
 FUNC_1(VAR_0, "max_time_sec", 15);
 FUNC_1(VAR_0, "max_size_mb", 500);
 FUNC_2(VAR_0, "format", "%CCYY-%MM-%DD %hh-%mm-%ss");
 FUNC_2(VAR_0, "extension", "mp4");
 FUNC_0(VAR_0, "allow_spaces", 1);
}
