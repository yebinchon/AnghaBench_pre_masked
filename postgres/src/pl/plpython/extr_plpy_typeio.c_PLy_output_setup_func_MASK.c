
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int int32 ;
struct TYPE_22__ {char typtype; int typbyval; int typlen; char typalign; int domainBaseType; int typelem; int domainBaseTypmod; } ;
typedef TYPE_8__ TypeCacheEntry ;
struct TYPE_23__ {int trftypes; int langid; } ;
struct TYPE_20__ {int typfunc; int typioparam; } ;
struct TYPE_18__ {int fn_oid; } ;
struct TYPE_19__ {TYPE_4__ recinfunc; scalar_t__ natts; int * atts; int tupdescid; TYPE_8__* typentry; int * recdesc; } ;
struct TYPE_17__ {int typtransform; } ;
struct TYPE_16__ {TYPE_10__* elm; int elmbasetype; } ;
struct TYPE_15__ {TYPE_10__* base; int * domain_info; } ;
struct TYPE_21__ {TYPE_6__ scalar; TYPE_5__ tuple; TYPE_3__ transform; TYPE_2__ array; TYPE_1__ domain; } ;
struct TYPE_14__ {int typoid; int typbyval; int typlen; char typalign; TYPE_7__ u; int func; int mcxt; int typmod; } ;
typedef TYPE_9__ PLyProcedure ;
typedef TYPE_10__ PLyObToDatum ;
typedef int Oid ;
typedef int MemoryContext ;




 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char VAR_11 ;
 char VAR_12 ;
 int FUNC_2 () ;
 int FUNC_3 (int,int *,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int*,int *) ;
 int FUNC_6 (int,int ,int ) ;
 TYPE_8__* FUNC_7 (int,int ) ;

void
FUNC_8(PLyObToDatum *VAR_13, MemoryContext VAR_14,
       Oid VAR_15, int32 VAR_16,
       PLyProcedure *VAR_17)
{
 TypeCacheEntry *VAR_18;
 char VAR_19;
 Oid VAR_20;
 Oid VAR_21;


 FUNC_2();

 VAR_13->typoid = VAR_15;
 VAR_13->typmod = VAR_16;
 VAR_13->mcxt = VAR_14;






 if (VAR_15 != VAR_9)
 {
  VAR_18 = FUNC_7(VAR_15, VAR_10);
  VAR_19 = VAR_18->typtype;
  VAR_13->typbyval = VAR_18->typbyval;
  VAR_13->typlen = VAR_18->typlen;
  VAR_13->typalign = VAR_18->typalign;
 }
 else
 {
  VAR_18 = ((void*)0);
  VAR_19 = VAR_11;

  VAR_13->typbyval = 0;
  VAR_13->typlen = -1;
  VAR_13->typalign = 'd';
 }
 if (VAR_19 == VAR_12)
 {

  VAR_13->func = VAR_5;
  VAR_13->u.domain.domain_info = ((void*)0);

  VAR_13->u.domain.base = (PLyObToDatum *)
   FUNC_0(VAR_14, sizeof(PLyObToDatum));
  FUNC_8(VAR_13->u.domain.base, VAR_14,
         VAR_18->domainBaseType,
         VAR_18->domainBaseTypmod,
         VAR_17);
 }
 else if (VAR_18 &&
    FUNC_1(VAR_18->typelem) && VAR_18->typlen == -1)
 {

  VAR_13->func = VAR_8;


  VAR_13->u.array.elmbasetype = FUNC_4(VAR_18->typelem);

  VAR_13->u.array.elm = (PLyObToDatum *)
   FUNC_0(VAR_14, sizeof(PLyObToDatum));
  FUNC_8(VAR_13->u.array.elm, VAR_14,
         VAR_18->typelem, VAR_16,
         VAR_17);
 }
 else if ((VAR_20 = FUNC_6(VAR_15,
            VAR_17->langid,
            VAR_17->trftypes)))
 {
  VAR_13->func = VAR_7;
  FUNC_3(VAR_20, &VAR_13->u.transform.typtransform, VAR_14);
 }
 else if (VAR_19 == VAR_11)
 {

  VAR_13->func = VAR_4;

  VAR_13->u.tuple.recdesc = ((void*)0);
  VAR_13->u.tuple.typentry = VAR_18;
  VAR_13->u.tuple.tupdescid = VAR_0;
  VAR_13->u.tuple.atts = ((void*)0);
  VAR_13->u.tuple.natts = 0;

  VAR_13->u.tuple.recinfunc.fn_oid = VAR_1;
 }
 else
 {

  switch (VAR_15)
  {
   case 129:
    VAR_13->func = VAR_2;
    break;
   case 128:
    VAR_13->func = VAR_3;
    break;
   default:
    VAR_13->func = VAR_6;
    FUNC_5(VAR_15, &VAR_21, &VAR_13->u.scalar.typioparam);
    FUNC_3(VAR_21, &VAR_13->u.scalar.typfunc, VAR_14);
    break;
  }
 }
}
