
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Value ;
struct TYPE_3__ {int objectSubId; void* objectId; void* classId; } ;
typedef int ObjectType ;
typedef TYPE_1__ ObjectAddress ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int FUNC_0 (int ,char*,int) ;
 void* FUNC_1 (char const*,int) ;
 void* FUNC_2 (char const*,int) ;
 void* FUNC_3 (char const*,int) ;
 void* FUNC_4 (char const*,int) ;
 void* FUNC_5 (char const*,int) ;
 void* FUNC_6 (char const*,int) ;
 void* FUNC_7 (char const*,int) ;
 void* FUNC_8 (char const*,int) ;
 void* FUNC_9 (char const*,int) ;
 void* FUNC_10 (char const*,int) ;
 void* FUNC_11 (char const*,int) ;
 void* FUNC_12 (char const*,int) ;
 char* FUNC_13 (int *) ;

__attribute__((used)) static ObjectAddress
FUNC_14(ObjectType VAR_14,
          Value *VAR_15, bool VAR_16)
{
 const char *VAR_17;
 ObjectAddress VAR_18;

 VAR_17 = FUNC_13(VAR_15);


 switch (VAR_14)
 {
  case 139:
   VAR_18.classId = VAR_0;
   VAR_18.objectId = FUNC_1(VAR_17, VAR_16);
   VAR_18.objectSubId = 0;
   break;
  case 138:
   VAR_18.classId = VAR_2;
   VAR_18.objectId = FUNC_2(VAR_17, VAR_16);
   VAR_18.objectSubId = 0;
   break;
  case 136:
   VAR_18.classId = VAR_5;
   VAR_18.objectId = FUNC_4(VAR_17, VAR_16);
   VAR_18.objectSubId = 0;
   break;
  case 128:
   VAR_18.classId = VAR_13;
   VAR_18.objectId = FUNC_12(VAR_17, VAR_16);
   VAR_18.objectSubId = 0;
   break;
  case 131:
   VAR_18.classId = VAR_1;
   VAR_18.objectId = FUNC_10(VAR_17, VAR_16);
   VAR_18.objectSubId = 0;
   break;
  case 130:
   VAR_18.classId = VAR_10;
   VAR_18.objectId = FUNC_8(VAR_17, VAR_16);
   VAR_18.objectSubId = 0;
   break;
  case 133:
   VAR_18.classId = VAR_9;
   VAR_18.objectId = FUNC_7(VAR_17, VAR_16);
   VAR_18.objectSubId = 0;
   break;
  case 135:
   VAR_18.classId = VAR_6;
   VAR_18.objectId = FUNC_5(VAR_17, VAR_16);
   VAR_18.objectSubId = 0;
   break;
  case 134:
   VAR_18.classId = VAR_7;
   VAR_18.objectId = FUNC_6(VAR_17, VAR_16);
   VAR_18.objectSubId = 0;
   break;
  case 137:
   VAR_18.classId = VAR_4;
   VAR_18.objectId = FUNC_3(VAR_17, VAR_16);
   VAR_18.objectSubId = 0;
   break;
  case 132:
   VAR_18.classId = VAR_11;
   VAR_18.objectId = FUNC_9(VAR_17, VAR_16);
   VAR_18.objectSubId = 0;
   break;
  case 129:
   VAR_18.classId = VAR_12;
   VAR_18.objectId = FUNC_11(VAR_17, VAR_16);
   VAR_18.objectSubId = 0;
   break;
  default:
   FUNC_0(VAR_3, "unrecognized objtype: %d", (int) VAR_14);

   VAR_18.classId = VAR_8;
   VAR_18.objectId = VAR_8;
   VAR_18.objectSubId = 0;
 }

 return VAR_18;
}
