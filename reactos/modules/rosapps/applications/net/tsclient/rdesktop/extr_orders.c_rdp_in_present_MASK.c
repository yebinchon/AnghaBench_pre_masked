
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint32 ;
typedef int STREAM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void
FUNC_1(STREAM VAR_2, uint32 * VAR_3, uint8 VAR_4, int VAR_5)
{
 uint8 VAR_6;
 int VAR_7;

 if (VAR_4 & VAR_0)
 {
  VAR_5--;
 }

 if (VAR_4 & VAR_1)
 {
  if (VAR_5 < 2)
   VAR_5 = 0;
  else
   VAR_5 -= 2;
 }

 *VAR_3 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
 {
  FUNC_0(VAR_2, VAR_6);
  *VAR_3 |= VAR_6 << (VAR_7 * 8);
 }
}
