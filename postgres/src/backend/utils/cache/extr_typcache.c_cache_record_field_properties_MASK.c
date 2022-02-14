
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ type_id; int flags; scalar_t__ typtype; scalar_t__ domainBaseType; int domainBaseTypmod; int cmp_proc; int eq_opr; TYPE_2__* tupDesc; } ;
typedef TYPE_1__ TypeCacheEntry ;
typedef TYPE_2__* TupleDesc ;
struct TYPE_13__ {scalar_t__ atttypid; scalar_t__ attisdropped; } ;
struct TYPE_12__ {int natts; } ;
typedef TYPE_3__* Form_pg_attribute ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_3__* FUNC_3 (TYPE_2__*,int) ;
 scalar_t__ FUNC_4 (scalar_t__,int*) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_7(TypeCacheEntry *VAR_10)
{





 if (VAR_10->type_id == VAR_1)
  VAR_10->flags |= (VAR_5 |
       VAR_4);
 else if (VAR_10->typtype == VAR_8)
 {
  TupleDesc VAR_11;
  int VAR_12;
  int VAR_13;


  if (VAR_10->tupDesc == ((void*)0))
   FUNC_5(VAR_10);
  VAR_11 = VAR_10->tupDesc;


  FUNC_1(VAR_11);


  VAR_12 = (VAR_5 |
     VAR_4);
  for (VAR_13 = 0; VAR_13 < VAR_11->natts; VAR_13++)
  {
   TypeCacheEntry *VAR_14;
   Form_pg_attribute VAR_15 = FUNC_3(VAR_11, VAR_13);

   if (VAR_15->attisdropped)
    continue;

   VAR_14 = FUNC_6(VAR_15->atttypid,
             VAR_7 |
             VAR_6);
   if (!FUNC_2(VAR_14->eq_opr))
    VAR_12 &= ~VAR_5;
   if (!FUNC_2(VAR_14->cmp_proc))
    VAR_12 &= ~VAR_4;


   if (VAR_12 == 0)
    break;
  }
  VAR_10->flags |= VAR_12;

  FUNC_0(VAR_11);
 }
 else if (VAR_10->typtype == VAR_9)
 {

  TypeCacheEntry *VAR_16;


  if (VAR_10->domainBaseType == VAR_0)
  {
   VAR_10->domainBaseTypmod = -1;
   VAR_10->domainBaseType =
    FUNC_4(VAR_10->type_id,
          &VAR_10->domainBaseTypmod);
  }
  VAR_16 = FUNC_6(VAR_10->domainBaseType,
           VAR_7 |
           VAR_6);
  if (VAR_16->typtype == VAR_8)
  {
   VAR_10->flags |= VAR_3;
   VAR_10->flags |= VAR_16->flags & (VAR_5 |
               VAR_4);
  }
 }
 VAR_10->flags |= VAR_2;
}
