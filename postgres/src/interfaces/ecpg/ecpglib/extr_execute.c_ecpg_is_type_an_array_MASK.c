
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct variable {int type; } ;
struct statement {int lineno; TYPE_1__* connection; int compat; } ;
struct ECPGtype_information_cache {int oid; int isarray; struct ECPGtype_information_cache* next; } ;
typedef enum ARRAY_TYPE { ____Placeholder_ARRAY_TYPE } ARRAY_TYPE ;
struct TYPE_2__ {struct ECPGtype_information_cache* cache_head; int connection; } ;
typedef int PGresult ;


 int VAR_0 ;
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
 scalar_t__ FUNC_0 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int ,int,int ,char*) ;
 int FUNC_12 (struct ECPGtype_information_cache**,int,int,int ) ;
 int VAR_47 ;
 int FUNC_13 (char*,char*,int) ;
 scalar_t__ FUNC_14 (char*) ;

__attribute__((used)) static enum ARRAY_TYPE
FUNC_15(int VAR_48, const struct statement *VAR_49, const struct variable *VAR_50)
{
 char *VAR_51;
 enum ARRAY_TYPE VAR_52 = VAR_14;
 PGresult *VAR_53;
 struct ECPGtype_information_cache *VAR_54;

 if ((VAR_49->connection->cache_head) == ((void*)0))
 {







  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_1, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_4, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_6, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_26, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_22, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_19, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_20, VAR_15, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_21, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_34, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_37, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_28, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_38, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_46, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_7, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_29, VAR_15, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_32, VAR_15, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_25, VAR_15, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_30, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_2, VAR_15, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_33, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_24, VAR_15, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_16, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_17, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_43, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_9, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_5, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_18, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_8, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_3, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_45, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_10, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_39, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_40, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_41, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_23, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_42, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_0, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_44, VAR_13, VAR_49->lineno))
   return VAR_12;
  if (!FUNC_12(&(VAR_49->connection->cache_head), VAR_27, VAR_13, VAR_49->lineno))
   return VAR_12;
 }

 for (VAR_54 = (VAR_49->connection->cache_head); VAR_54 != ((void*)0); VAR_54 = VAR_54->next)
 {
  if (VAR_54->oid == VAR_48)
   return VAR_54->isarray;
 }

 VAR_51 = (char *) FUNC_7(FUNC_14("select typlen from pg_type where oid= and typelem<>0") + 11, VAR_49->lineno);
 if (VAR_51 == ((void*)0))
  return VAR_12;

 FUNC_13(VAR_51, "select typlen from pg_type where oid=%d and typelem<>0", VAR_48);
 VAR_53 = FUNC_2(VAR_49->connection->connection, VAR_51);
 FUNC_10(VAR_51);
 if (!FUNC_8(VAR_53, VAR_49->lineno, VAR_49->connection->connection, VAR_49->compat))
  return VAR_12;
 else if (FUNC_5(VAR_53) == VAR_31)
 {
  if (FUNC_4(VAR_53) == 0)
   VAR_52 = VAR_13;
  else
  {
   VAR_52 = (FUNC_6((char *) FUNC_3(VAR_53, 0, 0)) == -1) ? VAR_11 : VAR_15;
   if (FUNC_9(VAR_48) == VAR_35 ||
    FUNC_9(VAR_48) == VAR_36)
   {



    VAR_52 = VAR_13;
   }
  }
  FUNC_1(VAR_53);
 }
 else
  return VAR_12;

 FUNC_12(&(VAR_49->connection->cache_head), VAR_48, VAR_52, VAR_49->lineno);
 FUNC_11("ecpg_is_type_an_array on line %d: type (%d); C (%d); array (%s)\n", VAR_49->lineno, VAR_48, VAR_50->type, FUNC_0(VAR_52) ? "yes" : "no");
 return VAR_52;
}
