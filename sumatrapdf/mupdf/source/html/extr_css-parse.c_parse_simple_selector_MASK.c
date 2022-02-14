
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct lexbuf {scalar_t__ lookahead; int pool; int ctx; int * string; } ;
struct TYPE_4__ {void* cond; } ;
typedef TYPE_1__ fz_css_selector ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct lexbuf*,char) ;
 int FUNC_1 (struct lexbuf*,char*) ;
 TYPE_1__* FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct lexbuf*) ;
 void* FUNC_5 (struct lexbuf*) ;

__attribute__((used)) static fz_css_selector *FUNC_6(struct lexbuf *VAR_1)
{
 fz_css_selector *VAR_2;

 if (FUNC_0(VAR_1, '*'))
 {
  VAR_2 = FUNC_2(VAR_1->ctx, VAR_1->pool, ((void*)0));
  if (FUNC_3(VAR_1->lookahead))
   VAR_2->cond = FUNC_5(VAR_1);
  return VAR_2;
 }
 else if (VAR_1->lookahead == VAR_0)
 {
  VAR_2 = FUNC_2(VAR_1->ctx, VAR_1->pool, VAR_1->string);
  FUNC_4(VAR_1);
  if (FUNC_3(VAR_1->lookahead))
   VAR_2->cond = FUNC_5(VAR_1);
  return VAR_2;
 }
 else if (FUNC_3(VAR_1->lookahead))
 {
  VAR_2 = FUNC_2(VAR_1->ctx, VAR_1->pool, ((void*)0));
  VAR_2->cond = FUNC_5(VAR_1);
  return VAR_2;
 }

 FUNC_1(VAR_1, "expected selector");
}
