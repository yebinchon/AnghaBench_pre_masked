
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexbuf {scalar_t__ lookahead; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct lexbuf*,char) ;
 int FUNC_1 (struct lexbuf*,int ) ;
 int FUNC_2 (struct lexbuf*) ;
 int FUNC_3 (struct lexbuf*) ;

__attribute__((used)) static void FUNC_4(struct lexbuf *VAR_2)
{
 FUNC_1(VAR_2, VAR_0);


 while (VAR_2->lookahead != VAR_1)
 {
  if (FUNC_0(VAR_2, ';'))
  {
   FUNC_3(VAR_2);
   return;
  }
  if (FUNC_0(VAR_2, '{'))
  {
   int VAR_3 = 1;
   while (VAR_2->lookahead != VAR_1 && VAR_3 > 0)
   {
    if (FUNC_0(VAR_2, '{'))
     ++VAR_3;
    else if (FUNC_0(VAR_2, '}'))
     --VAR_3;
    else
     FUNC_2(VAR_2);
   }
   FUNC_3(VAR_2);
   return;
  }
  FUNC_2(VAR_2);
 }
}
