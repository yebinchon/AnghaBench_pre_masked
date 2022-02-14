
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_vector {unsigned char slen; unsigned char pos; } ;


 struct key_vector* FUNC_0 (struct key_vector*) ;
 unsigned char FUNC_1 (struct key_vector*) ;

__attribute__((used)) static void FUNC_2(struct key_vector *VAR_0, unsigned char VAR_1)
{
 unsigned char VAR_2 = VAR_0->slen;

 while ((VAR_2 > VAR_0->pos) && (VAR_2 > VAR_1)) {
  VAR_1 = FUNC_1(VAR_0);
  if (VAR_2 == VAR_1)
   break;

  VAR_0 = FUNC_0(VAR_0);
  VAR_2 = VAR_0->slen;
 }
}
