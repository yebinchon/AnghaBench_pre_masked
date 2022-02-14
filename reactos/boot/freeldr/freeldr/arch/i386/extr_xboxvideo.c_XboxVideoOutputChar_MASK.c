
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int ULONG ;
typedef int UCHAR ;
typedef int * PULONG ;
typedef int* PUCHAR ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int* VAR_6 ;

__attribute__((used)) static VOID
FUNC_0(UCHAR VAR_7, unsigned VAR_8, unsigned VAR_9, ULONG VAR_10, ULONG VAR_11)
{
  PUCHAR VAR_12;
  PULONG VAR_13;
  UCHAR VAR_14;
  unsigned VAR_15;
  unsigned VAR_16;

  VAR_12 = VAR_6 + VAR_7 * 16;
  VAR_13 = (PULONG) ((char *) VAR_4 + (VAR_9 * VAR_1 + VAR_5) * VAR_3
                  + VAR_8 * VAR_2 * VAR_0);
  for (VAR_15 = 0; VAR_15 < VAR_1; VAR_15++)
    {
      VAR_14 = 0x80;
      for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++)
        {
          VAR_13[VAR_16] = (0 != (VAR_12[VAR_15] & VAR_14) ? VAR_10 : VAR_11);
          VAR_14 = VAR_14 >> 1;
        }
      VAR_13 = (PULONG) ((char *) VAR_13 + VAR_3);
    }
}
