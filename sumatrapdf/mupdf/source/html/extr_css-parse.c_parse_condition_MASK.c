
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct lexbuf {char lookahead; char* string; int pool; int ctx; } ;
struct TYPE_4__ {char type; void* val; } ;
typedef TYPE_1__ fz_css_condition ;


 scalar_t__ VAR_0 ;
 char VAR_1 ;
 scalar_t__ FUNC_0 (struct lexbuf*,char) ;
 int FUNC_1 (struct lexbuf*,char) ;
 int FUNC_2 (struct lexbuf*,char*) ;
 TYPE_1__* FUNC_3 (int ,int ,char,char*,char*) ;
 int FUNC_4 (struct lexbuf*) ;
 void* FUNC_5 (struct lexbuf*) ;
 int FUNC_6 (struct lexbuf*) ;

__attribute__((used)) static fz_css_condition *FUNC_7(struct lexbuf *VAR_2)
{
 fz_css_condition *VAR_3;

 if (FUNC_0(VAR_2, ':'))
 {
  FUNC_0(VAR_2, ':');
  if (VAR_2->lookahead != VAR_1)
   FUNC_2(VAR_2, "expected keyword after ':'");
  VAR_3 = FUNC_3(VAR_2->ctx, VAR_2->pool, ':', "pseudo", VAR_2->string);
  FUNC_4(VAR_2);
  if (FUNC_0(VAR_2, '('))
  {
   FUNC_6(VAR_2);
   if (FUNC_0(VAR_2, VAR_1))
    FUNC_6(VAR_2);
   FUNC_1(VAR_2, ')');
  }
  return VAR_3;
 }

 if (FUNC_0(VAR_2, '.'))
 {
  if (VAR_2->lookahead != VAR_1)
   FUNC_2(VAR_2, "expected keyword after '.'");
  VAR_3 = FUNC_3(VAR_2->ctx, VAR_2->pool, '.', "class", VAR_2->string);
  FUNC_4(VAR_2);
  return VAR_3;
 }

 if (FUNC_0(VAR_2, '['))
 {
  FUNC_6(VAR_2);

  if (VAR_2->lookahead != VAR_1)
   FUNC_2(VAR_2, "expected keyword after '['");
  VAR_3 = FUNC_3(VAR_2->ctx, VAR_2->pool, '[', VAR_2->string, ((void*)0));
  FUNC_4(VAR_2);

  FUNC_6(VAR_2);

  if (FUNC_0(VAR_2, '='))
  {
   VAR_3->type = '=';
   VAR_3->val = FUNC_5(VAR_2);
  }
  else if (FUNC_0(VAR_2, '|'))
  {
   FUNC_1(VAR_2, '=');
   VAR_3->type = '|';
   VAR_3->val = FUNC_5(VAR_2);
  }
  else if (FUNC_0(VAR_2, '~'))
  {
   FUNC_1(VAR_2, '=');
   VAR_3->type = '~';
   VAR_3->val = FUNC_5(VAR_2);
  }

  FUNC_1(VAR_2, ']');

  return VAR_3;
 }

 if (VAR_2->lookahead == VAR_0)
 {
  VAR_3 = FUNC_3(VAR_2->ctx, VAR_2->pool, '#', "id", VAR_2->string);
  FUNC_4(VAR_2);
  return VAR_3;
 }

 FUNC_2(VAR_2, "expected condition");
}
