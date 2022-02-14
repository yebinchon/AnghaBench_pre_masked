
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* rd_indam; } ;
struct TYPE_5__ {int (* amcanreturn ) (TYPE_2__*,int) ;} ;
typedef TYPE_2__* Relation ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;

bool
FUNC_1(Relation VAR_1, int VAR_2)
{
 VAR_0;


 if (VAR_1->rd_indam->amcanreturn == ((void*)0))
  return 0;

 return VAR_1->rd_indam->amcanreturn(VAR_1, VAR_2);
}
