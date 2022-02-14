
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {void* amhandler; } ;
struct TYPE_8__ {void* rd_amhandler; TYPE_1__* rd_rel; } ;
struct TYPE_7__ {scalar_t__ relkind; scalar_t__ relam; } ;
typedef TYPE_2__* Relation ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_am ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,char*,scalar_t__) ;

void
FUNC_9(Relation VAR_6)
{
 HeapTuple VAR_7;
 Form_pg_am VAR_8;

 if (VAR_6->rd_rel->relkind == VAR_5)
 {





  VAR_6->rd_amhandler = VAR_2;
 }
 else if (FUNC_4(VAR_6))
 {



  FUNC_0(VAR_6->rd_rel->relam == VAR_3);
  VAR_6->rd_amhandler = VAR_2;
 }
 else
 {




  FUNC_0(VAR_6->rd_rel->relam != VAR_4);
  VAR_7 = FUNC_7(VAR_0,
        FUNC_5(VAR_6->rd_rel->relam));
  if (!FUNC_2(VAR_7))
   FUNC_8(VAR_1, "cache lookup failed for access method %u",
     VAR_6->rd_rel->relam);
  VAR_8 = (Form_pg_am) FUNC_1(VAR_7);
  VAR_6->rd_amhandler = VAR_8->amhandler;
  FUNC_6(VAR_7);
 }




 FUNC_3(VAR_6);
}
