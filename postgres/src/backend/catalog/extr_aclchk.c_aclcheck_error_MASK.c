
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ObjectType ;
typedef int AclResult ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*,char const*) ;
 char* FUNC_4 (char*) ;

void
FUNC_5(AclResult VAR_2, ObjectType VAR_3,
      const char *VAR_4)
{
 switch (VAR_2)
 {
  case 178:

   break;
  case 179:
   {
    const char *VAR_5 = "???";

    switch (VAR_3)
    {
     case 176:
      VAR_5 = FUNC_4("permission denied for aggregate %s");
      break;
     case 171:
      VAR_5 = FUNC_4("permission denied for collation %s");
      break;
     case 170:
      VAR_5 = FUNC_4("permission denied for column %s");
      break;
     case 169:
      VAR_5 = FUNC_4("permission denied for conversion %s");
      break;
     case 168:
      VAR_5 = FUNC_4("permission denied for database %s");
      break;
     case 165:
      VAR_5 = FUNC_4("permission denied for domain %s");
      break;
     case 163:
      VAR_5 = FUNC_4("permission denied for event trigger %s");
      break;
     case 162:
      VAR_5 = FUNC_4("permission denied for extension %s");
      break;
     case 161:
      VAR_5 = FUNC_4("permission denied for foreign-data wrapper %s");
      break;
     case 160:
      VAR_5 = FUNC_4("permission denied for foreign server %s");
      break;
     case 159:
      VAR_5 = FUNC_4("permission denied for foreign table %s");
      break;
     case 158:
      VAR_5 = FUNC_4("permission denied for function %s");
      break;
     case 157:
      VAR_5 = FUNC_4("permission denied for index %s");
      break;
     case 156:
      VAR_5 = FUNC_4("permission denied for language %s");
      break;
     case 155:
      VAR_5 = FUNC_4("permission denied for large object %s");
      break;
     case 154:
      VAR_5 = FUNC_4("permission denied for materialized view %s");
      break;
     case 153:
      VAR_5 = FUNC_4("permission denied for operator class %s");
      break;
     case 152:
      VAR_5 = FUNC_4("permission denied for operator %s");
      break;
     case 151:
      VAR_5 = FUNC_4("permission denied for operator family %s");
      break;
     case 150:
      VAR_5 = FUNC_4("permission denied for policy %s");
      break;
     case 149:
      VAR_5 = FUNC_4("permission denied for procedure %s");
      break;
     case 148:
      VAR_5 = FUNC_4("permission denied for publication %s");
      break;
     case 145:
      VAR_5 = FUNC_4("permission denied for routine %s");
      break;
     case 143:
      VAR_5 = FUNC_4("permission denied for schema %s");
      break;
     case 142:
      VAR_5 = FUNC_4("permission denied for sequence %s");
      break;
     case 141:
      VAR_5 = FUNC_4("permission denied for statistics object %s");
      break;
     case 140:
      VAR_5 = FUNC_4("permission denied for subscription %s");
      break;
     case 138:
      VAR_5 = FUNC_4("permission denied for table %s");
      break;
     case 137:
      VAR_5 = FUNC_4("permission denied for tablespace %s");
      break;
     case 134:
      VAR_5 = FUNC_4("permission denied for text search configuration %s");
      break;
     case 133:
      VAR_5 = FUNC_4("permission denied for text search dictionary %s");
      break;
     case 130:
      VAR_5 = FUNC_4("permission denied for type %s");
      break;
     case 128:
      VAR_5 = FUNC_4("permission denied for view %s");
      break;

     case 177:
     case 175:
     case 174:
     case 173:
     case 172:
     case 166:
     case 167:
     case 164:
     case 147:
     case 146:
     case 144:
     case 139:
     case 136:
     case 135:
     case 132:
     case 131:
     case 129:
      FUNC_0(VAR_1, "unsupported object type %d", VAR_3);
    }

    FUNC_1(VAR_1,
      (FUNC_2(VAR_0),
       FUNC_3(VAR_5, VAR_4)));
    break;
   }
  case 180:
   {
    const char *VAR_6 = "???";

    switch (VAR_3)
    {
     case 176:
      VAR_6 = FUNC_4("must be owner of aggregate %s");
      break;
     case 171:
      VAR_6 = FUNC_4("must be owner of collation %s");
      break;
     case 169:
      VAR_6 = FUNC_4("must be owner of conversion %s");
      break;
     case 168:
      VAR_6 = FUNC_4("must be owner of database %s");
      break;
     case 165:
      VAR_6 = FUNC_4("must be owner of domain %s");
      break;
     case 163:
      VAR_6 = FUNC_4("must be owner of event trigger %s");
      break;
     case 162:
      VAR_6 = FUNC_4("must be owner of extension %s");
      break;
     case 161:
      VAR_6 = FUNC_4("must be owner of foreign-data wrapper %s");
      break;
     case 160:
      VAR_6 = FUNC_4("must be owner of foreign server %s");
      break;
     case 159:
      VAR_6 = FUNC_4("must be owner of foreign table %s");
      break;
     case 158:
      VAR_6 = FUNC_4("must be owner of function %s");
      break;
     case 157:
      VAR_6 = FUNC_4("must be owner of index %s");
      break;
     case 156:
      VAR_6 = FUNC_4("must be owner of language %s");
      break;
     case 155:
      VAR_6 = FUNC_4("must be owner of large object %s");
      break;
     case 154:
      VAR_6 = FUNC_4("must be owner of materialized view %s");
      break;
     case 153:
      VAR_6 = FUNC_4("must be owner of operator class %s");
      break;
     case 152:
      VAR_6 = FUNC_4("must be owner of operator %s");
      break;
     case 151:
      VAR_6 = FUNC_4("must be owner of operator family %s");
      break;
     case 149:
      VAR_6 = FUNC_4("must be owner of procedure %s");
      break;
     case 148:
      VAR_6 = FUNC_4("must be owner of publication %s");
      break;
     case 145:
      VAR_6 = FUNC_4("must be owner of routine %s");
      break;
     case 142:
      VAR_6 = FUNC_4("must be owner of sequence %s");
      break;
     case 140:
      VAR_6 = FUNC_4("must be owner of subscription %s");
      break;
     case 138:
      VAR_6 = FUNC_4("must be owner of table %s");
      break;
     case 130:
      VAR_6 = FUNC_4("must be owner of type %s");
      break;
     case 128:
      VAR_6 = FUNC_4("must be owner of view %s");
      break;
     case 143:
      VAR_6 = FUNC_4("must be owner of schema %s");
      break;
     case 141:
      VAR_6 = FUNC_4("must be owner of statistics object %s");
      break;
     case 137:
      VAR_6 = FUNC_4("must be owner of tablespace %s");
      break;
     case 134:
      VAR_6 = FUNC_4("must be owner of text search configuration %s");
      break;
     case 133:
      VAR_6 = FUNC_4("must be owner of text search dictionary %s");
      break;







     case 170:
     case 150:
     case 144:
     case 139:
     case 135:
      VAR_6 = FUNC_4("must be owner of relation %s");
      break;

     case 177:
     case 175:
     case 174:
     case 173:
     case 172:
     case 166:
     case 167:
     case 164:
     case 147:
     case 146:
     case 136:
     case 132:
     case 131:
     case 129:
      FUNC_0(VAR_1, "unsupported object type %d", VAR_3);
    }

    FUNC_1(VAR_1,
      (FUNC_2(VAR_0),
       FUNC_3(VAR_6, VAR_4)));
    break;
   }
  default:
   FUNC_0(VAR_1, "unrecognized AclResult: %d", (int) VAR_2);
   break;
 }
}
