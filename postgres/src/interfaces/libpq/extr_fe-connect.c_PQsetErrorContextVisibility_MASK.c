
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int show_context; } ;
typedef TYPE_1__ PGconn ;
typedef int PGContextVisibility ;


 int VAR_0 ;

PGContextVisibility
FUNC_0(PGconn *VAR_1, PGContextVisibility VAR_2)
{
 PGContextVisibility VAR_3;

 if (!VAR_1)
  return VAR_0;
 VAR_3 = VAR_1->show_context;
 VAR_1->show_context = VAR_2;
 return VAR_3;
}
