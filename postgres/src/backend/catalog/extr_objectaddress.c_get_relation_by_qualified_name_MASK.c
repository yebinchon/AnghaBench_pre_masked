
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int objectId; scalar_t__ objectSubId; int classId; } ;
struct TYPE_10__ {TYPE_1__* rd_rel; } ;
struct TYPE_9__ {int relkind; } ;
typedef TYPE_2__* Relation ;
typedef int ObjectType ;
typedef TYPE_3__ ObjectAddress ;
typedef int List ;
typedef int LOCKMODE ;


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
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_11 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int *) ;
 TYPE_2__* FUNC_7 (int ,int ,int) ;

__attribute__((used)) static ObjectAddress
FUNC_8(ObjectType VAR_12, List *VAR_13,
          Relation *VAR_14, LOCKMODE VAR_15,
          bool VAR_16)
{
 Relation VAR_17;
 ObjectAddress VAR_18;

 VAR_18.classId = VAR_11;
 VAR_18.objectId = VAR_2;
 VAR_18.objectSubId = 0;

 VAR_17 = FUNC_7(FUNC_6(VAR_13),
          VAR_15, VAR_16);
 if (!VAR_17)
  return VAR_18;

 switch (VAR_12)
 {
  case 132:
   if (VAR_17->rd_rel->relkind != VAR_4 &&
    VAR_17->rd_rel->relkind != VAR_6)
    FUNC_3(VAR_1,
      (FUNC_4(VAR_0),
       FUNC_5("\"%s\" is not an index",
        FUNC_0(VAR_17))));
   break;
  case 130:
   if (VAR_17->rd_rel->relkind != VAR_9)
    FUNC_3(VAR_1,
      (FUNC_4(VAR_0),
       FUNC_5("\"%s\" is not a sequence",
        FUNC_0(VAR_17))));
   break;
  case 129:
   if (VAR_17->rd_rel->relkind != VAR_8 &&
    VAR_17->rd_rel->relkind != VAR_7)
    FUNC_3(VAR_1,
      (FUNC_4(VAR_0),
       FUNC_5("\"%s\" is not a table",
        FUNC_0(VAR_17))));
   break;
  case 128:
   if (VAR_17->rd_rel->relkind != VAR_10)
    FUNC_3(VAR_1,
      (FUNC_4(VAR_0),
       FUNC_5("\"%s\" is not a view",
        FUNC_0(VAR_17))));
   break;
  case 131:
   if (VAR_17->rd_rel->relkind != VAR_5)
    FUNC_3(VAR_1,
      (FUNC_4(VAR_0),
       FUNC_5("\"%s\" is not a materialized view",
        FUNC_0(VAR_17))));
   break;
  case 133:
   if (VAR_17->rd_rel->relkind != VAR_3)
    FUNC_3(VAR_1,
      (FUNC_4(VAR_0),
       FUNC_5("\"%s\" is not a foreign table",
        FUNC_0(VAR_17))));
   break;
  default:
   FUNC_2(VAR_1, "unrecognized objtype: %d", (int) VAR_12);
   break;
 }


 VAR_18.objectId = FUNC_1(VAR_17);
 *VAR_14 = VAR_17;

 return VAR_18;
}
