
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_properties_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ,int,int,int) ;
 int * FUNC_3 () ;

__attribute__((used)) static obs_properties_t *FUNC_4(void *VAR_0)
{
 (void)VAR_0;

 obs_properties_t *VAR_1 = FUNC_3();

 FUNC_2(VAR_1, "channels", FUNC_0("Channels"),
          1, 8, 1);
 FUNC_1(VAR_1, "startjack",
    FUNC_0("StartJACKServer"));

 return VAR_1;
}
