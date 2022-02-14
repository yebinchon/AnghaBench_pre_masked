
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* uri; struct TYPE_5__* next; int refs; } ;
typedef TYPE_1__ fz_link ;
typedef int fz_context ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*,int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;

void
FUNC_2(fz_context *VAR_0, fz_link *VAR_1)
{
 while (FUNC_0(VAR_0, VAR_1, &VAR_1->refs))
 {
  fz_link *VAR_2 = VAR_1->next;
  FUNC_1(VAR_0, VAR_1->uri);
  FUNC_1(VAR_0, VAR_1);
  VAR_1 = VAR_2;
 }
}
