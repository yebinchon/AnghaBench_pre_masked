
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,void*,int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(int VAR_3, void *VAR_4,
      size_t VAR_5, u64 VAR_6)
{
 int VAR_7 = 0;

 switch (VAR_5) {
 case 1: {
  u8 VAR_8 = (u8)(VAR_6);
  VAR_7 = FUNC_0(VAR_3, VAR_4, &VAR_8, VAR_0);
  break;
 }
 case 2: {
  u16 VAR_9 = (u16)(VAR_6);
  VAR_7 = FUNC_0(VAR_3, VAR_4, &VAR_9, VAR_0);
  break;
 }
 case 4: {
  u32 VAR_10 = (u32)(VAR_6);
  VAR_7 = FUNC_0(VAR_3, VAR_4, &VAR_10, VAR_0);
  break;
 }
 case 8: {
  VAR_7 = FUNC_0(VAR_3, VAR_4, &VAR_6, VAR_0);
  break;
 }
 default:
  FUNC_1("ERROR: invalid value size\n");
  return -VAR_1;
 }
 if (VAR_7 && VAR_2)
  VAR_7 = -VAR_2;
 return VAR_7;
}
