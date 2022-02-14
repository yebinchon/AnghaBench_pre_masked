
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int,int ,int) ;

__attribute__((used)) static int FUNC_3(int VAR_7, int VAR_8, int VAR_9)
{
 u16 VAR_10;

 VAR_9 >>= 8;
 VAR_10 = (u16)(VAR_9 & 0xfff);
 if (FUNC_2(VAR_7, VAR_1, VAR_8))
  return -VAR_0;
 if (FUNC_2(VAR_7, VAR_2, FUNC_0(VAR_10)))
  return -VAR_0;
 if (FUNC_2(VAR_7, VAR_3, FUNC_1(VAR_10)))
  return -VAR_0;
 if (VAR_10 && FUNC_2(VAR_7, VAR_4,
           VAR_6 | VAR_5))
  return -VAR_0;
 return 0;
}
