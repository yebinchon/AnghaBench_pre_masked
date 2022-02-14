
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_page ;
typedef int fz_link ;
typedef int fz_context ;
struct TYPE_3__ {int number; int html; TYPE_2__* ch; int * doc; } ;
typedef TYPE_1__ epub_page ;
typedef int epub_document ;
struct TYPE_4__ {int path; } ;
typedef TYPE_2__ epub_chapter ;


 int * FUNC_0 (int *,int ,int ,int ,int *) ;

__attribute__((used)) static fz_link *
FUNC_1(fz_context *VAR_0, fz_page *VAR_1)
{
 epub_page *VAR_2 = (epub_page*)VAR_1;
 epub_document *VAR_3 = VAR_2->doc;
 epub_chapter *VAR_4 = VAR_2->ch;

 return FUNC_0(VAR_0, VAR_2->html, VAR_2->number, VAR_4->path, VAR_3);
}
