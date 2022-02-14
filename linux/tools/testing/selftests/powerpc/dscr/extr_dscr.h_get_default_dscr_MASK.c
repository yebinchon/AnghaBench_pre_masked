
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,char*,int) ;
 int FUNC_7 (char*,char*,unsigned long*) ;

unsigned long FUNC_8(void)
{
 int VAR_3 = -1, VAR_4;
 char VAR_5[16];
 unsigned long VAR_6;

 if (VAR_3 == -1) {
  VAR_3 = FUNC_4(VAR_0, VAR_1);
  if (VAR_3 == -1) {
   FUNC_5("open() failed");
   FUNC_1(1);
  }
 }
 FUNC_3(VAR_5, 0, sizeof(VAR_5));
 FUNC_2(VAR_3, 0, VAR_2);
 VAR_4 = FUNC_6(VAR_3, VAR_5, sizeof(VAR_5));
 if (VAR_4 == -1) {
  FUNC_5("read() failed");
  FUNC_1(1);
 }
 FUNC_7(VAR_5, "%lx", &VAR_6);
 FUNC_0(VAR_3);
 return VAR_6;
}
