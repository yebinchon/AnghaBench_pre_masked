
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uchar ;
typedef int pid_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int*,int ) ;

__attribute__((used)) static int FUNC_5(pid_t VAR_5, uchar VAR_6)
{
 int VAR_7 = 0xFFFF;

 if (!(VAR_6 & VAR_0)) {

  do {
  } while (FUNC_4(VAR_5, &VAR_7, 0) == -1);

  if (FUNC_2(VAR_7)) {
   VAR_7 = FUNC_1(VAR_7);
   FUNC_0(VAR_7);
  }
 }


 FUNC_3(VAR_1, VAR_3);
 FUNC_3(VAR_2, VAR_4);

 return VAR_7;
}
