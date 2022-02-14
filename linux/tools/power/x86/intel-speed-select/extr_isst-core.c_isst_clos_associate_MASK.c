
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,unsigned int,unsigned int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,int ,unsigned int,unsigned int,unsigned int*) ;

int FUNC_4(int VAR_3, int VAR_4)
{
 unsigned int VAR_5, VAR_6;
 unsigned int VAR_7;
 int VAR_8, VAR_9;

 VAR_5 = (VAR_4 & 0x03) << 16;
 VAR_8 = FUNC_2(VAR_3);
 VAR_7 = FUNC_0(VAR_2) | VAR_8;

 VAR_9 = FUNC_3(VAR_3, VAR_1, VAR_0, VAR_7,
         VAR_5, &VAR_6);
 if (VAR_9)
  return VAR_9;

 FUNC_1("cpu:%d CLOS_PQR_ASSOC param:%x req:%x\n", VAR_3, VAR_7,
       VAR_5);

 return 0;
}
