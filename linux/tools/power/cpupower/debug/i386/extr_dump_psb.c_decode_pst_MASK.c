
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,int,int,int,int,int) ;
 int* VAR_2 ;

__attribute__((used)) static int
FUNC_1(char *VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6, VAR_7, VAR_8;

 for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5) {
  VAR_7 = *VAR_3++;
  VAR_8 = *VAR_3++;
  VAR_6 = 100 * VAR_0[VAR_7] * VAR_1;

  FUNC_0("   %2d %8dkHz  FID %02x (%2d.%01d)  VID %02x (%4dmV)\n",
         VAR_5,
         VAR_6,
         VAR_7, VAR_0[VAR_7]/10, VAR_0[VAR_7]%10,
         VAR_8, VAR_2[VAR_8]);
 }

 return 0;
}
