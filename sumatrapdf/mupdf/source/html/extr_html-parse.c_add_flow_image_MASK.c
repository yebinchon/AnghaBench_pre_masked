
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_pool ;
typedef int fz_image ;
struct TYPE_4__ {int image; } ;
struct TYPE_5__ {TYPE_1__ content; } ;
typedef TYPE_2__ fz_html_flow ;
typedef int fz_html_box ;
typedef int fz_context ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int *,int *,int *,int ,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(fz_context *VAR_1, fz_pool *VAR_2, fz_html_box *VAR_3, fz_html_box *VAR_4, fz_image *VAR_5)
{
 fz_html_flow *VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_0, 0);
 VAR_6->content.image = FUNC_1(VAR_1, VAR_5);
}
