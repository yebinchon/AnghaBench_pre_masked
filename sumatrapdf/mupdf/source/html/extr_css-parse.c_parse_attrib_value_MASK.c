
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexbuf {scalar_t__ lookahead; int string; int pool; int ctx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct lexbuf*,char*) ;
 char* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct lexbuf*) ;
 int FUNC_3 (struct lexbuf*) ;

__attribute__((used)) static char *FUNC_4(struct lexbuf *VAR_2)
{
 char *VAR_3;

 if (VAR_2->lookahead == VAR_0 || VAR_2->lookahead == VAR_1)
 {
  VAR_3 = FUNC_1(VAR_2->ctx, VAR_2->pool, VAR_2->string);
  FUNC_2(VAR_2);
  FUNC_3(VAR_2);
  return VAR_3;
 }

 FUNC_0(VAR_2, "expected attribute value");
}
