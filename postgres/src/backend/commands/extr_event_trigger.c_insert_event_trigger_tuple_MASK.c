
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int nulls ;
struct TYPE_11__ {scalar_t__ objectSubId; void* objectId; int classId; } ;
struct TYPE_10__ {int rd_att; } ;
typedef TYPE_1__* Relation ;
typedef void* Oid ;
typedef TYPE_2__ ObjectAddress ;
typedef int NameData ;
typedef int List ;
typedef int HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int ,void*,int ) ;
 int * VAR_10 ;
 int FUNC_4 (int *) ;
 int VAR_11 ;
 int FUNC_5 (void*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,int*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int*,int,int) ;
 int FUNC_10 (int *,char const*) ;
 int FUNC_11 (TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_12 (TYPE_2__*,int) ;
 int FUNC_13 (int ,void*,void*) ;
 int FUNC_14 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_15 (int ,int ) ;

__attribute__((used)) static Oid
FUNC_16(const char *VAR_15, const char *VAR_16, Oid VAR_17,
         Oid VAR_18, List *VAR_19)
{
 Relation VAR_20;
 Oid VAR_21;
 HeapTuple VAR_22;
 Datum VAR_23[VAR_11];
 bool VAR_24[VAR_11];
 NameData VAR_25,
    VAR_26;
 ObjectAddress VAR_27,
    VAR_28;


 VAR_20 = FUNC_15(VAR_9, VAR_13);


 VAR_21 = FUNC_2(VAR_20, VAR_8,
         VAR_6);
 VAR_23[VAR_6 - 1] = FUNC_5(VAR_21);
 FUNC_9(VAR_24, 0, sizeof(VAR_24));
 FUNC_10(&VAR_25, VAR_15);
 VAR_23[VAR_3 - 1] = FUNC_4(&VAR_25);
 FUNC_10(&VAR_26, VAR_16);
 VAR_23[VAR_1 - 1] = FUNC_4(&VAR_26);
 VAR_23[VAR_4 - 1] = FUNC_5(VAR_17);
 VAR_23[VAR_2 - 1] = FUNC_5(VAR_18);
 VAR_23[VAR_0 - 1] =
  FUNC_1(VAR_14);
 if (VAR_19 == VAR_10)
  VAR_24[VAR_5 - 1] = 1;
 else
  VAR_23[VAR_5 - 1] =
   FUNC_6(VAR_19);


 VAR_22 = FUNC_7(VAR_20->rd_att, VAR_23, VAR_24);
 FUNC_0(VAR_20, VAR_22);
 FUNC_8(VAR_22);


 FUNC_13(VAR_9, VAR_21, VAR_17);


 VAR_27.classId = VAR_9;
 VAR_27.objectId = VAR_21;
 VAR_27.objectSubId = 0;
 VAR_28.classId = VAR_12;
 VAR_28.objectId = VAR_18;
 VAR_28.objectSubId = 0;
 FUNC_11(&VAR_27, &VAR_28, VAR_7);


 FUNC_12(&VAR_27, 0);


 FUNC_3(VAR_9, VAR_21, 0);


 FUNC_14(VAR_20, VAR_13);

 return VAR_21;
}
