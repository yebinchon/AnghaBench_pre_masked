
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gdIOCtx ;


 int FUNC_0 (int *,unsigned char*,unsigned char) ;

__attribute__((used)) static int
FUNC_1(gdIOCtx *VAR_0, unsigned char *VAR_1, int *VAR_2)
{
 unsigned char VAR_3;

 if (! FUNC_0(VAR_0,&VAR_3,1)) {
  return -1;
 }

 *VAR_2 = VAR_3 == 0;

 if ((VAR_3 != 0) && (! FUNC_0(VAR_0, VAR_1, VAR_3))) {
  return -1;
 }

 return VAR_3;
}
