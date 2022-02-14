
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ attisdropped; } ;
struct TYPE_3__ {int relnatts; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_class ;
typedef TYPE_2__* Form_pg_attribute ;
typedef int AttrNumber ;
typedef int AclResult ;
typedef scalar_t__ AclMode ;
typedef scalar_t__ AclMaskHow ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int *) ;
 scalar_t__ FUNC_8 (int ,int,int ,scalar_t__,scalar_t__) ;

AclResult
FUNC_9(Oid VAR_7, Oid VAR_8, AclMode VAR_9,
        AclMaskHow VAR_10)
{
 AclResult VAR_11;
 HeapTuple VAR_12;
 Form_pg_class VAR_13;
 AttrNumber VAR_14;
 AttrNumber VAR_15;






 VAR_12 = FUNC_5(VAR_6, FUNC_3(VAR_7));
 if (!FUNC_1(VAR_12))
  return VAR_0;
 VAR_13 = (Form_pg_class) FUNC_0(VAR_12);

 VAR_14 = VAR_13->relnatts;

 FUNC_4(VAR_12);





 VAR_11 = VAR_0;

 for (VAR_15 = 1; VAR_15 <= VAR_14; VAR_15++)
 {
  HeapTuple VAR_16;
  AclMode VAR_17;

  VAR_16 = FUNC_6(VAR_4,
           FUNC_3(VAR_7),
           FUNC_2(VAR_15));
  if (!FUNC_1(VAR_16))
   continue;


  if (((Form_pg_attribute) FUNC_0(VAR_16))->attisdropped)
  {
   FUNC_4(VAR_16);
   continue;
  }






  if (FUNC_7(VAR_16, VAR_5, ((void*)0)))
   VAR_17 = 0;
  else
   VAR_17 = FUNC_8(VAR_7, VAR_15, VAR_8,
             VAR_9, VAR_3);

  FUNC_4(VAR_16);

  if (VAR_17 != 0)
  {
   VAR_11 = VAR_1;
   if (VAR_10 == VAR_3)
    break;
  }
  else
  {
   VAR_11 = VAR_0;
   if (VAR_10 == VAR_2)
    break;
  }
 }

 return VAR_11;
}
