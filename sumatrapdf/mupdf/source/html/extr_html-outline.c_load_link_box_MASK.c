
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_link ;
struct TYPE_3__ {struct TYPE_3__* next; struct TYPE_3__* down; scalar_t__ flow_head; } ;
typedef TYPE_1__ fz_html_box ;
typedef int fz_context ;


 int * FUNC_0 (int *,scalar_t__,int *,int,float,char const*,char const*) ;

__attribute__((used)) static fz_link *FUNC_1(fz_context *VAR_0, fz_html_box *VAR_1, fz_link *VAR_2, int VAR_3, float VAR_4, const char *VAR_5, const char *VAR_6)
{
 while (VAR_1)
 {
  if (VAR_1->flow_head)
   VAR_2 = FUNC_0(VAR_0, VAR_1->flow_head, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
  if (VAR_1->down)
   VAR_2 = FUNC_1(VAR_0, VAR_1->down, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
  VAR_1 = VAR_1->next;
 }
 return VAR_2;
}
