
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcrypt_ctx {unsigned char* state; unsigned long state_len; int j; int i; } ;


 unsigned char* FUNC_0 (unsigned long) ;

int FUNC_1(struct bcrypt_ctx *VAR_0, void *VAR_1, int VAR_2,
  unsigned long VAR_3)
{
 unsigned char *VAR_4;
 unsigned char *VAR_5 = VAR_1;
 unsigned long VAR_6, VAR_7;
 unsigned long VAR_8 = 0;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 == ((void*)0))
  return -1;

 VAR_0->i = 0;
 VAR_0->j = 0;
 VAR_0->state = VAR_4;
 VAR_0->state_len = VAR_3;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  VAR_4[VAR_6] = VAR_6;

 for(VAR_6 = 0, VAR_7 = 0; VAR_6 < VAR_3; VAR_6++, VAR_7 = (VAR_7 + 1) % VAR_2) {
  unsigned char VAR_9;

  VAR_9 = VAR_4[VAR_6];
  VAR_8 = (VAR_8 + VAR_5[VAR_7] + VAR_9) % VAR_3;
  VAR_4[VAR_6] = VAR_4[VAR_8];
  VAR_4[VAR_8] = VAR_9;
 }

 return 0;
}
