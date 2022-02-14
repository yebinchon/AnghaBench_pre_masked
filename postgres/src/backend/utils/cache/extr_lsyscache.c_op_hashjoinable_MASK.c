
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ hash_proc; } ;
typedef TYPE_1__ TypeCacheEntry ;
struct TYPE_5__ {int oprcanhash; } ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_operator ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;
 TYPE_1__* FUNC_5 (scalar_t__,int ) ;

bool
FUNC_6(Oid VAR_4, Oid VAR_5)
{
 bool VAR_6 = 0;
 HeapTuple VAR_7;
 TypeCacheEntry *VAR_8;



 if (VAR_4 == VAR_0)
 {
  VAR_8 = FUNC_5(VAR_5, VAR_3);
  if (VAR_8->hash_proc == VAR_1)
   VAR_6 = 1;
 }
 else
 {

  VAR_7 = FUNC_4(VAR_2, FUNC_2(VAR_4));
  if (FUNC_1(VAR_7))
  {
   Form_pg_operator VAR_9 = (Form_pg_operator) FUNC_0(VAR_7);

   VAR_6 = VAR_9->oprcanhash;
   FUNC_3(VAR_7);
  }
 }
 return VAR_6;
}
