
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int be_key; int be_pid; int raddr; } ;
typedef TYPE_1__ PGcancel ;


 int FUNC_0 (int *,int ,int ,char*,int) ;
 int FUNC_1 (char*,char*,int) ;

int
FUNC_2(PGcancel *VAR_0, char *VAR_1, int VAR_2)
{
 if (!VAR_0)
 {
  FUNC_1(VAR_1, "PQcancel() -- no cancel object supplied", VAR_2);
  return 0;
 }

 return FUNC_0(&VAR_0->raddr, VAR_0->be_pid, VAR_0->be_key,
         VAR_1, VAR_2);
}
