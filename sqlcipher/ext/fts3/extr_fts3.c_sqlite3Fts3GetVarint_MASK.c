
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int sqlite_int64 ;


 int FUNC_0 (int,unsigned char const*,int ,int,int,int,int) ;
 int FUNC_1 (int,unsigned char const*,int,int,int,int,int) ;

int FUNC_2(const char *VAR_0, sqlite_int64 *VAR_1){
  const unsigned char *VAR_2 = (const unsigned char*)VAR_0;
  const unsigned char *VAR_3 = VAR_2;
  u32 VAR_4;
  u64 VAR_5;
  int VAR_6;

  FUNC_0(VAR_4, VAR_2, 0, 0x00, 0x80, *VAR_1, 1);
  FUNC_1(VAR_4, VAR_2, 7, 0x7F, 0x4000, *VAR_1, 2);
  FUNC_1(VAR_4, VAR_2, 14, 0x3FFF, 0x200000, *VAR_1, 3);
  FUNC_1(VAR_4, VAR_2, 21, 0x1FFFFF, 0x10000000, *VAR_1, 4);
  VAR_5 = (VAR_4 & 0x0FFFFFFF );

  for(VAR_6=28; VAR_6<=63; VAR_6+=7){
    u64 VAR_7 = *VAR_2++;
    VAR_5 += (VAR_7&0x7F) << VAR_6;
    if( (VAR_7 & 0x80)==0 ) break;
  }
  *VAR_1 = VAR_5;
  return (int)(VAR_2 - VAR_3);
}
