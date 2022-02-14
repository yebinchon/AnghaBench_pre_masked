
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexbuf {int c; } ;


 int VAR_0 ;
 int FUNC_0 (struct lexbuf*) ;
 int FUNC_1 (struct lexbuf*,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct lexbuf *VAR_1)
{
 while (FUNC_2(VAR_1->c))
 {
  FUNC_1(VAR_1, VAR_1->c);
  FUNC_0(VAR_1);
 }
 FUNC_1(VAR_1, 0);
 return VAR_0;
}
