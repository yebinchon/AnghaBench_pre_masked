
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_12__ {int n_members; TYPE_1__** members; } ;
struct TYPE_11__ {scalar_t__ attnum; scalar_t__ attisdropped; } ;
struct TYPE_10__ {scalar_t__ objectSubId; void* objectId; void* classId; } ;
struct TYPE_9__ {int tuple; } ;
typedef void* Oid ;
typedef TYPE_2__ ObjectAddress ;
typedef int * HeapTuple ;
typedef TYPE_3__* Form_pg_attribute ;
typedef TYPE_4__ CatCList ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 void* VAR_1 ;
 int FUNC_1 (void*) ;
 void* VAR_2 ;





 void* VAR_3 ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_4__* FUNC_3 (int ,int ) ;
 char* FUNC_4 (TYPE_2__*) ;
 void* FUNC_5 (void*) ;
 char FUNC_6 (void*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_2__*,int ,int ,char*,int) ;
 int FUNC_9 (void*) ;

void
FUNC_10(Oid VAR_12)
{
 ObjectAddress VAR_13;
 char *VAR_14;
 uint16_t VAR_15 = 0;
 char VAR_16 = FUNC_6(VAR_12);

 switch (VAR_16)
 {
  case 130:
  case 131:
   VAR_15 = VAR_7;
   break;
  case 129:
   VAR_15 = VAR_6;
   break;
  case 128:
   VAR_15 = VAR_8;
   break;
  case 132:

   if (FUNC_5(VAR_12) == VAR_2)
    return;

   break;
  default:

   return;
 }




 VAR_13.classId = VAR_1;
 VAR_13.objectId = FUNC_5(VAR_12);
 VAR_13.objectSubId = 0;
 VAR_14 = FUNC_4(&VAR_13);

 FUNC_8(&VAR_13,
       VAR_5,
       VAR_10,
       VAR_14,
       1);
 FUNC_7(VAR_14);


 if (VAR_16 == 132)
 {
  FUNC_9(VAR_12);
  return;
 }




 VAR_13.classId = VAR_3;
 VAR_13.objectId = VAR_12;
 VAR_13.objectSubId = 0;
 VAR_14 = FUNC_4(&VAR_13);

 FUNC_8(&VAR_13,
       VAR_15,
       VAR_11,
       VAR_14,
       1);
 FUNC_7(VAR_14);




 if (VAR_16 == 130 || VAR_16 == 131)
 {
  Form_pg_attribute VAR_17;
  CatCList *VAR_18;
  HeapTuple VAR_19;
  int VAR_20;

  VAR_18 = FUNC_3(VAR_0, FUNC_1(VAR_12));
  for (VAR_20 = 0; VAR_20 < VAR_18->n_members; VAR_20++)
  {
   VAR_19 = &VAR_18->members[VAR_20]->tuple;
   VAR_17 = (Form_pg_attribute) FUNC_0(VAR_19);

   if (VAR_17->attisdropped)
    continue;

   VAR_13.classId = VAR_3;
   VAR_13.objectId = VAR_12;
   VAR_13.objectSubId = VAR_17->attnum;
   VAR_14 = FUNC_4(&VAR_13);

   FUNC_8(&VAR_13,
         VAR_4,
         VAR_9,
         VAR_14,
         1);
   FUNC_7(VAR_14);
  }
  FUNC_2(VAR_18);
 }
}
