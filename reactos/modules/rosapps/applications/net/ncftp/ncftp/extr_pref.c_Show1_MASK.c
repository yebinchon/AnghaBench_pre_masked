
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* varname; int (* proc ) (int,int *,int ) ;} ;
typedef int (* PrefProc ) (int,int *,int ) ;
typedef TYPE_1__ PrefOpt ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int,int *,int ) ;

__attribute__((used)) static void
FUNC_2(int VAR_2)
{
 PrefOpt *VAR_3 = &VAR_0[VAR_2];

 (void) FUNC_0("%-30s ", VAR_3->varname);
 if (VAR_3->proc != (PrefProc) 0)
  (*VAR_3->proc)(VAR_2, ((void*)0), VAR_1);
 (void) FUNC_0("\n");
}
