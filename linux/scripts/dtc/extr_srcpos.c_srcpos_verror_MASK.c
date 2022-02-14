
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct srcpos {int dummy; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (struct srcpos*) ;
 int VAR_0 ;
 int FUNC_3 (int ,char const*,int ) ;

void FUNC_4(struct srcpos *VAR_1, const char *VAR_2,
     const char *VAR_3, va_list VAR_4)
{
 char *VAR_5;

 VAR_5 = FUNC_2(VAR_1);

 FUNC_0(VAR_0, "%s: %s ", VAR_2, VAR_5);
 FUNC_3(VAR_0, VAR_3, VAR_4);
 FUNC_0(VAR_0, "\n");

 FUNC_1(VAR_5);
}
