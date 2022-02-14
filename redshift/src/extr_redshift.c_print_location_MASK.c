
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float lat; float lon; } ;
typedef TYPE_1__ location_t ;


 char* FUNC_0 (char*) ;
 double FUNC_1 (float) ;
 int FUNC_2 (char*,double,char const*,double,char const*) ;

__attribute__((used)) static void
FUNC_3(const location_t *VAR_0)
{

 const char *VAR_1 = FUNC_0("N");

 const char *VAR_2 = FUNC_0("S");

 const char *VAR_3 = FUNC_0("E");

 const char *VAR_4 = FUNC_0("W");




 FUNC_2(FUNC_0("Location: %.2f %s, %.2f %s\n"),
        FUNC_1(VAR_0->lat), VAR_0->lat >= 0.f ? VAR_1 : VAR_2,
        FUNC_1(VAR_0->lon), VAR_0->lon >= 0.f ? VAR_3 : VAR_4);
}
