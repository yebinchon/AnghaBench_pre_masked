
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct floatformat {unsigned int man_start; int man_len; int totalsize; int byteorder; } ;


 scalar_t__ FUNC_0 (unsigned char const*,int ,int ,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (int,int) ;

__attribute__((used)) static int
FUNC_2 (const struct floatformat *VAR_0, const unsigned char *VAR_1)
{
  unsigned int VAR_2, VAR_3;
  int VAR_4;

  VAR_3 = VAR_0->man_start;
  VAR_4 = VAR_0->man_len;
  while (VAR_4 > 0)
    {
      VAR_2 = FUNC_1 (VAR_4, 32);

      if (FUNC_0 (VAR_1, VAR_0->byteorder, VAR_0->totalsize,
    VAR_3, VAR_2) != 0) {
       return 1;
      }

      VAR_3 += VAR_2;
      VAR_4 -= VAR_2;
    }
  return 0;
}
