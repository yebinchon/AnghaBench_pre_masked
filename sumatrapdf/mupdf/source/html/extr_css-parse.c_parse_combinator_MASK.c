
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct lexbuf {int pool; int ctx; } ;
struct TYPE_6__ {int combine; struct TYPE_6__* right; struct TYPE_6__* left; } ;
typedef TYPE_1__ fz_css_selector ;


 TYPE_1__* FUNC_0 (int ,int ,int *) ;
 TYPE_1__* FUNC_1 (struct lexbuf*) ;
 int FUNC_2 (struct lexbuf*) ;

__attribute__((used)) static fz_css_selector *FUNC_3(struct lexbuf *VAR_0, int VAR_1, fz_css_selector *VAR_2)
{
 fz_css_selector *VAR_3, *VAR_4;
 FUNC_2(VAR_0);
 VAR_4 = FUNC_1(VAR_0);
 VAR_3 = FUNC_0(VAR_0->ctx, VAR_0->pool, ((void*)0));
 VAR_3->combine = VAR_1;
 VAR_3->left = VAR_2;
 VAR_3->right = VAR_4;
 return VAR_3;
}
