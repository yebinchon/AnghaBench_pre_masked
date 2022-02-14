
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* href; struct TYPE_3__* up; } ;
typedef TYPE_1__ fz_html_box ;


 int FUNC_0 (char const*,char const*) ;

__attribute__((used)) static int FUNC_1(fz_html_box *VAR_0, const char *VAR_1)
{
 while (VAR_0)
 {
  const char *VAR_2 = VAR_0->href;
  if (VAR_2)
   return !FUNC_0(VAR_1, VAR_2);
  VAR_0 = VAR_0->up;
 }
 return 0;
}
