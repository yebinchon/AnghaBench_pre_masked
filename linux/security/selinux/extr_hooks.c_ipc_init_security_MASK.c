
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ipc_security_struct {int sid; int sclass; } ;


 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct ipc_security_struct *VAR_0, u16 VAR_1)
{
 VAR_0->sclass = VAR_1;
 VAR_0->sid = FUNC_0();
}
