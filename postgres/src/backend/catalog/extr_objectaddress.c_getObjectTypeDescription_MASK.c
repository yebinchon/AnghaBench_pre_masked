
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int objectId; int objectSubId; } ;
struct TYPE_10__ {char* data; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__ ObjectAddress ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_2__ const*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;

char *
FUNC_6(const ObjectAddress *VAR_0)
{
 StringInfoData VAR_1;

 FUNC_5(&VAR_1);

 switch (FUNC_2(VAR_0))
 {
  case 161:
   FUNC_4(&VAR_1, VAR_0->objectId,
            VAR_0->objectSubId);
   break;

  case 144:
   FUNC_3(&VAR_1, VAR_0->objectId);
   break;

  case 129:
   FUNC_0(&VAR_1, "type");
   break;

  case 162:
   FUNC_0(&VAR_1, "cast");
   break;

  case 160:
   FUNC_0(&VAR_1, "collation");
   break;

  case 159:
   FUNC_1(&VAR_1, VAR_0->objectId);
   break;

  case 158:
   FUNC_0(&VAR_1, "conversion");
   break;

  case 155:
   FUNC_0(&VAR_1, "default value");
   break;

  case 150:
   FUNC_0(&VAR_1, "language");
   break;

  case 149:
   FUNC_0(&VAR_1, "large object");
   break;

  case 147:
   FUNC_0(&VAR_1, "operator");
   break;

  case 148:
   FUNC_0(&VAR_1, "operator class");
   break;

  case 146:
   FUNC_0(&VAR_1, "operator family");
   break;

  case 165:
   FUNC_0(&VAR_1, "access method");
   break;

  case 164:
   FUNC_0(&VAR_1, "operator of access method");
   break;

  case 163:
   FUNC_0(&VAR_1, "function of access method");
   break;

  case 141:
   FUNC_0(&VAR_1, "rule");
   break;

  case 134:
   FUNC_0(&VAR_1, "trigger");
   break;

  case 139:
   FUNC_0(&VAR_1, "schema");
   break;

  case 138:
   FUNC_0(&VAR_1, "statistics object");
   break;

  case 131:
   FUNC_0(&VAR_1, "text search parser");
   break;

  case 132:
   FUNC_0(&VAR_1, "text search dictionary");
   break;

  case 130:
   FUNC_0(&VAR_1, "text search template");
   break;

  case 133:
   FUNC_0(&VAR_1, "text search configuration");
   break;

  case 140:
   FUNC_0(&VAR_1, "role");
   break;

  case 157:
   FUNC_0(&VAR_1, "database");
   break;

  case 136:
   FUNC_0(&VAR_1, "tablespace");
   break;

  case 152:
   FUNC_0(&VAR_1, "foreign-data wrapper");
   break;

  case 151:
   FUNC_0(&VAR_1, "server");
   break;

  case 128:
   FUNC_0(&VAR_1, "user mapping");
   break;

  case 156:
   FUNC_0(&VAR_1, "default acl");
   break;

  case 153:
   FUNC_0(&VAR_1, "extension");
   break;

  case 154:
   FUNC_0(&VAR_1, "event trigger");
   break;

  case 145:
   FUNC_0(&VAR_1, "policy");
   break;

  case 143:
   FUNC_0(&VAR_1, "publication");
   break;

  case 142:
   FUNC_0(&VAR_1, "publication relation");
   break;

  case 137:
   FUNC_0(&VAR_1, "subscription");
   break;

  case 135:
   FUNC_0(&VAR_1, "transform");
   break;





 }

 return VAR_1.data;
}
