
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexbuf {int pool; int ctx; } ;
typedef int fz_css_selector ;
typedef int fz_css_rule ;
typedef int fz_css_property ;


 char VAR_0 ;
 scalar_t__ FUNC_0 (struct lexbuf*,char) ;
 int FUNC_1 (struct lexbuf*,char) ;
 int * FUNC_2 (int ,int ,int *,int *) ;
 int * FUNC_3 (int ,int ,char*) ;
 int * FUNC_4 (struct lexbuf*) ;
 int FUNC_5 (struct lexbuf*) ;

__attribute__((used)) static fz_css_rule *FUNC_6(struct lexbuf *VAR_1)
{
 fz_css_selector *VAR_2 = ((void*)0);
 fz_css_property *VAR_3 = ((void*)0);

 FUNC_5(VAR_1);
 if (FUNC_0(VAR_1, ':'))
 {
  FUNC_1(VAR_1, VAR_0);
  FUNC_5(VAR_1);
 }
 FUNC_1(VAR_1, '{');
 VAR_3 = FUNC_4(VAR_1);
 FUNC_1(VAR_1, '}');
 FUNC_5(VAR_1);

 VAR_2 = FUNC_3(VAR_1->ctx, VAR_1->pool, "@page");
 return FUNC_2(VAR_1->ctx, VAR_1->pool, VAR_2, VAR_3);
}
