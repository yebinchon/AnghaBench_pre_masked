
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int hashkey ;
typedef TYPE_1__* UnresolvedTup ;
struct TYPE_11__ {int tid; int xmin; } ;
typedef TYPE_2__ TidHashKey ;
struct TYPE_13__ {int t_self; int t_data; } ;
struct TYPE_12__ {int rs_unresolved_tups; } ;
struct TYPE_10__ {int tuple; } ;
typedef TYPE_3__* RewriteState ;
typedef TYPE_4__* HeapTuple ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ,TYPE_2__*,int ,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;

bool
FUNC_5(RewriteState VAR_2, HeapTuple VAR_3)
{
 UnresolvedTup VAR_4;
 TidHashKey VAR_5;
 bool VAR_6;

 FUNC_4(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.xmin = FUNC_1(VAR_3->t_data);
 VAR_5.tid = VAR_3->t_self;

 VAR_4 = FUNC_2(VAR_2->rs_unresolved_tups, &VAR_5,
        VAR_0, ((void*)0));

 if (VAR_4 != ((void*)0))
 {

  FUNC_3(VAR_4->tuple);
  FUNC_2(VAR_2->rs_unresolved_tups, &VAR_5,
     VAR_1, &VAR_6);
  FUNC_0(VAR_6);
  return 1;
 }

 return 0;
}
