
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_3__ {int aborted; int password_sem; int * ctx; } ;
typedef TYPE_1__ MuOfficeDoc ;


 int FUNC_0 (int *) ;

void FUNC_1(MuOfficeDoc *VAR_0)
{
 fz_context *VAR_1;

 if (VAR_0 == ((void*)0))
  return;

 VAR_1 = VAR_0->ctx;
 VAR_0->aborted = 1;
 FUNC_0(&VAR_0->password_sem);
}
