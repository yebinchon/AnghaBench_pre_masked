
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BF_word ;



__attribute__((used)) static void
FUNC_0(BF_word *VAR_0, int VAR_1)
{


 BF_word VAR_2;

 do
 {
  VAR_2 = *VAR_0;
  VAR_2 = (VAR_2 << 16) | (VAR_2 >> 16);
  *VAR_0++ = ((VAR_2 & 0x00FF00FF) << 8) | ((VAR_2 >> 8) & 0x00FF00FF);
 } while (--VAR_1);

}
