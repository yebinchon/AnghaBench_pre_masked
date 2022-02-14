
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; struct TYPE_7__* up; } ;
typedef TYPE_1__ fz_html_box ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*,scalar_t__,TYPE_1__*) ;

__attribute__((used)) static fz_html_box *FUNC_1(fz_context *VAR_3, fz_html_box *VAR_4, fz_html_box *VAR_5)
{
 if (VAR_5->type == VAR_0)
 {
  FUNC_0(VAR_3, VAR_4, VAR_0, VAR_5);
 }
 else if (VAR_5->type == VAR_1)
 {
  while (VAR_5->type != VAR_0)
   VAR_5 = VAR_5->up;
  FUNC_0(VAR_3, VAR_4, VAR_0, VAR_5);
 }
 else if (VAR_5->type == VAR_2)
 {
  while (VAR_5->type != VAR_0)
   VAR_5 = VAR_5->up;
  FUNC_0(VAR_3, VAR_4, VAR_0, VAR_5);
 }
 return VAR_5;
}
