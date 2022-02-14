
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char const* data; } ;
typedef TYPE_1__ fz_css_value ;
struct TYPE_8__ {struct TYPE_8__* up; } ;
typedef TYPE_2__ fz_css_match ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 TYPE_1__* FUNC_3 (TYPE_2__*,char const*) ;

__attribute__((used)) static fz_css_value *
FUNC_4(fz_css_match *VAR_1, const char *VAR_2)
{
 fz_css_value *VAR_3;

 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (VAR_1->up)
 {
  if (VAR_3 && !FUNC_2(VAR_3->data, "inherit"))
   if (FUNC_2(VAR_2, "font-size") != 0)
    return FUNC_4(VAR_1->up, VAR_2);
  if (!VAR_3 && FUNC_0(VAR_2, VAR_0, FUNC_1(VAR_0)))
   return FUNC_4(VAR_1->up, VAR_2);
 }
 return VAR_3;
}
