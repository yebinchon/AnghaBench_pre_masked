
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int text; } ;
struct TYPE_5__ {int type; struct TYPE_5__* next; TYPE_1__ content; } ;
typedef TYPE_2__ fz_html_flow ;
typedef int fz_context ;
typedef int fz_buffer ;





 int FUNC_0 (int *,int *,char) ;
 int FUNC_1 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, fz_buffer *VAR_1, fz_html_flow *VAR_2)
{
 while (VAR_2)
 {
  switch (VAR_2->type)
  {
  case 128:
   FUNC_1(VAR_0, VAR_1, VAR_2->content.text);
   break;
  case 129:
  case 130:
   FUNC_0(VAR_0, VAR_1, ' ');
   break;
  default:
   break;
  }
  VAR_2 = VAR_2->next;
 }
}
