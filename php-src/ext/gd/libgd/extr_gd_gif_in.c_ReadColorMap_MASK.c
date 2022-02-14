
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rgb ;
typedef int gdIOCtx ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,unsigned char*,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(gdIOCtx *VAR_5, int VAR_6, unsigned char (*VAR_7)[256])
{
 int VAR_8;
 unsigned char VAR_9[3];


 for (VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8) {
  if (! FUNC_0(VAR_5, VAR_9, sizeof(VAR_9))) {
   return VAR_4;
  }
  VAR_7[VAR_2][VAR_8] = VAR_9[0] ;
  VAR_7[VAR_1][VAR_8] = VAR_9[1] ;
  VAR_7[VAR_0][VAR_8] = VAR_9[2] ;
 }


 return VAR_3;
}
