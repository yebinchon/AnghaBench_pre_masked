
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_17__ {int attname; scalar_t__ attisdropped; } ;
struct TYPE_16__ {TYPE_1__* rd_att; } ;
struct TYPE_15__ {char* data; } ;
struct TYPE_14__ {int natts; } ;
typedef TYPE_2__ StringInfoData ;
typedef TYPE_3__* Relation ;
typedef int HeapTuple ;
typedef TYPE_4__* Form_pg_attribute ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int ,TYPE_1__*,int) ;
 TYPE_4__* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_2__*,char*,char*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int*,int,int) ;
 int FUNC_10 (TYPE_3__*,int*,int,char**) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (char*) ;
 char* FUNC_14 (int ) ;
 char* FUNC_15 (char*) ;

__attribute__((used)) static char *
FUNC_16(Relation VAR_2, int *VAR_3, int VAR_4, char **VAR_5, char **VAR_6)
{
 char *VAR_7;
 HeapTuple VAR_8;
 TupleDesc VAR_9;
 int VAR_10;
 StringInfoData VAR_11;
 char *VAR_12;
 int VAR_13;
 int VAR_14;
 bool VAR_15;

 FUNC_11(&VAR_11);


 VAR_7 = FUNC_8(VAR_2);

 VAR_9 = VAR_2->rd_att;
 VAR_10 = VAR_9->natts;

 VAR_8 = FUNC_10(VAR_2, VAR_3, VAR_4, VAR_5);
 if (!VAR_8)
  FUNC_5(VAR_1,
    (FUNC_6(VAR_0),
     FUNC_7("source row not found")));

 FUNC_3(&VAR_11, "UPDATE %s SET ", VAR_7);




 VAR_15 = 0;
 for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++)
 {
  Form_pg_attribute VAR_16 = FUNC_2(VAR_9, VAR_14);

  if (VAR_16->attisdropped)
   continue;

  if (VAR_15)
   FUNC_4(&VAR_11, ", ");

  FUNC_3(&VAR_11, "%s = ",
       FUNC_14(FUNC_0(VAR_16->attname)));

  VAR_13 = FUNC_9(VAR_3, VAR_4, VAR_14);

  if (VAR_13 >= 0)
   VAR_12 = VAR_6[VAR_13] ? FUNC_13(VAR_6[VAR_13]) : ((void*)0);
  else
   VAR_12 = FUNC_1(VAR_8, VAR_9, VAR_14 + 1);

  if (VAR_12 != ((void*)0))
  {
   FUNC_4(&VAR_11, FUNC_15(VAR_12));
   FUNC_12(VAR_12);
  }
  else
   FUNC_4(&VAR_11, "NULL");
  VAR_15 = 1;
 }

 FUNC_4(&VAR_11, " WHERE ");

 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++)
 {
  int VAR_17 = VAR_3[VAR_14];
  Form_pg_attribute VAR_18 = FUNC_2(VAR_9, VAR_17);

  if (VAR_14 > 0)
   FUNC_4(&VAR_11, " AND ");

  FUNC_4(&VAR_11,
          FUNC_14(FUNC_0(VAR_18->attname)));

  VAR_12 = VAR_6[VAR_14];

  if (VAR_12 != ((void*)0))
   FUNC_3(&VAR_11, " = %s", FUNC_15(VAR_12));
  else
   FUNC_4(&VAR_11, " IS NULL");
 }

 return VAR_11.data;
}
