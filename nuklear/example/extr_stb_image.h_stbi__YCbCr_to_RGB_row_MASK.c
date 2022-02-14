
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi_uc ;


 int FUNC_0 (float) ;

__attribute__((used)) static void FUNC_1(stbi_uc *VAR_0, const stbi_uc *VAR_1, const stbi_uc *VAR_2, const stbi_uc *VAR_3, int VAR_4, int VAR_5)
{
   int VAR_6;
   for (VAR_6=0; VAR_6 < VAR_4; ++VAR_6) {
      int VAR_7 = (VAR_1[VAR_6] << 20) + (1<<19);
      int VAR_8,VAR_9,VAR_10;
      int VAR_11 = VAR_3[VAR_6] - 128;
      int VAR_12 = VAR_2[VAR_6] - 128;
      VAR_8 = VAR_7 + VAR_11* FUNC_0(1.40200f);
      VAR_9 = VAR_7 + (VAR_11*-FUNC_0(0.71414f)) + ((VAR_12*-FUNC_0(0.34414f)) & 0xffff0000);
      VAR_10 = VAR_7 + VAR_12* FUNC_0(1.77200f);
      VAR_8 >>= 20;
      VAR_9 >>= 20;
      VAR_10 >>= 20;
      if ((unsigned) VAR_8 > 255) { if (VAR_8 < 0) VAR_8 = 0; else VAR_8 = 255; }
      if ((unsigned) VAR_9 > 255) { if (VAR_9 < 0) VAR_9 = 0; else VAR_9 = 255; }
      if ((unsigned) VAR_10 > 255) { if (VAR_10 < 0) VAR_10 = 0; else VAR_10 = 255; }
      VAR_0[0] = (stbi_uc)VAR_8;
      VAR_0[1] = (stbi_uc)VAR_9;
      VAR_0[2] = (stbi_uc)VAR_10;
      VAR_0[3] = 255;
      VAR_0 += VAR_5;
   }
}
