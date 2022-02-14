
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexbuf {int pool; int ctx; } ;
typedef int fz_css_selector ;
typedef int fz_css_rule ;
typedef int fz_css_property ;


 int FUNC_0 (struct lexbuf*,char) ;
 int * FUNC_1 (int ,int ,int *,int *) ;
 int * FUNC_2 (int ,int ,char*) ;
 int * FUNC_3 (struct lexbuf*) ;
 int FUNC_4 (struct lexbuf*) ;

__attribute__((used)) static fz_css_rule *FUNC_5(struct lexbuf *VAR_0)
{
 fz_css_selector *VAR_1 = ((void*)0);
 fz_css_property *VAR_2 = ((void*)0);

 FUNC_4(VAR_0);
 FUNC_0(VAR_0, '{');
 VAR_2 = FUNC_3(VAR_0);
 FUNC_0(VAR_0, '}');
 FUNC_4(VAR_0);

 VAR_1 = FUNC_2(VAR_0->ctx, VAR_0->pool, "@font-face");
 return FUNC_1(VAR_0->ctx, VAR_0->pool, VAR_1, VAR_2);
}
