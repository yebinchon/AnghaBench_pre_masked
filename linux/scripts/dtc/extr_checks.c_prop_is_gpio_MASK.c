
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {char* name; } ;


 scalar_t__ FUNC_0 (char*,char*) ;
 char* FUNC_1 (char*,char) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static bool FUNC_3(struct property *VAR_0)
{
 char *VAR_1;





 if (FUNC_2(VAR_0->name, "nr-gpio"))
  return 0;

 VAR_1 = FUNC_1(VAR_0->name, '-');
 if (VAR_1)
  VAR_1++;
 else
  VAR_1 = VAR_0->name;
 if (!(FUNC_0(VAR_1, "gpios") || FUNC_0(VAR_1, "gpio")))
  return 0;

 return 1;
}
