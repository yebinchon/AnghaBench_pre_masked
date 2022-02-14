
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint32 ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int,int,int,int,int *) ;

void FUNC_1(uint32 VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
  uint8* VAR_7;

  if (VAR_2 > 0x38400)
    VAR_2 = 0;
  if (VAR_2 + VAR_5 * VAR_6 > 0x38400)
    return;
  VAR_7 = VAR_0 + VAR_2 * VAR_1;
  FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_5, VAR_6, VAR_7);
}
