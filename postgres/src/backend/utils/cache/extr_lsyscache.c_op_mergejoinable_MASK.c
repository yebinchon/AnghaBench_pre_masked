
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cmp_proc; } ;
typedef TYPE_1__ TypeCacheEntry ;
struct TYPE_5__ {int oprcanmerge; } ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_operator ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_5 ;
 TYPE_1__* FUNC_5 (scalar_t__,int ) ;

bool
FUNC_6(Oid VAR_6, Oid VAR_7)
{
 bool VAR_8 = 0;
 HeapTuple VAR_9;
 TypeCacheEntry *VAR_10;







 if (VAR_6 == VAR_0)
 {
  VAR_10 = FUNC_5(VAR_7, VAR_5);
  if (VAR_10->cmp_proc == VAR_1)
   VAR_8 = 1;
 }
 else if (VAR_6 == VAR_4)
 {
  VAR_10 = FUNC_5(VAR_7, VAR_5);
  if (VAR_10->cmp_proc == VAR_2)
   VAR_8 = 1;
 }
 else
 {

  VAR_9 = FUNC_4(VAR_3, FUNC_2(VAR_6));
  if (FUNC_1(VAR_9))
  {
   Form_pg_operator VAR_11 = (Form_pg_operator) FUNC_0(VAR_9);

   VAR_8 = VAR_11->oprcanmerge;
   FUNC_3(VAR_9);
  }
 }
 return VAR_8;
}
