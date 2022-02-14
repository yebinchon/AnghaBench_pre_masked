
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_17__ {char typtype; int typbyval; int typlen; char typalign; int domainBaseType; int typelem; int domainBaseTypmod; } ;
typedef TYPE_6__ TypeCacheEntry ;
struct TYPE_15__ {int typfunc; } ;
struct TYPE_14__ {scalar_t__ natts; int * atts; int tupdescid; TYPE_6__* typentry; int * recdesc; } ;
struct TYPE_13__ {int typtransform; } ;
struct TYPE_12__ {TYPE_8__* elm; } ;
struct TYPE_16__ {TYPE_4__ scalar; TYPE_3__ tuple; TYPE_2__ transform; TYPE_1__ array; } ;
struct TYPE_19__ {int typoid; int typbyval; int typlen; char typalign; TYPE_5__ u; int func; int mcxt; int typmod; } ;
struct TYPE_18__ {int trftypes; int langid; } ;
typedef TYPE_7__ PLyProcedure ;
typedef TYPE_8__ PLyDatumToOb ;
typedef int Oid ;
typedef int MemoryContext ;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;


 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 char VAR_16 ;
 char VAR_17 ;
 int FUNC_2 () ;
 int FUNC_3 (int,int *,int ) ;
 int FUNC_4 (int,int*,int*) ;
 int FUNC_5 (int,int ,int ) ;
 TYPE_6__* FUNC_6 (int,int ) ;

void
FUNC_7(PLyDatumToOb *VAR_18, MemoryContext VAR_19,
      Oid VAR_20, int32 VAR_21,
      PLyProcedure *VAR_22)
{
 TypeCacheEntry *VAR_23;
 char VAR_24;
 Oid VAR_25;
 Oid VAR_26;
 bool VAR_27;


 FUNC_2();

 VAR_18->typoid = VAR_20;
 VAR_18->typmod = VAR_21;
 VAR_18->mcxt = VAR_19;






 if (VAR_20 != VAR_14)
 {
  VAR_23 = FUNC_6(VAR_20, VAR_15);
  VAR_24 = VAR_23->typtype;
  VAR_18->typbyval = VAR_23->typbyval;
  VAR_18->typlen = VAR_23->typlen;
  VAR_18->typalign = VAR_23->typalign;
 }
 else
 {
  VAR_23 = ((void*)0);
  VAR_24 = VAR_16;

  VAR_18->typbyval = 0;
  VAR_18->typlen = -1;
  VAR_18->typalign = 'd';
 }
 if (VAR_24 == VAR_17)
 {

  FUNC_7(VAR_18, VAR_19,
        VAR_23->domainBaseType,
        VAR_23->domainBaseTypmod,
        VAR_22);
 }
 else if (VAR_23 &&
    FUNC_1(VAR_23->typelem) && VAR_23->typlen == -1)
 {

  VAR_18->func = VAR_9;

  VAR_18->u.array.elm = (PLyDatumToOb *)
   FUNC_0(VAR_19, sizeof(PLyDatumToOb));
  FUNC_7(VAR_18->u.array.elm, VAR_19,
        VAR_23->typelem, VAR_21,
        VAR_22);
 }
 else if ((VAR_25 = FUNC_5(VAR_20,
              VAR_22->langid,
              VAR_22->trftypes)))
 {
  VAR_18->func = VAR_12;
  FUNC_3(VAR_25, &VAR_18->u.transform.typtransform, VAR_19);
 }
 else if (VAR_24 == VAR_16)
 {

  VAR_18->func = VAR_4;

  VAR_18->u.tuple.recdesc = ((void*)0);
  VAR_18->u.tuple.typentry = VAR_23;
  VAR_18->u.tuple.tupdescid = VAR_0;
  VAR_18->u.tuple.atts = ((void*)0);
  VAR_18->u.tuple.natts = 0;
 }
 else
 {

  switch (VAR_20)
  {
   case 136:
    VAR_18->func = VAR_1;
    break;
   case 134:
    VAR_18->func = VAR_5;
    break;
   case 133:
    VAR_18->func = VAR_6;
    break;
   case 129:
    VAR_18->func = VAR_3;
    break;
   case 132:
    VAR_18->func = VAR_7;
    break;
   case 131:
    VAR_18->func = VAR_8;
    break;
   case 130:
    VAR_18->func = VAR_10;
    break;
   case 128:
    VAR_18->func = VAR_11;
    break;
   case 135:
    VAR_18->func = VAR_2;
    break;
   default:
    VAR_18->func = VAR_13;
    FUNC_4(VAR_20, &VAR_26, &VAR_27);
    FUNC_3(VAR_26, &VAR_18->u.scalar.typfunc, VAR_19);
    break;
  }
 }
}
