
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int attisdropped; } ;
struct TYPE_4__ {int relnatts; scalar_t__ relkind; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_class ;
typedef TYPE_2__* Form_pg_attribute ;
typedef scalar_t__ AttrNumber ;
typedef int AclMode ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,char*,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_8(Oid VAR_5, Form_pg_class VAR_6,
        AclMode VAR_7,
        AclMode *VAR_8,
        int VAR_9)
{
 AttrNumber VAR_10;

 FUNC_0(VAR_6->relnatts - VAR_2 < VAR_9);
 for (VAR_10 = VAR_2 + 1;
   VAR_10 <= VAR_6->relnatts;
   VAR_10++)
 {
  HeapTuple VAR_11;
  bool VAR_12;

  if (VAR_10 == VAR_3)
   continue;


  if (VAR_6->relkind == VAR_4 && VAR_10 < 0)
   continue;

  VAR_11 = FUNC_6(VAR_0,
           FUNC_4(VAR_5),
           FUNC_3(VAR_10));
  if (!FUNC_2(VAR_11))
   FUNC_7(VAR_1, "cache lookup failed for attribute %d of relation %u",
     VAR_10, VAR_5);

  VAR_12 = ((Form_pg_attribute) FUNC_1(VAR_11))->attisdropped;

  FUNC_5(VAR_11);


  if (VAR_12)
   continue;

  VAR_8[VAR_10 - VAR_2] |= VAR_7;
 }
}
