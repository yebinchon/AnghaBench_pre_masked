
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_3__ {scalar_t__* values; } ;
struct TYPE_4__ {scalar_t__ prorettype; int pronargs; TYPE_1__ proargtypes; scalar_t__ proretset; } ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_proc ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_0 (int ) ;


 int FUNC_1 (int ) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_15 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static bool
FUNC_7(Oid VAR_18, int16 VAR_19, Oid VAR_20)
{
 bool VAR_21 = 1;
 Oid VAR_22;
 int16 VAR_23;
 HeapTuple VAR_24;
 Form_pg_proc VAR_25;

 switch (VAR_19)
 {
  case 128:
   VAR_22 = VAR_13;
   VAR_23 = 1;
   break;

  case 129:
   VAR_22 = VAR_14;
   VAR_23 = 2;
   break;

  default:
   FUNC_6(VAR_4, "invalid amprocnum");
 }

 VAR_24 = FUNC_5(VAR_15, FUNC_3(VAR_18));
 if (!FUNC_1(VAR_24))
  FUNC_6(VAR_4, "cache lookup failed for function %u", VAR_18);
 VAR_25 = (Form_pg_proc) FUNC_0(VAR_24);

 if (VAR_25->prorettype != VAR_22 || VAR_25->proretset ||
  VAR_25->pronargs != VAR_23)
  VAR_21 = 0;

 if (!FUNC_2(VAR_20, VAR_25->proargtypes.values[0]))
 {
  if ((VAR_18 == VAR_7 || VAR_18 == VAR_8) &&
   (VAR_20 == VAR_3 ||
    VAR_20 == VAR_17 || VAR_20 == VAR_2))
                                          ;
  else if ((VAR_18 == VAR_11 ||
      VAR_18 == VAR_12) &&
     VAR_20 == VAR_16)
                                                ;
  else if ((VAR_18 == VAR_5 || VAR_18 == VAR_6) &&
     VAR_20 == VAR_0)
                                          ;
  else if ((VAR_18 == VAR_9 || VAR_18 == VAR_10) &&
     VAR_20 == VAR_1)
                                             ;
  else
   VAR_21 = 0;
 }


 if (VAR_23 == 2 && VAR_25->proargtypes.values[1] != VAR_14)
  VAR_21 = 0;

 FUNC_4(VAR_24);
 return VAR_21;
}
