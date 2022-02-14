
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; struct TYPE_7__* up; } ;
typedef TYPE_1__ fz_html_box ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,TYPE_1__*,int ,TYPE_1__*) ;

__attribute__((used)) static fz_html_box *FUNC_1(fz_context *VAR_4, fz_html_box *VAR_5, fz_html_box *VAR_6)
{
 if (VAR_6->type == VAR_0)
 {
  FUNC_0(VAR_4, VAR_5, VAR_1, VAR_6);
 }
 else if (VAR_6->type == VAR_2)
 {
  while (VAR_6->type != VAR_0)
   VAR_6 = VAR_6->up;
  FUNC_0(VAR_4, VAR_5, VAR_1, VAR_6);
 }
 else if (VAR_6->type == VAR_3)
 {
  while (VAR_6->type != VAR_0)
   VAR_6 = VAR_6->up;
  FUNC_0(VAR_4, VAR_5, VAR_1, VAR_6);
 }
 return VAR_6;
}
