
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct lexbuf {char lookahead; int string; int pool; int ctx; } ;
struct TYPE_5__ {char* data; char type; int args; } ;
typedef TYPE_1__ fz_css_value ;



 int VAR_0 ;





 scalar_t__ FUNC_0 (struct lexbuf*,char) ;
 int FUNC_1 (struct lexbuf*,char) ;
 int FUNC_2 (struct lexbuf*,char*) ;
 TYPE_1__* FUNC_3 (int ,int ,int,int ) ;
 TYPE_1__* FUNC_4 (int ,int ,int) ;
 char* FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (struct lexbuf*) ;
 int FUNC_7 (struct lexbuf*) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct lexbuf*) ;

__attribute__((used)) static fz_css_value *FUNC_11(struct lexbuf *VAR_1)
{
 fz_css_value *VAR_2;

 if (VAR_1->lookahead == '+' || VAR_1->lookahead == '-')
 {
  float VAR_3 = VAR_1->lookahead == '-' ? -1 : 1;
  FUNC_6(VAR_1);
  if (VAR_1->lookahead != 131 && VAR_1->lookahead != 132 && VAR_1->lookahead != 130)
   FUNC_2(VAR_1, "expected number");
  if (VAR_3 < 0)
  {
   VAR_2 = FUNC_4(VAR_1->ctx, VAR_1->pool, VAR_1->lookahead);
   VAR_2->data = FUNC_5(VAR_1->ctx, VAR_1->pool, FUNC_9(VAR_1->string) + 2);
   VAR_2->data[0] = '-';
   FUNC_8(VAR_2->data + 1, VAR_1->string);
  }
  else
  {
   VAR_2 = FUNC_3(VAR_1->ctx, VAR_1->pool, VAR_1->lookahead, VAR_1->string);
  }
  FUNC_6(VAR_1);
  FUNC_10(VAR_1);
  return VAR_2;
 }

 if (VAR_1->lookahead == VAR_0)
 {
  VAR_2 = FUNC_3(VAR_1->ctx, VAR_1->pool, VAR_0, VAR_1->string);
  FUNC_6(VAR_1);
  if (FUNC_0(VAR_1, '('))
  {
   FUNC_10(VAR_1);
   VAR_2->type = '(';
   VAR_2->args = FUNC_7(VAR_1);
   FUNC_1(VAR_1, ')');
  }
  FUNC_10(VAR_1);
  return VAR_2;
 }

 switch (VAR_1->lookahead)
 {
 case 133:
 case 129:
 case 128:
 case 131:
 case 132:
 case 130:
  VAR_2 = FUNC_3(VAR_1->ctx, VAR_1->pool, VAR_1->lookahead, VAR_1->string);
  FUNC_6(VAR_1);
  FUNC_10(VAR_1);
  return VAR_2;
 }

 FUNC_2(VAR_1, "expected value");
}
