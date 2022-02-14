
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_9__ {scalar_t__ objectSubId; int objectId; int classId; } ;
struct TYPE_8__ {int rd_att; } ;
typedef TYPE_1__* Relation ;
typedef int Oid ;
typedef TYPE_2__ ObjectAddress ;
typedef int NameData ;
typedef int HeapTuple ;
typedef scalar_t__ Datum ;
typedef char const Acl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (char const*) ;
 int VAR_12 ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,char const*) ;
 char* FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ,scalar_t__*,int*) ;
 int FUNC_15 (int *,char const*) ;
 int FUNC_16 (TYPE_2__*,int) ;
 int FUNC_17 (int ,int ,int ,int ,char const*) ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_20 (int ,int ) ;

Oid
FUNC_21(const char *VAR_13, Oid VAR_14, bool VAR_15)
{
 Relation VAR_16;
 HeapTuple VAR_17;
 Oid VAR_18;
 bool VAR_19[VAR_10];
 Datum VAR_20[VAR_10];
 NameData VAR_21;
 TupleDesc VAR_22;
 ObjectAddress VAR_23;
 int VAR_24;
 Acl *VAR_25;


 if (!VAR_13)
  FUNC_9(VAR_5, "no namespace name supplied");


 if (FUNC_8(VAR_7, FUNC_7(VAR_13)))
  FUNC_10(VAR_5,
    (FUNC_11(VAR_4),
     FUNC_12("schema \"%s\" already exists", VAR_13)));

 if (!VAR_15)
  VAR_25 = FUNC_13(VAR_11, VAR_14,
           VAR_6);
 else
  VAR_25 = ((void*)0);

 VAR_16 = FUNC_20(VAR_9, VAR_12);
 VAR_22 = VAR_16->rd_att;


 for (VAR_24 = 0; VAR_24 < VAR_10; VAR_24++)
 {
  VAR_19[VAR_24] = 0;
  VAR_20[VAR_24] = (Datum) ((void*)0);
 }

 VAR_18 = FUNC_2(VAR_16, VAR_8,
        VAR_3);
 VAR_20[VAR_3 - 1] = FUNC_5(VAR_18);
 FUNC_15(&VAR_21, VAR_13);
 VAR_20[VAR_1 - 1] = FUNC_4(&VAR_21);
 VAR_20[VAR_2 - 1] = FUNC_5(VAR_14);
 if (VAR_25 != ((void*)0))
  VAR_20[VAR_0 - 1] = FUNC_7(VAR_25);
 else
  VAR_19[VAR_0 - 1] = 1;


 VAR_17 = FUNC_14(VAR_22, VAR_20, VAR_19);

 FUNC_1(VAR_16, VAR_17);
 FUNC_0(FUNC_6(VAR_18));

 FUNC_19(VAR_16, VAR_12);


 VAR_23.classId = VAR_9;
 VAR_23.objectId = VAR_18;
 VAR_23.objectSubId = 0;


 FUNC_18(VAR_9, VAR_18, VAR_14);


 FUNC_17(VAR_9, VAR_18, 0, VAR_14, VAR_25);


 if (!VAR_15)
  FUNC_16(&VAR_23, 0);


 FUNC_3(VAR_9, VAR_18, 0);

 return VAR_18;
}
