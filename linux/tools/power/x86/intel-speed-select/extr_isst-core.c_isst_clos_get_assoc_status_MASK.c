
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,unsigned int,unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,int ,unsigned int,int ,unsigned int*) ;

int FUNC_3(int VAR_2, int *VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_1(VAR_2);
 VAR_5 = VAR_6;

 VAR_7 = FUNC_2(VAR_2, VAR_1, VAR_0, VAR_5, 0,
         &VAR_4);
 if (VAR_7)
  return VAR_7;

 FUNC_0("cpu:%d CLOS_PQR_ASSOC param:%x resp:%x\n", VAR_2, VAR_5,
       VAR_4);
 *VAR_3 = (VAR_4 >> 16) & 0x03;

 return 0;
}
