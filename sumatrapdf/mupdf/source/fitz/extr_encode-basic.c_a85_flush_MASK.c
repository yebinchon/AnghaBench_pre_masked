
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct a85 {unsigned int word; int column; int n; int chain; } ;
typedef int fz_context ;


 int FUNC_0 (int *,int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(fz_context *VAR_0, struct a85 *VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_6 = VAR_1->word;
 VAR_5 = VAR_6 / 85;
 VAR_4 = VAR_5 / 85;
 VAR_3 = VAR_4 / 85;
 VAR_2 = VAR_3 / 85;

 if (VAR_1->column >= 70)
 {
  FUNC_0(VAR_0, VAR_1->chain, '\n');
  VAR_1->column = 0;
 }

 if (VAR_1->n == 4)
 {
  if (VAR_1->word == 0)
  {
   FUNC_0(VAR_0, VAR_1->chain, 'z');
   VAR_1->column += 1;
  }
  else
  {
   FUNC_0(VAR_0, VAR_1->chain, (VAR_2 % 85) + '!');
   FUNC_0(VAR_0, VAR_1->chain, (VAR_3 % 85) + '!');
   FUNC_0(VAR_0, VAR_1->chain, (VAR_4 % 85) + '!');
   FUNC_0(VAR_0, VAR_1->chain, (VAR_5 % 85) + '!');
   FUNC_0(VAR_0, VAR_1->chain, (VAR_6 % 85) + '!');
   VAR_1->column += 5;
  }
 }
 else if (VAR_1->n == 3)
 {
  FUNC_0(VAR_0, VAR_1->chain, (VAR_3 % 85) + '!');
  FUNC_0(VAR_0, VAR_1->chain, (VAR_4 % 85) + '!');
  FUNC_0(VAR_0, VAR_1->chain, (VAR_5 % 85) + '!');
  FUNC_0(VAR_0, VAR_1->chain, (VAR_6 % 85) + '!');
  VAR_1->column += 4;
 }
 else if (VAR_1->n == 2)
 {
  FUNC_0(VAR_0, VAR_1->chain, (VAR_4 % 85) + '!');
  FUNC_0(VAR_0, VAR_1->chain, (VAR_5 % 85) + '!');
  FUNC_0(VAR_0, VAR_1->chain, (VAR_6 % 85) + '!');
  VAR_1->column += 3;
 }
 else if (VAR_1->n == 1)
 {
  FUNC_0(VAR_0, VAR_1->chain, (VAR_5 % 85) + '!');
  FUNC_0(VAR_0, VAR_1->chain, (VAR_6 % 85) + '!');
  VAR_1->column += 2;
 }

 VAR_1->word = 0;
 VAR_1->n = 0;
}
