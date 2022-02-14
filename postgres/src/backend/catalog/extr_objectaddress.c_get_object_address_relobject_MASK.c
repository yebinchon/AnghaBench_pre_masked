
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* objectId; int objectSubId; int classId; } ;
typedef int * Relation ;
typedef void* Oid ;
typedef int ObjectType ;
typedef TYPE_1__ ObjectAddress ;
typedef int List ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;




 int FUNC_0 (void*) ;
 int VAR_5 ;
 void* FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 void* FUNC_6 (void*,char const*,int) ;
 void* FUNC_7 (void*,char const*,int) ;
 void* FUNC_8 (void*,char const*,int) ;
 void* FUNC_9 (void*,char const*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int ,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 char* FUNC_15 (int ) ;
 int FUNC_16 (int *,int ) ;
 int * FUNC_17 (int ,int ,int) ;

__attribute__((used)) static ObjectAddress
FUNC_18(ObjectType VAR_8, List *VAR_9,
        Relation *VAR_10, bool VAR_11)
{
 ObjectAddress VAR_12;
 Relation VAR_13 = ((void*)0);
 int VAR_14;
 const char *VAR_15;
 List *VAR_16;
 Oid VAR_17;


 VAR_15 = FUNC_15(FUNC_13(VAR_9));


 VAR_14 = FUNC_11(VAR_9);
 if (VAR_14 < 2)
  FUNC_3(VAR_3,
    (FUNC_4(VAR_2),
     FUNC_5("must specify relation and object name")));


 VAR_16 = FUNC_12(FUNC_10(VAR_9), VAR_14 - 1);
 VAR_13 = FUNC_17(FUNC_14(VAR_16),
          VAR_0,
          VAR_11);

 VAR_17 = VAR_13 ? FUNC_1(VAR_13) : VAR_4;

 switch (VAR_8)
 {
  case 130:
   VAR_12.classId = VAR_6;
   VAR_12.objectId = VAR_13 ?
    FUNC_8(VAR_17, VAR_15, VAR_11) : VAR_4;
   VAR_12.objectSubId = 0;
   break;
  case 128:
   VAR_12.classId = VAR_7;
   VAR_12.objectId = VAR_13 ?
    FUNC_9(VAR_17, VAR_15, VAR_11) : VAR_4;
   VAR_12.objectSubId = 0;
   break;
  case 129:
   VAR_12.classId = VAR_1;
   VAR_12.objectId = VAR_13 ?
    FUNC_6(VAR_17, VAR_15, VAR_11) :
    VAR_4;
   VAR_12.objectSubId = 0;
   break;
  case 131:
   VAR_12.classId = VAR_5;
   VAR_12.objectId = VAR_13 ?
    FUNC_7(VAR_17, VAR_15, VAR_11) :
    VAR_4;
   VAR_12.objectSubId = 0;
   break;
  default:
   FUNC_2(VAR_3, "unrecognized objtype: %d", (int) VAR_8);
 }


 if (!FUNC_0(VAR_12.objectId))
 {
  if (VAR_13 != ((void*)0))
   FUNC_16(VAR_13, VAR_0);

  VAR_13 = ((void*)0);
  return VAR_12;
 }


 *VAR_10 = VAR_13;
 return VAR_12;
}
