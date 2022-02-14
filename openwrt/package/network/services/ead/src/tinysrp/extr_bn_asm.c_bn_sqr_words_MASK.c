
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_ULONG ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;

void FUNC_2(BN_ULONG *VAR_0, BN_ULONG *VAR_1, int VAR_2)
 {
 FUNC_0(VAR_2 >= 0);
 if (VAR_2 <= 0) return;
 for (;;)
  {
  FUNC_1(VAR_0[0],VAR_0[1],VAR_1[0]);
  if (--VAR_2 == 0) break;

  FUNC_1(VAR_0[2],VAR_0[3],VAR_1[1]);
  if (--VAR_2 == 0) break;

  FUNC_1(VAR_0[4],VAR_0[5],VAR_1[2]);
  if (--VAR_2 == 0) break;

  FUNC_1(VAR_0[6],VAR_0[7],VAR_1[3]);
  if (--VAR_2 == 0) break;

  VAR_1+=4;
  VAR_0+=8;
  }
 }
