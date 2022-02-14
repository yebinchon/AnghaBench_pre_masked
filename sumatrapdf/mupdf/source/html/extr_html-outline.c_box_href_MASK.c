
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* href; struct TYPE_3__* up; } ;
typedef TYPE_1__ fz_html_box ;



__attribute__((used)) static const char *FUNC_0(fz_html_box *VAR_0)
{
 while (VAR_0)
 {
  const char *VAR_1 = VAR_0->href;
  if (VAR_1)
   return VAR_1;
  VAR_0 = VAR_0->up;
 }
 return ((void*)0);
}
