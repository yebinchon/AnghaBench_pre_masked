
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(void)
{
 time_t VAR_5;
 bool VAR_6;

 if (!VAR_4)
  return 0;

 FUNC_1("[RUN]\tchecking that vsyscalls are emulated\n");
 FUNC_3(VAR_0, VAR_3, 0);
 FUNC_2(FUNC_0() | VAR_1);
 FUNC_4(&VAR_5);
 FUNC_2(FUNC_0() & ~VAR_1);
 VAR_6 = (VAR_2 > 1);

 FUNC_1("[%s]\tvsyscalls are %s (%d instructions in vsyscall page)\n",
        (VAR_6 ? "FAIL" : "OK"),
        (VAR_6 ? "native" : "emulated"),
        (int)VAR_2);

 return VAR_6;
}
