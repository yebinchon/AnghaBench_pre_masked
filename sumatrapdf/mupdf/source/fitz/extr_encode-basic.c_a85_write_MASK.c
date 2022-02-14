
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct a85 {int n; int word; } ;
typedef int fz_context ;


 int FUNC_0 (int *,struct a85*) ;

__attribute__((used)) static void FUNC_1(fz_context *VAR_0, void *VAR_1, const void *VAR_2, size_t VAR_3)
{
 struct a85 *VAR_4 = VAR_1;
 const unsigned char *VAR_5 = VAR_2;
 while (VAR_3-- > 0)
 {
  unsigned int VAR_6 = *VAR_5++;
  if (VAR_4->n == 4)
   FUNC_0(VAR_0, VAR_4);
  VAR_4->word = (VAR_4->word << 8) | VAR_6;
  VAR_4->n++;
 }
}
