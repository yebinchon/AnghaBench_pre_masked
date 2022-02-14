
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct oxygen {int* dac_volume; scalar_t__ dac_mute; } ;


 int VAR_0 ;
 int FUNC_0 (struct oxygen*,int,int) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_1)
{
 unsigned int VAR_2;
 u8 VAR_3;

 VAR_3 = VAR_1->dac_mute ? VAR_0 : 0;
 for (VAR_2 = 0; VAR_2 < 6; ++VAR_2)
  FUNC_0(VAR_1, 7 + VAR_2 + VAR_2 / 2,
         (127 - VAR_1->dac_volume[2 + VAR_2]) | VAR_3);
}
