
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcrypt_ctx {unsigned char* state; unsigned long state_len; unsigned char i; unsigned char j; } ;



int FUNC_0(struct bcrypt_ctx *VAR_0, unsigned char *VAR_1,
     unsigned char *VAR_2, unsigned long VAR_3)
{
 unsigned char *VAR_4 = VAR_0->state;
 unsigned long VAR_5 = VAR_0->state_len;
 unsigned char VAR_6, VAR_7;
 unsigned long VAR_8;

 VAR_6 = VAR_0->i;
 VAR_7 = VAR_0->j;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  unsigned char VAR_9;

  VAR_6 = (VAR_6 + 1) % VAR_5;
  VAR_7 = (VAR_7 + VAR_4[VAR_6]) % VAR_5;
  VAR_9 = VAR_4[VAR_7];
  VAR_4[VAR_7] = VAR_4[VAR_6];
  VAR_4[VAR_6] = VAR_9;

  VAR_2[VAR_8] = VAR_1[VAR_8] ^ VAR_4[(VAR_4[VAR_6] + VAR_4[VAR_7]) % VAR_5];
 }

 VAR_0->i = VAR_6;
 VAR_0->j = VAR_7;

 return VAR_3;
}
