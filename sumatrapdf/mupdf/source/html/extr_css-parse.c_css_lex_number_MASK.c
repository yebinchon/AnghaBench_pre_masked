
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexbuf {char c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct lexbuf*,char) ;
 int FUNC_1 (struct lexbuf*) ;
 int FUNC_2 (struct lexbuf*,char) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char) ;

__attribute__((used)) static int FUNC_5(struct lexbuf *VAR_3)
{
 while (VAR_3->c >= '0' && VAR_3->c <= '9')
 {
  FUNC_2(VAR_3, VAR_3->c);
  FUNC_1(VAR_3);
 }

 if (FUNC_0(VAR_3, '.'))
 {
  FUNC_2(VAR_3, '.');
  while (VAR_3->c >= '0' && VAR_3->c <= '9')
  {
   FUNC_2(VAR_3, VAR_3->c);
   FUNC_1(VAR_3);
  }
 }

 if (FUNC_0(VAR_3, '%'))
 {
  FUNC_2(VAR_3, '%');
  FUNC_2(VAR_3, 0);
  return VAR_2;
 }

 if (FUNC_4(VAR_3->c))
 {
  FUNC_2(VAR_3, VAR_3->c);
  FUNC_1(VAR_3);
  while (FUNC_3(VAR_3->c))
  {
   FUNC_2(VAR_3, VAR_3->c);
   FUNC_1(VAR_3);
  }
  FUNC_2(VAR_3, 0);
  return VAR_0;
 }

 FUNC_2(VAR_3, 0);
 return VAR_1;
}
