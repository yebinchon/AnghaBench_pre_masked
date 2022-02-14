
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* NS2BSIndx; void** NS2Indx; void** Indx2Units; void** Units2Indx; scalar_t__ Base; } ;
typedef TYPE_1__ CPpmd8 ;
typedef void* Byte ;


 unsigned int VAR_0 ;
 int FUNC_0 (int*,int,int) ;

void FUNC_1(CPpmd8 *VAR_1)
{
  unsigned VAR_2, VAR_3, VAR_4;

  VAR_1->Base = 0;

  for (VAR_2 = 0, VAR_3 = 0; VAR_2 < VAR_0; VAR_2++)
  {
    unsigned VAR_5 = (VAR_2 >= 12 ? 4 : (VAR_2 >> 2) + 1);
    do { VAR_1->Units2Indx[VAR_3++] = (Byte)VAR_2; } while(--VAR_5);
    VAR_1->Indx2Units[VAR_2] = (Byte)VAR_3;
  }

  VAR_1->NS2BSIndx[0] = (0 << 1);
  VAR_1->NS2BSIndx[1] = (1 << 1);
  FUNC_0(VAR_1->NS2BSIndx + 2, (2 << 1), 9);
  FUNC_0(VAR_1->NS2BSIndx + 11, (3 << 1), 256 - 11);

  for (VAR_2 = 0; VAR_2 < 5; VAR_2++)
    VAR_1->NS2Indx[VAR_2] = (Byte)VAR_2;
  for (VAR_4 = VAR_2, VAR_3 = 1; VAR_2 < 260; VAR_2++)
  {
    VAR_1->NS2Indx[VAR_2] = (Byte)VAR_4;
    if (--VAR_3 == 0)
      VAR_3 = (++VAR_4) - 4;
  }
}
