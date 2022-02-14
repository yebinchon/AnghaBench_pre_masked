
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uchar ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 void* FUNC_3 (int ,int ) ;

__attribute__((used)) static pid_t FUNC_4(uchar VAR_9)
{
 pid_t VAR_10 = FUNC_0();

 if (VAR_10 > 0) {

  VAR_7 = FUNC_3(VAR_1, VAR_6);
  VAR_8 = FUNC_3(VAR_4, VAR_5);
 } else if (VAR_10 == 0) {

  FUNC_3(VAR_1, VAR_5);
  FUNC_3(VAR_2, VAR_5);
  FUNC_3(VAR_3, VAR_5);
  FUNC_3(VAR_4, VAR_5);

  if (VAR_9 & VAR_0)
   FUNC_2();
 }

 if (VAR_10 == -1)
  FUNC_1("fork");
 return VAR_10;
}
