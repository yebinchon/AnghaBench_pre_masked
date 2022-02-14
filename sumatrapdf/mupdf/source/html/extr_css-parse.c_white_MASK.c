
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexbuf {char lookahead; } ;


 int FUNC_0 (struct lexbuf*) ;

__attribute__((used)) static void FUNC_1(struct lexbuf *VAR_0)
{
 while (VAR_0->lookahead == ' ')
  FUNC_0(VAR_0);
}
