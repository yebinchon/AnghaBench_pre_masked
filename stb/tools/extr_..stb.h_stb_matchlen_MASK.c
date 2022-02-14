
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t stb_uint ;
typedef scalar_t__ stb_uchar ;



__attribute__((used)) static unsigned int FUNC_0(stb_uchar *VAR_0, stb_uchar *VAR_1, stb_uint VAR_2)
{
   stb_uint VAR_3;
   for (VAR_3=0; VAR_3 < VAR_2; ++VAR_3)
      if (VAR_0[VAR_3] != VAR_1[VAR_3]) return VAR_3;
   return VAR_3;
}
