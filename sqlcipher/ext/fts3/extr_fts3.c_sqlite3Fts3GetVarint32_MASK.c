
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int,unsigned char const*,int ,int,int,int,int) ;
 int FUNC_1 (int,unsigned char const*,int,int,int,int,int) ;
 int FUNC_2 (int) ;

int FUNC_3(const char *VAR_0, int *VAR_1){
  const unsigned char *VAR_2 = (const unsigned char*)VAR_0;
  u32 VAR_3;


  FUNC_0(VAR_3, VAR_2, 0, 0x00, 0x80, *VAR_1, 1);





  FUNC_1(VAR_3, VAR_2, 7, 0x7F, 0x4000, *VAR_1, 2);
  FUNC_1(VAR_3, VAR_2, 14, 0x3FFF, 0x200000, *VAR_1, 3);
  FUNC_1(VAR_3, VAR_2, 21, 0x1FFFFF, 0x10000000, *VAR_1, 4);
  VAR_3 = (VAR_3 & 0x0FFFFFFF );
  *VAR_1 = (int)(VAR_3 | ((u32)(*VAR_2 & 0x07) << 28));
  FUNC_2( 0==(VAR_3 & 0x80000000) );
  FUNC_2( *VAR_1>=0 );
  return 5;
}
