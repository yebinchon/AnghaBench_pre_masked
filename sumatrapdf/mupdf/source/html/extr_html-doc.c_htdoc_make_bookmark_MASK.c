
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int html; } ;
typedef TYPE_1__ html_document ;
struct TYPE_5__ {int page; } ;
typedef TYPE_2__ fz_location ;
typedef int fz_document ;
typedef int fz_context ;
typedef int fz_bookmark ;


 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static fz_bookmark
FUNC_1(fz_context *VAR_0, fz_document *VAR_1, fz_location VAR_2)
{
 html_document *VAR_3 = (html_document*)VAR_1;
 return FUNC_0(VAR_0, VAR_3->html, VAR_2.page);
}
