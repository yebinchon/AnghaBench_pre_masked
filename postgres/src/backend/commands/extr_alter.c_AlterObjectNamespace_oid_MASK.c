
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ objectSubId; void* objectId; void* classId; } ;
typedef int Relation ;
typedef void* Oid ;
typedef int ObjectAddresses ;
typedef TYPE_1__ ObjectAddress ;


 int VAR_0 ;
 void* FUNC_0 (int ,void*,void*) ;
 int FUNC_1 (int ,void*,void*,int *) ;
 void* FUNC_2 (void*,void*,int *) ;
 void* VAR_1 ;
 int VAR_2 ;
 void* FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (void*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (void*,int ) ;

Oid
FUNC_9(Oid VAR_4, Oid VAR_5, Oid VAR_6,
       ObjectAddresses *VAR_7)
{
 Oid VAR_8 = VAR_1;
 ObjectAddress VAR_9;

 VAR_9.classId = VAR_4;
 VAR_9.objectId = VAR_5;
 VAR_9.objectSubId = 0;

 switch (FUNC_4(&VAR_9))
 {
  case 161:
   {
    Relation VAR_10;

    VAR_10 = FUNC_6(VAR_5, VAR_0);
    VAR_8 = FUNC_3(VAR_10);

    FUNC_1(VAR_10, VAR_8, VAR_6, VAR_7);

    FUNC_5(VAR_10, VAR_2);
    break;
   }

  case 129:
   VAR_8 = FUNC_2(VAR_5, VAR_6, VAR_7);
   break;

  case 144:
  case 160:
  case 158:
  case 147:
  case 148:
  case 146:
  case 138:
  case 131:
  case 132:
  case 130:
  case 133:
   {
    Relation VAR_11;

    VAR_11 = FUNC_8(VAR_4, VAR_3);

    VAR_8 = FUNC_0(VAR_11, VAR_5,
                VAR_6);

    FUNC_7(VAR_11, VAR_3);
   }
   break;

  case 162:
  case 159:
  case 155:
  case 150:
  case 149:
  case 165:
  case 164:
  case 163:
  case 141:
  case 134:
  case 139:
  case 140:
  case 157:
  case 136:
  case 152:
  case 151:
  case 128:
  case 156:
  case 153:
  case 154:
  case 145:
  case 143:
  case 142:
  case 137:
  case 135:

   break;





 }

 return VAR_8;
}
