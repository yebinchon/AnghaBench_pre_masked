
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_1;

 VAR_1 = FUNC_3(VAR_0);

 if (VAR_1) {
  FUNC_2("Failed to start orderly reboot: forcing the issue\n");
  FUNC_0();
  FUNC_1(((void*)0));
 }

 return VAR_1;
}
