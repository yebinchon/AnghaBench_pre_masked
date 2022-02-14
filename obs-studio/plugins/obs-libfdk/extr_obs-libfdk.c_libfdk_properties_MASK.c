
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_properties_t ;


 int FUNC_0 (void*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ,int,int,int) ;
 int * FUNC_4 () ;

__attribute__((used)) static obs_properties_t *FUNC_5(void *VAR_0)
{
 FUNC_0(VAR_0);

 obs_properties_t *VAR_1 = FUNC_4();

 FUNC_3(VAR_1, "bitrate", FUNC_1("Bitrate"), 32,
          1024, 32);
 FUNC_2(VAR_1, "afterburner",
    FUNC_1("Afterburner"));

 return VAR_1;
}
