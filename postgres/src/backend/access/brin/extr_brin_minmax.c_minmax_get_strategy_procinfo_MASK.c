
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_16__ {int bd_context; int bd_tupdesc; TYPE_2__* bd_index; TYPE_1__** bd_info; } ;
struct TYPE_15__ {scalar_t__ fn_oid; } ;
struct TYPE_14__ {scalar_t__ atttypid; } ;
struct TYPE_13__ {scalar_t__ cached_subtype; TYPE_5__* strategy_procinfos; } ;
struct TYPE_12__ {scalar_t__* rd_opfamily; } ;
struct TYPE_11__ {scalar_t__ oi_opaque; } ;
typedef scalar_t__ Oid ;
typedef TYPE_3__ MinmaxOpaque ;
typedef int HeapTuple ;
typedef TYPE_4__* Form_pg_attribute ;
typedef TYPE_5__ FmgrInfo ;
typedef TYPE_6__ BrinDesc ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int*) ;
 TYPE_4__* FUNC_9 (int ,int) ;
 int FUNC_10 (int ,char*,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_11 (int ,TYPE_5__*,int ) ;
 int FUNC_12 (scalar_t__) ;

__attribute__((used)) static FmgrInfo *
FUNC_13(BrinDesc *VAR_5, uint16 VAR_6, Oid VAR_7,
        uint16 VAR_8)
{
 MinmaxOpaque *VAR_9;

 FUNC_0(VAR_8 >= 1 &&
     VAR_8 <= VAR_2);

 VAR_9 = (MinmaxOpaque *) VAR_5->bd_info[VAR_6 - 1]->oi_opaque;






 if (VAR_9->cached_subtype != VAR_7)
 {
  uint16 VAR_10;

  for (VAR_10 = 1; VAR_10 <= VAR_2; VAR_10++)
   VAR_9->strategy_procinfos[VAR_10 - 1].fn_oid = VAR_4;
  VAR_9->cached_subtype = VAR_7;
 }

 if (VAR_9->strategy_procinfos[VAR_8 - 1].fn_oid == VAR_4)
 {
  Form_pg_attribute VAR_11;
  HeapTuple VAR_12;
  Oid VAR_13,
     VAR_14;
  bool VAR_15;

  VAR_13 = VAR_5->bd_index->rd_opfamily[VAR_6 - 1];
  VAR_11 = FUNC_9(VAR_5->bd_tupdesc, VAR_6 - 1);
  VAR_12 = FUNC_7(VAR_0, FUNC_4(VAR_13),
        FUNC_4(VAR_11->atttypid),
        FUNC_4(VAR_7),
        FUNC_3(VAR_8));

  if (!FUNC_2(VAR_12))
   FUNC_10(VAR_3, "missing operator %d(%u,%u) in opfamily %u",
     VAR_8, VAR_11->atttypid, VAR_7, VAR_13);

  VAR_14 = FUNC_1(FUNC_8(VAR_0, VAR_12,
             VAR_1, &VAR_15));
  FUNC_6(VAR_12);
  FUNC_0(!VAR_15 && FUNC_5(VAR_14));

  FUNC_11(FUNC_12(VAR_14),
       &VAR_9->strategy_procinfos[VAR_8 - 1],
       VAR_5->bd_context);
 }

 return &VAR_9->strategy_procinfos[VAR_8 - 1];
}
