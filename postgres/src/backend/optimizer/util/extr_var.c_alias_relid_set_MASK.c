
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int rtable; } ;
struct TYPE_6__ {scalar_t__ rtekind; } ;
typedef int * Relids ;
typedef TYPE_1__ RangeTblEntry ;
typedef TYPE_2__ Query ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,int) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_4 (int,int ) ;

__attribute__((used)) static Relids
FUNC_5(Query *VAR_1, Relids VAR_2)
{
 Relids VAR_3 = ((void*)0);
 int VAR_4;

 VAR_4 = -1;
 while ((VAR_4 = FUNC_2(VAR_2, VAR_4)) >= 0)
 {
  RangeTblEntry *VAR_5 = FUNC_4(VAR_4, VAR_1->rtable);

  if (VAR_5->rtekind == VAR_0)
   VAR_3 = FUNC_1(VAR_3, FUNC_3(VAR_1, VAR_4));
  else
   VAR_3 = FUNC_0(VAR_3, VAR_4);
 }
 return VAR_3;
}
