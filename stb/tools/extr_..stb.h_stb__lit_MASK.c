
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ stb_uint ;
typedef int stb_uchar ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int *,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_2(stb_uchar *VAR_3, stb_uint VAR_4)
{
   FUNC_0 (VAR_2 + VAR_4 <= VAR_0);
   if (VAR_2 + VAR_4 > VAR_0) { VAR_2 += VAR_4; return; }
   if (VAR_3 < VAR_1) { VAR_2 = VAR_0+1; return; }
   FUNC_1(VAR_2, VAR_3, VAR_4);
   VAR_2 += VAR_4;
}
