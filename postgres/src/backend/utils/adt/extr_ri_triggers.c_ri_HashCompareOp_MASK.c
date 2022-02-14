
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {void* fn_oid; } ;
struct TYPE_6__ {int valid; TYPE_4__ cast_func_finfo; TYPE_4__ eq_opr_finfo; } ;
struct TYPE_5__ {scalar_t__ typeid; scalar_t__ eq_opr; } ;
typedef TYPE_1__ RI_CompareKey ;
typedef TYPE_2__ RI_CompareHashEntry ;
typedef scalar_t__ Oid ;
typedef scalar_t__ CoercionPathType ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_3 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,int ,scalar_t__*) ;
 int FUNC_5 (scalar_t__,TYPE_4__*,int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ,void*,int ,int*) ;
 int FUNC_9 (scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_10 () ;
 int VAR_7 ;

__attribute__((used)) static RI_CompareHashEntry *
FUNC_11(Oid VAR_8, Oid VAR_9)
{
 RI_CompareKey VAR_10;
 RI_CompareHashEntry *VAR_11;
 bool VAR_12;




 if (!VAR_7)
  FUNC_10();





 VAR_10.eq_opr = VAR_8;
 VAR_10.typeid = VAR_9;
 VAR_11 = (RI_CompareHashEntry *) FUNC_8(VAR_7,
            (void *) &VAR_10,
            VAR_4, &VAR_12);
 if (!VAR_12)
  VAR_11->valid = 0;






 if (!VAR_11->valid)
 {
  Oid VAR_13,
     VAR_14,
     VAR_15;
  CoercionPathType VAR_16;


  FUNC_5(FUNC_7(VAR_8), &VAR_11->eq_opr_finfo,
       VAR_6);
  FUNC_9(VAR_8, &VAR_13, &VAR_14);
  FUNC_0(VAR_13 == VAR_14);
  if (VAR_9 == VAR_13)
   VAR_15 = VAR_5;
  else
  {
   VAR_16 = FUNC_4(VAR_13, VAR_9,
            VAR_0,
            &VAR_15);
   if (VAR_16 != VAR_1 &&
    VAR_16 != VAR_2)
   {






    if (!FUNC_1(VAR_9, VAR_13))
     FUNC_3(VAR_3, "no conversion function from %s to %s",
       FUNC_6(VAR_9),
       FUNC_6(VAR_13));
   }
  }
  if (FUNC_2(VAR_15))
   FUNC_5(VAR_15, &VAR_11->cast_func_finfo,
        VAR_6);
  else
   VAR_11->cast_func_finfo.fn_oid = VAR_5;
  VAR_11->valid = 1;
 }

 return VAR_11;
}
