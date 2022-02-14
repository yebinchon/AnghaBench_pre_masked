
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {int release; int sysname; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_1 (struct utsname*) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct utsname VAR_1;
 if (FUNC_1(&VAR_1) < 0)
  return;

 FUNC_0(VAR_0, "Kernel Version: %s %s", VAR_1.sysname, VAR_1.release);
}
