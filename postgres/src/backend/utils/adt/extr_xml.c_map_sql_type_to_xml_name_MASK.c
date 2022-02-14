
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int typname; int typnamespace; int typtype; } ;
struct TYPE_6__ {char const* data; } ;
typedef TYPE_1__ StringInfoData ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_type ;





 int VAR_0 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;



 int VAR_1 ;

 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;




 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 int FUNC_6 (TYPE_1__*,char*,int,...) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*) ;
 char* FUNC_12 (char*,int ,int ,int ) ;

__attribute__((used)) static const char *
FUNC_13(Oid VAR_5, int VAR_6)
{
 StringInfoData VAR_7;

 FUNC_11(&VAR_7);

 switch (VAR_5)
 {
  case 141:
   if (VAR_6 == -1)
    FUNC_7(&VAR_7, "CHAR");
   else
    FUNC_6(&VAR_7, "CHAR_%d", VAR_6 - VAR_4);
   break;
  case 129:
   if (VAR_6 == -1)
    FUNC_7(&VAR_7, "VARCHAR");
   else
    FUNC_6(&VAR_7, "VARCHAR_%d", VAR_6 - VAR_4);
   break;
  case 134:
   if (VAR_6 == -1)
    FUNC_7(&VAR_7, "NUMERIC");
   else
    FUNC_6(&VAR_7, "NUMERIC_%d_%d",
         ((VAR_6 - VAR_4) >> 16) & 0xffff,
         (VAR_6 - VAR_4) & 0xffff);
   break;
  case 136:
   FUNC_7(&VAR_7, "INTEGER");
   break;
  case 137:
   FUNC_7(&VAR_7, "SMALLINT");
   break;
  case 135:
   FUNC_7(&VAR_7, "BIGINT");
   break;
  case 139:
   FUNC_7(&VAR_7, "REAL");
   break;
  case 138:
   FUNC_7(&VAR_7, "DOUBLE");
   break;
  case 142:
   FUNC_7(&VAR_7, "BOOLEAN");
   break;
  case 133:
   if (VAR_6 == -1)
    FUNC_7(&VAR_7, "TIME");
   else
    FUNC_6(&VAR_7, "TIME_%d", VAR_6);
   break;
  case 130:
   if (VAR_6 == -1)
    FUNC_7(&VAR_7, "TIME_WTZ");
   else
    FUNC_6(&VAR_7, "TIME_WTZ_%d", VAR_6);
   break;
  case 132:
   if (VAR_6 == -1)
    FUNC_7(&VAR_7, "TIMESTAMP");
   else
    FUNC_6(&VAR_7, "TIMESTAMP_%d", VAR_6);
   break;
  case 131:
   if (VAR_6 == -1)
    FUNC_7(&VAR_7, "TIMESTAMP_WTZ");
   else
    FUNC_6(&VAR_7, "TIMESTAMP_WTZ_%d", VAR_6);
   break;
  case 140:
   FUNC_7(&VAR_7, "DATE");
   break;
  case 128:
   FUNC_7(&VAR_7, "XML");
   break;
  default:
   {
    HeapTuple VAR_8;
    Form_pg_type VAR_9;

    VAR_8 = FUNC_5(VAR_2, FUNC_3(VAR_5));
    if (!FUNC_1(VAR_8))
     FUNC_8(VAR_0, "cache lookup failed for type %u", VAR_5);
    VAR_9 = (Form_pg_type) FUNC_0(VAR_8);

    FUNC_7(&VAR_7,
            FUNC_12((VAR_9->typtype == VAR_3) ? "Domain" : "UDT",
                    FUNC_9(VAR_1),
                    FUNC_10(VAR_9->typnamespace),
                    FUNC_2(VAR_9->typname)));

    FUNC_4(VAR_8);
   }
 }

 return VAR_7.data;
}
