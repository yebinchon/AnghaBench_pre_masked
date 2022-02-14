
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
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int *,size_t,int) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static bool FUNC_6(obs_properties_t *VAR_0, obs_property_t *VAR_1,
      obs_data_t *VAR_2)
{
 const char *VAR_3 = FUNC_1(VAR_2, "rate_control");
 bool VAR_4 = FUNC_0(VAR_3, "CQP") == 0;
 bool VAR_5 = FUNC_0(VAR_3, "VBR") == 0;
 bool VAR_6 = FUNC_0(VAR_3, "lossless") == 0;
 size_t VAR_7;

 VAR_1 = FUNC_2(VAR_0, "bitrate");
 FUNC_5(VAR_1, !VAR_4 && !VAR_6);
 VAR_1 = FUNC_2(VAR_0, "max_bitrate");
 FUNC_5(VAR_1, VAR_5);
 VAR_1 = FUNC_2(VAR_0, "cqp");
 FUNC_5(VAR_1, VAR_4);

 VAR_1 = FUNC_2(VAR_0, "preset");
 VAR_7 = FUNC_3(VAR_1);

 for (size_t VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  bool VAR_9 = (VAR_8 == 0 || VAR_8 == 3);
  FUNC_4(VAR_1, VAR_8, VAR_6 && !VAR_9);
 }

 return 1;
}
