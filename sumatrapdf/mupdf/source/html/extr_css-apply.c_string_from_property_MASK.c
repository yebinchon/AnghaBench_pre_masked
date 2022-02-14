
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* data; } ;
typedef TYPE_1__ fz_css_value ;
typedef int fz_css_match ;


 TYPE_1__* FUNC_0 (int *,char const*) ;

__attribute__((used)) static const char *
FUNC_1(fz_css_match *VAR_0, const char *VAR_1, const char *VAR_2)
{
 fz_css_value *VAR_3;
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_3)
  return VAR_2;
 return VAR_3->data;
}
