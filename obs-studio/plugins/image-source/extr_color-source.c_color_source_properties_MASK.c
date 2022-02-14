
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_properties_t ;


 int FUNC_0 (void*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ,int ,int,int) ;
 int * FUNC_4 () ;

__attribute__((used)) static obs_properties_t *FUNC_5(void *VAR_0)
{
 FUNC_0(VAR_0);

 obs_properties_t *VAR_1 = FUNC_4();

 FUNC_2(VAR_1, "color",
     FUNC_1("ColorSource.Color"));

 FUNC_3(VAR_1, "width",
          FUNC_1("ColorSource.Width"), 0, 4096,
          1);

 FUNC_3(VAR_1, "height",
          FUNC_1("ColorSource.Height"), 0, 4096,
          1);

 return VAR_1;
}
