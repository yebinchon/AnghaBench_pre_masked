
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_17__ {int atttypid; int attname; scalar_t__ attisdropped; } ;
struct TYPE_16__ {int relname; int relnamespace; } ;
struct TYPE_15__ {char const* data; } ;
struct TYPE_14__ {int natts; } ;
typedef TYPE_2__ StringInfoData ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_class ;
typedef TYPE_4__* Form_pg_attribute ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 TYPE_4__* FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_2__*,char*,char*,...) ;
 int FUNC_9 (TYPE_2__*,char*) ;
 int FUNC_10 (int ,char*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_1__*) ;
 char* FUNC_15 (char*,int ,int ,int ) ;
 char* FUNC_16 (int ,int,int) ;
 int FUNC_17 (int ,int) ;
 char* FUNC_18 (int ) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_2__*,char const*) ;

__attribute__((used)) static const char *
FUNC_21(TupleDesc VAR_3, Oid VAR_4, bool VAR_5,
         bool VAR_6, const char *VAR_7)
{
 int VAR_8;
 char *VAR_9;
 char *VAR_10;
 char *VAR_11;
 StringInfoData VAR_12;

 FUNC_13(&VAR_12);

 if (FUNC_4(VAR_4))
 {
  HeapTuple VAR_13;
  Form_pg_class VAR_14;

  VAR_13 = FUNC_6(VAR_2, FUNC_3(VAR_4));
  if (!FUNC_1(VAR_13))
   FUNC_10(VAR_0, "cache lookup failed for relation %u", VAR_4);
  VAR_14 = (Form_pg_class) FUNC_0(VAR_13);

  VAR_9 = FUNC_16(FUNC_2(VAR_14->relname),
              1, 0);

  VAR_10 = FUNC_15("TableType",
                 FUNC_11(VAR_1),
                 FUNC_12(VAR_14->relnamespace),
                 FUNC_2(VAR_14->relname));

  VAR_11 = FUNC_15("RowType",
                  FUNC_11(VAR_1),
                  FUNC_12(VAR_14->relnamespace),
                  FUNC_2(VAR_14->relname));

  FUNC_5(VAR_13);
 }
 else
 {
  if (VAR_6)
   VAR_9 = "row";
  else
   VAR_9 = "table";

  VAR_10 = "TableType";
  VAR_11 = "RowType";
 }

 FUNC_20(&VAR_12, VAR_7);

 FUNC_9(&VAR_12,
         FUNC_18(FUNC_14(VAR_3)));

 FUNC_8(&VAR_12,
      "<xsd:complexType name=\"%s\">\n"
      "  <xsd:sequence>\n",
      VAR_11);

 for (VAR_8 = 0; VAR_8 < VAR_3->natts; VAR_8++)
 {
  Form_pg_attribute VAR_15 = FUNC_7(VAR_3, VAR_8);

  if (VAR_15->attisdropped)
   continue;
  FUNC_8(&VAR_12,
       "    <xsd:element name=\"%s\" type=\"%s\"%s></xsd:element>\n",
       FUNC_16(FUNC_2(VAR_15->attname),
              1, 0),
       FUNC_17(VAR_15->atttypid, -1),
       VAR_5 ? " nillable=\"true\"" : " minOccurs=\"0\"");
 }

 FUNC_9(&VAR_12,
         "  </xsd:sequence>\n"
         "</xsd:complexType>\n\n");

 if (!VAR_6)
 {
  FUNC_8(&VAR_12,
       "<xsd:complexType name=\"%s\">\n"
       "  <xsd:sequence>\n"
       "    <xsd:element name=\"row\" type=\"%s\" minOccurs=\"0\" maxOccurs=\"unbounded\"/>\n"
       "  </xsd:sequence>\n"
       "</xsd:complexType>\n\n",
       VAR_10, VAR_11);

  FUNC_8(&VAR_12,
       "<xsd:element name=\"%s\" type=\"%s\"/>\n\n",
       VAR_9, VAR_10);
 }
 else
  FUNC_8(&VAR_12,
       "<xsd:element name=\"%s\" type=\"%s\"/>\n\n",
       VAR_9, VAR_11);

 FUNC_19(&VAR_12);

 return VAR_12.data;
}
