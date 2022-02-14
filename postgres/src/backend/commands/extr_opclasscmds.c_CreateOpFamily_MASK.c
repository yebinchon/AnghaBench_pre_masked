
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int values ;
typedef int nulls ;
struct TYPE_12__ {scalar_t__ objectSubId; void* objectId; int classId; } ;
struct TYPE_11__ {int rd_att; } ;
typedef TYPE_1__* Relation ;
typedef void* Oid ;
typedef TYPE_2__ ObjectAddress ;
typedef int NameData ;
typedef int HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_2 (TYPE_1__*,int ,int) ;
 void* FUNC_3 () ;
 int FUNC_4 (int ,void*,int ) ;
 int FUNC_5 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (void*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_7 (int ,int,int ,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,char const*,char const*) ;
 int FUNC_11 (int ,int*,int*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int*,int,int) ;
 int FUNC_14 (int *,char const*) ;
 int FUNC_15 (TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_16 (TYPE_2__*,int) ;
 int FUNC_17 (int ,void*,void*) ;
 int FUNC_18 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_19 (int ,int ) ;

__attribute__((used)) static ObjectAddress
FUNC_20(const char *VAR_16, const char *VAR_17, Oid VAR_18, Oid VAR_19)
{
 Oid VAR_20;
 Relation VAR_21;
 HeapTuple VAR_22;
 Datum VAR_23[VAR_11];
 bool VAR_24[VAR_11];
 NameData VAR_25;
 ObjectAddress VAR_26,
    VAR_27;

 VAR_21 = FUNC_19(VAR_13, VAR_15);





 if (FUNC_7(VAR_12,
         FUNC_6(VAR_19),
         FUNC_0(VAR_17),
         FUNC_6(VAR_18)))
  FUNC_8(VAR_9,
    (FUNC_9(VAR_8),
     FUNC_10("operator family \"%s\" for access method \"%s\" already exists",
      VAR_17, VAR_16)));




 FUNC_13(VAR_23, 0, sizeof(VAR_23));
 FUNC_13(VAR_24, 0, sizeof(VAR_24));

 VAR_20 = FUNC_2(VAR_21, VAR_14,
          VAR_1);
 VAR_23[VAR_1 - 1] = FUNC_6(VAR_20);
 VAR_23[VAR_2 - 1] = FUNC_6(VAR_19);
 FUNC_14(&VAR_25, VAR_17);
 VAR_23[VAR_3 - 1] = FUNC_5(&VAR_25);
 VAR_23[VAR_4 - 1] = FUNC_6(VAR_18);
 VAR_23[VAR_5 - 1] = FUNC_6(FUNC_3());

 VAR_22 = FUNC_11(VAR_21->rd_att, VAR_23, VAR_24);

 FUNC_1(VAR_21, VAR_22);

 FUNC_12(VAR_22);




 VAR_26.classId = VAR_13;
 VAR_26.objectId = VAR_20;
 VAR_26.objectSubId = 0;


 VAR_27.classId = VAR_0;
 VAR_27.objectId = VAR_19;
 VAR_27.objectSubId = 0;
 FUNC_15(&VAR_26, &VAR_27, VAR_6);


 VAR_27.classId = VAR_10;
 VAR_27.objectId = VAR_18;
 VAR_27.objectSubId = 0;
 FUNC_15(&VAR_26, &VAR_27, VAR_7);


 FUNC_17(VAR_13, VAR_20, FUNC_3());


 FUNC_16(&VAR_26, 0);


 FUNC_4(VAR_13, VAR_20, 0);

 FUNC_18(VAR_21, VAR_15);

 return VAR_26;
}
