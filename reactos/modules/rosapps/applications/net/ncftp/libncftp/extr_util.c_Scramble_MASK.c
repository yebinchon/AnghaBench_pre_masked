
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*) ;

void
FUNC_1(unsigned char *VAR_0, size_t VAR_1, unsigned char *VAR_2, char *VAR_3)
{
 int VAR_4;
 unsigned int VAR_5;
 unsigned char *VAR_6;
 size_t VAR_7;

 VAR_7 = FUNC_0(VAR_3);
 VAR_6 = (unsigned char *) VAR_3;
 for (VAR_4=0; VAR_4 < (int) VAR_1 - 1; VAR_4++) {
  VAR_5 = VAR_2[VAR_4];
  if (VAR_5 == 0)
   break;
  VAR_0[VAR_4] = (unsigned char) (VAR_5 ^ (int) (VAR_6[VAR_4 % (int) VAR_7]));
 }
 VAR_0[VAR_4] = '\0';
}
