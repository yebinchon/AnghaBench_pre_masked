
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,unsigned long) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,char*,int ) ;

void FUNC_7(unsigned long VAR_2)
{
 int VAR_3 = -1, VAR_4;
 char VAR_5[16];

 if (VAR_3 == -1) {
  VAR_3 = FUNC_2(VAR_0, VAR_1);
  if (VAR_3 == -1) {
   FUNC_3("open() failed");
   FUNC_1(1);
  }
 }
 FUNC_4(VAR_5, "%lx\n", VAR_2);
 VAR_4 = FUNC_6(VAR_3, VAR_5, FUNC_5(VAR_5));
 if (VAR_4 == -1) {
  FUNC_3("write() failed");
  FUNC_1(1);
 }
 FUNC_0(VAR_3);
}
