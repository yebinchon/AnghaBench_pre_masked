
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_properties_t ;


 int FUNC_0 (void*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,int ,int,int,int) ;
 int * FUNC_3 () ;

__attribute__((used)) static obs_properties_t *FUNC_4(void *VAR_0)
{
 FUNC_0(VAR_0);

 obs_properties_t *VAR_1 = FUNC_3();
 FUNC_2(VAR_1, "bitrate", FUNC_1("Bitrate"), 64,
          1024, 32);
 return VAR_1;
}
