
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ type; struct TYPE_9__* up; } ;
typedef TYPE_1__ fz_html_box ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*,int ,TYPE_1__*) ;

__attribute__((used)) static fz_html_box *FUNC_3(fz_context *VAR_2, fz_html_box *VAR_3, fz_html_box *VAR_4)
{
 fz_html_box *VAR_5 = VAR_4;
 while (VAR_5 && VAR_5->type != VAR_0)
  VAR_5 = VAR_5->up;
 if (VAR_5)
 {
  FUNC_2(VAR_2, VAR_3, VAR_1, VAR_5);
  return VAR_5;
 }
 FUNC_0(VAR_2, "table-row not inside table element");
 FUNC_1(VAR_2, VAR_3, VAR_4);
 return VAR_4;
}
