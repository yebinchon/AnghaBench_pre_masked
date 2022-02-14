
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_vector {unsigned char slen; } ;


 struct key_vector* FUNC_0 (struct key_vector*) ;

__attribute__((used)) static void FUNC_1(struct key_vector *VAR_0, unsigned char VAR_1)
{
 while (VAR_0->slen < VAR_1) {
  VAR_0->slen = VAR_1;
  VAR_0 = FUNC_0(VAR_0);
 }
}
