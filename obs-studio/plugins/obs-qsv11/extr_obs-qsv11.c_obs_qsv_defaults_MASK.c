
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
 FUNC_2(VAR_0, "target_usage", "balanced");
 FUNC_1(VAR_0, "bitrate", 2500);
 FUNC_1(VAR_0, "max_bitrate", 3000);
 FUNC_2(VAR_0, "profile", "high");
 FUNC_1(VAR_0, "async_depth", 4);
 FUNC_2(VAR_0, "rate_control", "CBR");

 FUNC_1(VAR_0, "accuracy", 1000);
 FUNC_1(VAR_0, "convergence", 1);
 FUNC_1(VAR_0, "qpi", 23);
 FUNC_1(VAR_0, "qpp", 23);
 FUNC_1(VAR_0, "qpb", 23);
 FUNC_1(VAR_0, "icq_quality", 23);
 FUNC_1(VAR_0, "la_depth", 15);

 FUNC_1(VAR_0, "keyint_sec", 3);
 FUNC_1(VAR_0, "bframes", 3);
 FUNC_0(VAR_0, "mbbrc", 1);
}
