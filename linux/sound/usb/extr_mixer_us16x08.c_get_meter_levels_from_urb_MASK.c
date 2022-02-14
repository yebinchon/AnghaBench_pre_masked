
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_us16x08_meter_store {int* meter_level; int* comp_level; int* master_level; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static void FUNC_8(int VAR_0,
 struct snd_us16x08_meter_store *VAR_1,
 u8 *VAR_2)
{
 int VAR_3 = FUNC_6(VAR_2, VAR_0) + (FUNC_7(VAR_2, VAR_0) << 8);

 if (FUNC_0(VAR_2, VAR_0) == 0x61 && FUNC_1(VAR_2, VAR_0) == 0x02 &&
  FUNC_2(VAR_2, VAR_0) == 0x04 && FUNC_3(VAR_2, VAR_0) == 0x62) {
  if (FUNC_5(VAR_2, VAR_0) == 0x72)
   VAR_1->meter_level[FUNC_4(VAR_2, VAR_0) - 1] = VAR_3;
  if (FUNC_5(VAR_2, VAR_0) == 0xb2)
   VAR_1->comp_level[FUNC_4(VAR_2, VAR_0) - 1] = VAR_3;
 }
 if (FUNC_0(VAR_2, VAR_0) == 0x61 && FUNC_1(VAR_2, VAR_0) == 0x02 &&
  FUNC_2(VAR_2, VAR_0) == 0x02 && FUNC_3(VAR_2, VAR_0) == 0x62)
  VAR_1->master_level[FUNC_4(VAR_2, VAR_0) - 1] = VAR_3;
}
