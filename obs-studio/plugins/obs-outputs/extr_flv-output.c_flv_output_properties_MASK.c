
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_properties_t ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,int ,int ) ;
 int * FUNC_3 () ;

__attribute__((used)) static obs_properties_t *FUNC_4(void *VAR_1)
{
 FUNC_0(VAR_1);

 obs_properties_t *VAR_2 = FUNC_3();

 FUNC_2(VAR_2, "path",
    FUNC_1("FLVOutput.FilePath"),
    VAR_0);
 return VAR_2;
}
