
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi__uint8 ;


 int FUNC_0 (float) ;

__attribute__((used)) static void FUNC_1(stbi__uint8 *VAR_0, const stbi__uint8 *VAR_1, const stbi__uint8 *VAR_2, const stbi__uint8 *VAR_3, int VAR_4, int VAR_5)
{
   int VAR_6;
   for (VAR_6=0; VAR_6 < VAR_4; ++VAR_6) {
      int VAR_7 = (VAR_1[VAR_6] << 16) + 32768;
      int VAR_8,VAR_9,VAR_10;
      int VAR_11 = VAR_3[VAR_6] - 128;
      int VAR_12 = VAR_2[VAR_6] - 128;
      VAR_8 = VAR_7 + VAR_11*FUNC_0(1.40200f);
      VAR_9 = VAR_7 - VAR_11*FUNC_0(0.71414f) - VAR_12*FUNC_0(0.34414f);
      VAR_10 = VAR_7 + VAR_12*FUNC_0(1.77200f);
      VAR_8 >>= 16;
      VAR_9 >>= 16;
      VAR_10 >>= 16;
      if ((unsigned) VAR_8 > 255) { if (VAR_8 < 0) VAR_8 = 0; else VAR_8 = 255; }
      if ((unsigned) VAR_9 > 255) { if (VAR_9 < 0) VAR_9 = 0; else VAR_9 = 255; }
      if ((unsigned) VAR_10 > 255) { if (VAR_10 < 0) VAR_10 = 0; else VAR_10 = 255; }
      VAR_0[0] = (stbi__uint8)VAR_8;
      VAR_0[1] = (stbi__uint8)VAR_9;
      VAR_0[2] = (stbi__uint8)VAR_10;
      VAR_0[3] = 255;
      VAR_0 += VAR_5;
   }
}
