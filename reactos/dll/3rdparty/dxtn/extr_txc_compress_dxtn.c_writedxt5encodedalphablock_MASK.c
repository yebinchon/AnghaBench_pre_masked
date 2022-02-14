
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLubyte ;



__attribute__((used)) static void FUNC_0( GLubyte *VAR_0, GLubyte VAR_1, GLubyte VAR_2,
                         GLubyte VAR_3[16])
{
   *VAR_0++ = VAR_1;
   *VAR_0++ = VAR_2;
   *VAR_0++ = VAR_3[0] | (VAR_3[1] << 3) | ((VAR_3[2] & 3) << 6);
   *VAR_0++ = (VAR_3[2] >> 2) | (VAR_3[3] << 1) | (VAR_3[4] << 4) | ((VAR_3[5] & 1) << 7);
   *VAR_0++ = (VAR_3[5] >> 1) | (VAR_3[6] << 2) | (VAR_3[7] << 5);
   *VAR_0++ = VAR_3[8] | (VAR_3[9] << 3) | ((VAR_3[10] & 3) << 6);
   *VAR_0++ = (VAR_3[10] >> 2) | (VAR_3[11] << 1) | (VAR_3[12] << 4) | ((VAR_3[13] & 1) << 7);
   *VAR_0++ = (VAR_3[13] >> 1) | (VAR_3[14] << 2) | (VAR_3[15] << 5);
}
