
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int trace; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int *,int *) ;
 int VAR_2 ;
 int FUNC_3 (int) ;

__attribute__((used)) static void __attribute__((constructor)) FUNC_4(void)
{
 FUNC_0();

 if (FUNC_2(VAR_0, &VAR_2, ((void*)0)))
  FUNC_1("sigaction");

 VAR_1.trace = FUNC_3(1 * 1024 * 1024);
}
