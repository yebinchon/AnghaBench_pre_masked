
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arc4 {int chain; int arc4; } ;
typedef int fz_context ;


 int FUNC_0 (int *,unsigned char*,unsigned char const*,size_t) ;
 int FUNC_1 (int *,int ,unsigned char*,size_t) ;

__attribute__((used)) static void FUNC_2(fz_context *VAR_0, void *VAR_1, const void *VAR_2, size_t VAR_3)
{
 struct arc4 *VAR_4 = VAR_1;
 const unsigned char *VAR_5 = VAR_2;
 unsigned char VAR_6[256];
 while (VAR_3 > 0)
 {
  size_t VAR_7 = (VAR_3 > sizeof VAR_6) ? sizeof VAR_6 : VAR_3;
  FUNC_0(&VAR_4->arc4, VAR_6, VAR_5, VAR_7);
  FUNC_1(VAR_0, VAR_4->chain, VAR_6, VAR_7);
  VAR_5 += VAR_7;
  VAR_3 -= VAR_7;
 }
}
