
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int image; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ content; struct TYPE_5__* next; } ;
typedef TYPE_2__ fz_html_flow ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(fz_context *VAR_1, fz_html_flow *VAR_2)
{
 while (VAR_2)
 {
  fz_html_flow *VAR_3 = VAR_2->next;
  if (VAR_2->type == VAR_0)
   FUNC_0(VAR_1, VAR_2->content.image);
  VAR_2 = VAR_3;
 }
}
