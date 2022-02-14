
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int32 ;
typedef int bits16 ;
struct TYPE_2__ {scalar_t__ typelem; char typstorage; int typmodout; int typname; int typnamespace; } ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_type ;





 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;




 scalar_t__ VAR_4 ;

 char* FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;




 int VAR_5 ;
 scalar_t__ FUNC_6 (scalar_t__) ;


 int FUNC_7 (int ,char*,scalar_t__) ;
 char* FUNC_8 (int ) ;
 char* FUNC_9 (char*,int ,int ) ;
 char* FUNC_10 (char*,char*) ;
 char* FUNC_11 (char*) ;
 char* FUNC_12 (char*,char*) ;

char *
FUNC_13(Oid VAR_6, int32 VAR_7, bits16 VAR_8)
{
 HeapTuple VAR_9;
 Form_pg_type VAR_10;
 Oid VAR_11;
 bool VAR_12;
 char *VAR_13;
 bool VAR_14;

 if (VAR_6 == VAR_4 && (VAR_8 & VAR_1) != 0)
  return FUNC_11("-");

 VAR_9 = FUNC_5(VAR_5, FUNC_3(VAR_6));
 if (!FUNC_1(VAR_9))
 {
  if ((VAR_8 & VAR_1) != 0)
   return FUNC_11("???");
  else
   FUNC_7(VAR_0, "cache lookup failed for type %u", VAR_6);
 }
 VAR_10 = (Form_pg_type) FUNC_0(VAR_9);
 VAR_11 = VAR_10->typelem;

 if (VAR_11 != VAR_4 && VAR_10->typstorage != 'p')
 {

  FUNC_4(VAR_9);
  VAR_9 = FUNC_5(VAR_5, FUNC_3(VAR_11));
  if (!FUNC_1(VAR_9))
  {
   if ((VAR_8 & VAR_1) != 0)
    return FUNC_11("???[]");
   else
    FUNC_7(VAR_0, "cache lookup failed for type %u", VAR_6);
  }
  VAR_10 = (Form_pg_type) FUNC_0(VAR_9);
  VAR_6 = VAR_11;
  VAR_12 = 1;
 }
 else
  VAR_12 = 0;

 VAR_14 = (VAR_8 & VAR_3) != 0 && (VAR_7 >= 0);
 VAR_13 = ((void*)0);

 switch (VAR_6)
 {
  case 143:
   if (VAR_14)
    VAR_13 = FUNC_9("bit", VAR_7, VAR_10->typmodout);
   else if ((VAR_8 & VAR_3) != 0)
   {





   }
   else
    VAR_13 = FUNC_11("bit");
   break;

  case 142:
   VAR_13 = FUNC_11("boolean");
   break;

  case 141:
   if (VAR_14)
    VAR_13 = FUNC_9("character", VAR_7, VAR_10->typmodout);
   else if ((VAR_8 & VAR_3) != 0)
   {





   }
   else
    VAR_13 = FUNC_11("character");
   break;

  case 140:
   VAR_13 = FUNC_11("real");
   break;

  case 139:
   VAR_13 = FUNC_11("double precision");
   break;

  case 138:
   VAR_13 = FUNC_11("smallint");
   break;

  case 137:
   VAR_13 = FUNC_11("integer");
   break;

  case 136:
   VAR_13 = FUNC_11("bigint");
   break;

  case 134:
   if (VAR_14)
    VAR_13 = FUNC_9("numeric", VAR_7, VAR_10->typmodout);
   else
    VAR_13 = FUNC_11("numeric");
   break;

  case 135:
   if (VAR_14)
    VAR_13 = FUNC_9("interval", VAR_7, VAR_10->typmodout);
   else
    VAR_13 = FUNC_11("interval");
   break;

  case 133:
   if (VAR_14)
    VAR_13 = FUNC_9("time", VAR_7, VAR_10->typmodout);
   else
    VAR_13 = FUNC_11("time without time zone");
   break;

  case 130:
   if (VAR_14)
    VAR_13 = FUNC_9("time", VAR_7, VAR_10->typmodout);
   else
    VAR_13 = FUNC_11("time with time zone");
   break;

  case 132:
   if (VAR_14)
    VAR_13 = FUNC_9("timestamp", VAR_7, VAR_10->typmodout);
   else
    VAR_13 = FUNC_11("timestamp without time zone");
   break;

  case 131:
   if (VAR_14)
    VAR_13 = FUNC_9("timestamp", VAR_7, VAR_10->typmodout);
   else
    VAR_13 = FUNC_11("timestamp with time zone");
   break;

  case 129:
   if (VAR_14)
    VAR_13 = FUNC_9("bit varying", VAR_7, VAR_10->typmodout);
   else
    VAR_13 = FUNC_11("bit varying");
   break;

  case 128:
   if (VAR_14)
    VAR_13 = FUNC_9("character varying", VAR_7, VAR_10->typmodout);
   else
    VAR_13 = FUNC_11("character varying");
   break;
 }

 if (VAR_13 == ((void*)0))
 {






  char *VAR_15;
  char *VAR_16;

  if ((VAR_8 & VAR_2) == 0 &&
   FUNC_6(VAR_6))
   VAR_15 = ((void*)0);
  else
   VAR_15 = FUNC_8(VAR_10->typnamespace);

  VAR_16 = FUNC_2(VAR_10->typname);

  VAR_13 = FUNC_12(VAR_15, VAR_16);

  if (VAR_14)
   VAR_13 = FUNC_9(VAR_13, VAR_7, VAR_10->typmodout);
 }

 if (VAR_12)
  VAR_13 = FUNC_10("%s[]", VAR_13);

 FUNC_4(VAR_9);

 return VAR_13;
}
