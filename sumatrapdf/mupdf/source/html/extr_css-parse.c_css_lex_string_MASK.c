
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexbuf {int c; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct lexbuf*,char) ;
 int FUNC_1 (struct lexbuf*,int) ;
 int FUNC_2 (struct lexbuf*) ;
 int FUNC_3 (struct lexbuf*,float) ;

__attribute__((used)) static int FUNC_4(struct lexbuf *VAR_1, int VAR_2)
{
 while (VAR_1->c && VAR_1->c != VAR_2)
 {
  if (FUNC_0(VAR_1, '\\'))
  {
   if (FUNC_0(VAR_1, 'n'))
    FUNC_3(VAR_1, '\n');
   else if (FUNC_0(VAR_1, 'r'))
    FUNC_3(VAR_1, '\r');
   else if (FUNC_0(VAR_1, 'f'))
    FUNC_3(VAR_1, '\f');
   else if (FUNC_0(VAR_1, '\f'))
                            ;
   else if (FUNC_0(VAR_1, '\n'))
                            ;
   else if (FUNC_0(VAR_1, '\r'))
    FUNC_0(VAR_1, '\n');
   else
   {
    FUNC_3(VAR_1, VAR_1->c);
    FUNC_2(VAR_1);
   }
  }
  else
  {
   FUNC_3(VAR_1, VAR_1->c);
   FUNC_2(VAR_1);
  }
 }
 FUNC_1(VAR_1, VAR_2);
 FUNC_3(VAR_1, 0);
 return VAR_0;
}
