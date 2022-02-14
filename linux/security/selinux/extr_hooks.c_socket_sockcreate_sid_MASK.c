
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct task_security_struct {scalar_t__ sockcreate_sid; int sid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ,int *,scalar_t__*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(const struct task_security_struct *VAR_2,
     u16 VAR_3, u32 *VAR_4)
{
 if (VAR_2->sockcreate_sid > VAR_0) {
  *VAR_4 = VAR_2->sockcreate_sid;
  return 0;
 }

 return FUNC_0(&VAR_1, VAR_2->sid, VAR_2->sid,
           VAR_3, ((void*)0), VAR_4);
}
