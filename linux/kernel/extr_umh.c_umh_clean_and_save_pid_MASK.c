
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umh_info {int pid; } ;
struct subprocess_info {int pid; int argv; struct umh_info* data; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct subprocess_info *VAR_0)
{
 struct umh_info *VAR_1 = VAR_0->data;

 FUNC_0(VAR_0->argv);
 VAR_1->pid = VAR_0->pid;
}
