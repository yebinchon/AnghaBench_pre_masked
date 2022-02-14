
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int number; TYPE_2__* doc; } ;
typedef TYPE_1__ html_page ;
struct TYPE_5__ {int html; } ;
typedef TYPE_2__ html_document ;
typedef int fz_page ;
typedef int fz_link ;
typedef int fz_context ;


 int * FUNC_0 (int *,int ,int ,char*,TYPE_2__*) ;

__attribute__((used)) static fz_link *
FUNC_1(fz_context *VAR_0, fz_page *VAR_1)
{
 html_page *VAR_2 = (html_page*)VAR_1;
 html_document *VAR_3 = VAR_2->doc;
 return FUNC_0(VAR_0, VAR_3->html, VAR_2->number, "", VAR_3);
}
