
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int,unsigned int,unsigned int) ;
 int FUNC_3 (int,int ,int ,int ,unsigned int,unsigned int*) ;

int FUNC_4(int VAR_2, int VAR_3, int VAR_4, int *VAR_5)
{
 unsigned int VAR_6, VAR_7;
 int VAR_8;

 VAR_6 = VAR_3 | (VAR_4 << 16);
 VAR_8 = FUNC_3(VAR_2, VAR_0,
         VAR_1, 0, VAR_6,
         &VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_2(
  "cpu:%d CONFIG_TDP_GET_TURBO_LIMIT_RATIOS req:%x resp:%x\n",
  VAR_2, VAR_6, VAR_7);

 VAR_5[0] = VAR_7 & FUNC_1(7, 0);
 VAR_5[1] = (VAR_7 & FUNC_1(15, 8)) >> 8;
 VAR_5[2] = (VAR_7 & FUNC_1(23, 16)) >> 16;
 VAR_5[3] = (VAR_7 & FUNC_1(31, 24)) >> 24;

 VAR_6 = VAR_3 | FUNC_0(8) | (VAR_4 << 16);
 VAR_8 = FUNC_3(VAR_2, VAR_0,
         VAR_1, 0, VAR_6,
         &VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_2("cpu:%d CONFIG_TDP_GET_TURBO_LIMIT req:%x resp:%x\n", VAR_2,
       VAR_6, VAR_7);

 VAR_5[4] = VAR_7 & FUNC_1(7, 0);
 VAR_5[5] = (VAR_7 & FUNC_1(15, 8)) >> 8;
 VAR_5[6] = (VAR_7 & FUNC_1(23, 16)) >> 16;
 VAR_5[7] = (VAR_7 & FUNC_1(31, 24)) >> 24;

 return 0;
}
