
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_source_t ;
typedef int obs_data_t ;


 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,char const*) ;
 int * FUNC_4 (char*,int *,int *) ;

__attribute__((used)) static obs_source_t *FUNC_5(const char *VAR_0)
{
 obs_data_t *VAR_1 = FUNC_0();
 obs_source_t *VAR_2;

 FUNC_3(VAR_1, "file", VAR_0);
 FUNC_2(VAR_1, "unload", 0);
 VAR_2 = FUNC_4("image_source", ((void*)0), VAR_1);

 FUNC_1(VAR_1);
 return VAR_2;
}
