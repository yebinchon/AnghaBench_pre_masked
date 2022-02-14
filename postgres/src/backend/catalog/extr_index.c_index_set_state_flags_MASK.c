
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int indislive; int indisready; int indisvalid; int indisclustered; } ;
typedef int Relation ;
typedef int Oid ;
typedef int IndexStateFlagsAction ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_index ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_1 ;




 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

void
FUNC_10(Oid VAR_5, IndexStateFlagsAction VAR_6)
{
 Relation VAR_7;
 HeapTuple VAR_8;
 Form_pg_index VAR_9;


 FUNC_0(FUNC_2() == VAR_3);


 VAR_7 = FUNC_9(VAR_2, VAR_4);

 VAR_8 = FUNC_5(VAR_1,
          FUNC_4(VAR_5));
 if (!FUNC_3(VAR_8))
  FUNC_6(VAR_0, "cache lookup failed for index %u", VAR_5);
 VAR_9 = (Form_pg_index) FUNC_1(VAR_8);


 switch (VAR_6)
 {
  case 131:

   FUNC_0(VAR_9->indislive);
   FUNC_0(!VAR_9->indisready);
   FUNC_0(!VAR_9->indisvalid);
   VAR_9->indisready = 1;
   break;
  case 130:

   FUNC_0(VAR_9->indislive);
   FUNC_0(VAR_9->indisready);
   FUNC_0(!VAR_9->indisvalid);
   VAR_9->indisvalid = 1;
   break;
  case 129:
   VAR_9->indisvalid = 0;
   VAR_9->indisclustered = 0;
   break;
  case 128:
   FUNC_0(!VAR_9->indisvalid);
   VAR_9->indisready = 0;
   VAR_9->indislive = 0;
   break;
 }


 FUNC_7(VAR_7, VAR_8);

 FUNC_8(VAR_7, VAR_4);
}
