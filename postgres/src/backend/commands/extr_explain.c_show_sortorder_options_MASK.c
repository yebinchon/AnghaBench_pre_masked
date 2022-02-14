
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ gt_opr; scalar_t__ lt_opr; } ;
typedef TYPE_1__ TypeCacheEntry ;
typedef int StringInfo ;
typedef scalar_t__ Oid ;
typedef int Node ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 char* FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int*) ;
 char* FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 TYPE_1__* FUNC_9 (scalar_t__,int) ;
 char* FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11(StringInfo VAR_3, Node *VAR_4,
        Oid VAR_5, Oid VAR_6, bool VAR_7)
{
 Oid VAR_8 = FUNC_4(VAR_4);
 bool VAR_9 = 0;
 TypeCacheEntry *VAR_10;

 VAR_10 = FUNC_9(VAR_8,
         VAR_2 | VAR_1);
 if (FUNC_0(VAR_6) && VAR_6 != FUNC_8(VAR_8))
 {
  char *VAR_11 = FUNC_5(VAR_6);

  if (VAR_11 == ((void*)0))
   FUNC_3(VAR_0, "cache lookup failed for collation %u", VAR_6);
  FUNC_1(VAR_3, " COLLATE %s", FUNC_10(VAR_11));
 }


 if (VAR_5 == VAR_10->gt_opr)
 {
  FUNC_2(VAR_3, " DESC");
  VAR_9 = 1;
 }
 else if (VAR_5 != VAR_10->lt_opr)
 {
  char *VAR_12 = FUNC_7(VAR_5);

  if (VAR_12 == ((void*)0))
   FUNC_3(VAR_0, "cache lookup failed for operator %u", VAR_5);
  FUNC_1(VAR_3, " USING %s", VAR_12);

  (void) FUNC_6(VAR_5, &VAR_9);
 }


 if (VAR_7 && !VAR_9)
 {
  FUNC_2(VAR_3, " NULLS FIRST");
 }
 else if (!VAR_7 && VAR_9)
 {
  FUNC_2(VAR_3, " NULLS LAST");
 }
}
