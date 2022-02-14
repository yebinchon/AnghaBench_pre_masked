
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_6__ {int attname; } ;
struct TYPE_5__ {int natts; } ;
typedef int Relation ;


 char* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ,char const*) ;
 char* FUNC_5 (int ,int,int) ;

int
FUNC_6(Relation VAR_0, int VAR_1)
{
 TupleDesc VAR_2 = FUNC_1(VAR_0);
 const char *VAR_3;


 if (VAR_1 > 0 && VAR_1 <= VAR_2->natts)
  VAR_3 = FUNC_0(FUNC_3(VAR_2, VAR_1 - 1)->attname);
 else
  VAR_3 = FUNC_5(FUNC_2(VAR_0), VAR_1, 0);

 return FUNC_4(VAR_0, VAR_3);
}
