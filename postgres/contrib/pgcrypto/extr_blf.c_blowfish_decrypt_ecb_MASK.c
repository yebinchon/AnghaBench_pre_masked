
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint32 ;
typedef int BlowfishContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ,int *,int *) ;

void
FUNC_4(uint8 *VAR_0, int VAR_1, BlowfishContext *VAR_2)
{
 uint32 VAR_3,
    VAR_4,
    VAR_5[2];

 FUNC_0((VAR_1 & 7) == 0);

 while (VAR_1 > 0)
 {
  VAR_3 = FUNC_1(VAR_0);
  VAR_4 = FUNC_1(VAR_0 + 4);
  FUNC_3(VAR_3, VAR_4, VAR_5, VAR_2);
  FUNC_2(VAR_0, VAR_5[0]);
  FUNC_2(VAR_0 + 4, VAR_5[1]);
  VAR_0 += 8;
  VAR_1 -= 8;
 }
}
