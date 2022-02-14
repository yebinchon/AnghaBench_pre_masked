
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_property_t ;
typedef int obs_properties_t ;
typedef int obs_data_t ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static bool FUNC_5(obs_properties_t *VAR_0, obs_property_t *VAR_1,
      obs_data_t *VAR_2)
{
 const char *VAR_3 = FUNC_2(VAR_2, "rate_control");
 bool VAR_4 = FUNC_1(VAR_2, "use_bufsize");
 bool VAR_5 = FUNC_0(VAR_3, "CBR") == 0 || FUNC_0(VAR_3, "ABR") == 0;
 bool VAR_6 = FUNC_0(VAR_3, "CRF") == 0;

 VAR_1 = FUNC_3(VAR_0, "crf");
 FUNC_4(VAR_1, !VAR_5);

 VAR_1 = FUNC_3(VAR_0, "bitrate");
 FUNC_4(VAR_1, !VAR_6);
 VAR_1 = FUNC_3(VAR_0, "use_bufsize");
 FUNC_4(VAR_1, !VAR_6);
 VAR_1 = FUNC_3(VAR_0, "buffer_size");
 FUNC_4(VAR_1, !VAR_6 && VAR_4);
 return 1;
}
