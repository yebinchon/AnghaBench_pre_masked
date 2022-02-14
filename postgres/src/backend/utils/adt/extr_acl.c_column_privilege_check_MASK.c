
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ attisdropped; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_attribute ;
typedef scalar_t__ AttrNumber ;
typedef scalar_t__ AclResult ;
typedef int AclMode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_9(Oid VAR_4, AttrNumber VAR_5,
        Oid VAR_6, AclMode VAR_7)
{
 AclResult VAR_8;
 HeapTuple VAR_9;
 Form_pg_attribute VAR_10;




 if (VAR_5 == VAR_2)
  return -1;
 if (!FUNC_6(VAR_3, FUNC_3(VAR_4)))
  return -1;

 VAR_8 = FUNC_8(VAR_4, VAR_6, VAR_7);

 if (VAR_8 == VAR_0)
  return 1;






 VAR_9 = FUNC_5(VAR_1,
          FUNC_3(VAR_4),
          FUNC_2(VAR_5));
 if (!FUNC_1(VAR_9))
  return -1;
 VAR_10 = (Form_pg_attribute) FUNC_0(VAR_9);
 if (VAR_10->attisdropped)
 {
  FUNC_4(VAR_9);
  return -1;
 }
 FUNC_4(VAR_9);

 VAR_8 = FUNC_7(VAR_4, VAR_5, VAR_6, VAR_7);

 return (VAR_8 == VAR_0);
}
