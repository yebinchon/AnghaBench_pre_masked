
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_property_t ;
typedef int obs_properties_t ;
typedef int obs_data_t ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 char* FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static bool FUNC_4(obs_properties_t *VAR_0, obs_property_t *VAR_1,
      obs_data_t *VAR_2)
{
 const char *VAR_3 =
  FUNC_1(VAR_2, "rate_control");

 bool VAR_4 = FUNC_0(VAR_3, "VCM") == 0 ||
   FUNC_0(VAR_3, "VBR") == 0;
 VAR_1 = FUNC_2(VAR_0, "max_bitrate");
 FUNC_3(VAR_1, VAR_4);

 VAR_4 = FUNC_0(VAR_3, "CQP") == 0 ||
     FUNC_0(VAR_3, "LA_ICQ") == 0 ||
     FUNC_0(VAR_3, "ICQ") == 0;
 VAR_1 = FUNC_2(VAR_0, "bitrate");
 FUNC_3(VAR_1, !VAR_4);

 VAR_4 = FUNC_0(VAR_3, "AVBR") == 0;
 VAR_1 = FUNC_2(VAR_0, "accuracy");
 FUNC_3(VAR_1, VAR_4);
 VAR_1 = FUNC_2(VAR_0, "convergence");
 FUNC_3(VAR_1, VAR_4);

 VAR_4 = FUNC_0(VAR_3, "CQP") == 0;
 VAR_1 = FUNC_2(VAR_0, "qpi");
 FUNC_3(VAR_1, VAR_4);
 VAR_1 = FUNC_2(VAR_0, "qpb");
 FUNC_3(VAR_1, VAR_4);
 VAR_1 = FUNC_2(VAR_0, "qpp");
 FUNC_3(VAR_1, VAR_4);

 VAR_4 = FUNC_0(VAR_3, "ICQ") == 0 ||
     FUNC_0(VAR_3, "LA_ICQ") == 0;
 VAR_1 = FUNC_2(VAR_0, "icq_quality");
 FUNC_3(VAR_1, VAR_4);

 VAR_4 = FUNC_0(VAR_3, "LA_ICQ") == 0 ||
     FUNC_0(VAR_3, "LA_CBR") == 0 ||
     FUNC_0(VAR_3, "LA_VBR") == 0;
 VAR_1 = FUNC_2(VAR_0, "la_depth");
 FUNC_3(VAR_1, VAR_4);

 VAR_4 = FUNC_0(VAR_3, "CBR") == 0 ||
     FUNC_0(VAR_3, "VBR") == 0 ||
     FUNC_0(VAR_3, "AVBR") == 0;
 VAR_1 = FUNC_2(VAR_0, "mbbrc");
 FUNC_3(VAR_1, VAR_4);

 return 1;
}
