
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16 ;
typedef int STREAM ;
typedef int RDPCLIENT ;



 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int) ;

void
FUNC_3(RDPCLIENT * VAR_0, STREAM VAR_1)
{
 uint16 VAR_2;

 FUNC_0(VAR_1, VAR_2);
 switch (VAR_2)
 {
  case 128:
   FUNC_1(VAR_0);
   break;

  default:
   FUNC_2("System pointer message 0x%x\n", VAR_2);
 }
}
