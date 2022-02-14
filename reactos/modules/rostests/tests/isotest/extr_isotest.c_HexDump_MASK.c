
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG_PTR ;
typedef int ULONG ;


 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (char*,...) ;

void FUNC_2(char *VAR_0, ULONG VAR_1)
{
  ULONG VAR_2 = 0;
  unsigned char *VAR_3;

  while (VAR_2 < (VAR_1 & ~15))
    {
      VAR_3 = (unsigned char*)((ULONG_PTR)VAR_0 + VAR_2);
      FUNC_1("%08lx  %02hx %02hx %02hx %02hx %02hx %02hx %02hx %02hx-%02hx %02hx %02hx %02hx %02hx %02hx %02hx %02hx",
      VAR_2,
      VAR_3[0],
      VAR_3[1],
      VAR_3[2],
      VAR_3[3],
      VAR_3[4],
      VAR_3[5],
      VAR_3[6],
      VAR_3[7],
      VAR_3[8],
      VAR_3[9],
      VAR_3[10],
      VAR_3[11],
      VAR_3[12],
      VAR_3[13],
      VAR_3[14],
      VAR_3[15]);

      FUNC_1("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
      FUNC_0(VAR_3[0])?VAR_3[0]:'.',
      FUNC_0(VAR_3[1])?VAR_3[1]:'.',
      FUNC_0(VAR_3[2])?VAR_3[2]:'.',
      FUNC_0(VAR_3[3])?VAR_3[3]:'.',
      FUNC_0(VAR_3[4])?VAR_3[4]:'.',
      FUNC_0(VAR_3[5])?VAR_3[5]:'.',
      FUNC_0(VAR_3[6])?VAR_3[6]:'.',
      FUNC_0(VAR_3[7])?VAR_3[7]:'.',
      FUNC_0(VAR_3[8])?VAR_3[8]:'.',
      FUNC_0(VAR_3[9])?VAR_3[9]:'.',
      FUNC_0(VAR_3[10])?VAR_3[10]:'.',
      FUNC_0(VAR_3[11])?VAR_3[11]:'.',
      FUNC_0(VAR_3[12])?VAR_3[12]:'.',
      FUNC_0(VAR_3[13])?VAR_3[13]:'.',
      FUNC_0(VAR_3[14])?VAR_3[14]:'.',
      FUNC_0(VAR_3[15])?VAR_3[15]:'.');

      VAR_2 += 16;
    }

  VAR_3 = (unsigned char*)((ULONG_PTR)VAR_0 + VAR_2);
  if (VAR_2 < VAR_1)
    {
      FUNC_1("%08lx ", VAR_2);
      while (VAR_2 < VAR_1)
 {
   FUNC_1(" %02hx", *VAR_3);
   VAR_2++;
   VAR_3++;
 }
    }

  FUNC_1("\n\n");
}
