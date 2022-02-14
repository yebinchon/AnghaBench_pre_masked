
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_4__ {int dbNode; } ;
struct TYPE_5__ {int rd_id; TYPE_1__ rd_node; } ;
typedef TYPE_2__* Relation ;
typedef int PREDICATELOCKTARGETTAG ;
typedef int PREDICATELOCKTARGET ;
typedef int LWLock ;
typedef int BlockNumber ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int * FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int *,int ,int ,int *) ;

bool
FUNC_6(Relation VAR_3, BlockNumber VAR_4)
{
 PREDICATELOCKTARGETTAG VAR_5;
 uint32 VAR_6;
 LWLock *VAR_7;
 PREDICATELOCKTARGET *VAR_8;

 FUNC_4(VAR_5,
         VAR_3->rd_node.dbNode,
         VAR_3->rd_id,
         VAR_4);

 VAR_6 = FUNC_3(&VAR_5);
 VAR_7 = FUNC_2(VAR_6);
 FUNC_0(VAR_7, VAR_1);
 VAR_8 = (PREDICATELOCKTARGET *)
  FUNC_5(VAR_2,
         &VAR_5, VAR_6,
         VAR_0, ((void*)0));
 FUNC_1(VAR_7);

 return (VAR_8 != ((void*)0));
}
