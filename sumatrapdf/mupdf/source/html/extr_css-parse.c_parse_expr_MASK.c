
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lexbuf {char lookahead; int pool; int ctx; } ;
struct TYPE_3__ {struct TYPE_3__* next; } ;
typedef TYPE_1__ fz_css_value ;


 char VAR_0 ;
 scalar_t__ FUNC_0 (struct lexbuf*,char) ;
 void* FUNC_1 (int ,int ,char,char*) ;
 void* FUNC_2 (struct lexbuf*) ;
 int FUNC_3 (struct lexbuf*) ;

__attribute__((used)) static fz_css_value *FUNC_4(struct lexbuf *VAR_1)
{
 fz_css_value *VAR_2, *VAR_3;

 VAR_2 = VAR_3 = FUNC_2(VAR_1);

 while (VAR_1->lookahead != '}' && VAR_1->lookahead != ';' && VAR_1->lookahead != '!' &&
   VAR_1->lookahead != ')' && VAR_1->lookahead != VAR_0)
 {
  if (FUNC_0(VAR_1, ','))
  {
   FUNC_3(VAR_1);
   VAR_3 = VAR_3->next = FUNC_1(VAR_1->ctx, VAR_1->pool, ',', ",");
   VAR_3 = VAR_3->next = FUNC_2(VAR_1);
  }
  else if (FUNC_0(VAR_1, '/'))
  {
   FUNC_3(VAR_1);
   VAR_3 = VAR_3->next = FUNC_1(VAR_1->ctx, VAR_1->pool, '/', "/");
   VAR_3 = VAR_3->next = FUNC_2(VAR_1);
  }
  else
  {
   VAR_3 = VAR_3->next = FUNC_2(VAR_1);
  }
 }

 return VAR_2;
}
