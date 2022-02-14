
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_2__ {scalar_t__ collprovider; int oid; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_collation ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static Oid
FUNC_10(const char *VAR_4, Oid VAR_5, int32 VAR_6)
{
 Oid VAR_7;
 HeapTuple VAR_8;
 Form_pg_collation VAR_9;


 VAR_7 = FUNC_1(VAR_1, VAR_0,
        FUNC_6(VAR_4),
        FUNC_3(VAR_6),
        FUNC_4(VAR_5));
 if (FUNC_5(VAR_7))
  return VAR_7;







 VAR_8 = FUNC_8(VAR_1,
         FUNC_6(VAR_4),
         FUNC_3(-1),
         FUNC_4(VAR_5));
 if (!FUNC_2(VAR_8))
  return VAR_3;
 VAR_9 = (Form_pg_collation) FUNC_0(VAR_8);
 if (VAR_9->collprovider == VAR_2)
 {
  if (FUNC_9(VAR_6))
   VAR_7 = VAR_9->oid;
  else
   VAR_7 = VAR_3;
 }
 else
 {
  VAR_7 = VAR_9->oid;
 }
 FUNC_7(VAR_8);
 return VAR_7;
}
