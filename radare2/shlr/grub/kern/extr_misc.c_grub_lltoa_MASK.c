
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long long FUNC_0 (unsigned long long,int,unsigned int*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static char *
FUNC_2 (char *VAR_0, int VAR_1, unsigned long long VAR_2)
{
  unsigned VAR_3 = (VAR_1 == 'x') ? 16 : 10;
  char *VAR_4;

  if ((long long) VAR_2 < 0 && VAR_1 == 'd')
    {
      VAR_2 = (unsigned long long) (-((long long) VAR_2));
      *VAR_0++ = '-';
    }

  VAR_4 = VAR_0;

  if (VAR_3 == 16)
    do
      {
 unsigned VAR_5 = (unsigned) (VAR_2 & 0xf);
 *VAR_4++ = (VAR_5 > 9) ? VAR_5 + 'a' - 10 : VAR_5 + '0';
      }
    while (VAR_2 >>= 4);
  else

    do
      {
 unsigned VAR_6;

 VAR_2 = FUNC_0 (VAR_2, 10, &VAR_6);
 *VAR_4++ = VAR_6 + '0';
      }
    while (VAR_2);

  *VAR_4 = 0;

  FUNC_1 (VAR_0);
  return VAR_4;
}
