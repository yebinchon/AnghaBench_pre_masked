
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xps_document ;
typedef int fz_rect ;
struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ fz_link ;
typedef int fz_context ;


 TYPE_1__* FUNC_0 (int *,int ,int *,char*) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, xps_document *VAR_1, fz_rect VAR_2, char *VAR_3, char *VAR_4, fz_link **VAR_5)
{
 fz_link *VAR_6 = FUNC_0(VAR_0, VAR_2, VAR_1, VAR_4);
 VAR_6->next = *VAR_5;
 *VAR_5 = VAR_6;
}
