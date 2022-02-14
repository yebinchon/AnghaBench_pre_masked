
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* text; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ content; } ;
typedef TYPE_2__ fz_html_flow ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static const char *FUNC_0(fz_context *VAR_3, fz_html_flow *VAR_4)
{
 if (VAR_4->type == VAR_2)
  return VAR_4->content.text;
 else if (VAR_4->type == VAR_1)
  return " ";
 else if (VAR_4->type == VAR_0)
  return "-";
 else
  return "";
}
