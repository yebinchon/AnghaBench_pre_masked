
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_22__ {scalar_t__* attgenerated; scalar_t__ needs_override; scalar_t__ ispartition; } ;
typedef TYPE_1__ TableInfo ;
struct TYPE_23__ {scalar_t__ filtercond; TYPE_1__* tdtable; } ;
typedef TYPE_2__ TableDataInfo ;
struct TYPE_26__ {TYPE_4__* dopt; } ;
struct TYPE_25__ {int dump_inserts; scalar_t__ do_nothing; scalar_t__ column_inserts; scalar_t__ load_via_partition_root; } ;
struct TYPE_24__ {char* data; } ;
typedef TYPE_3__* PQExpBuffer ;
typedef int PGresult ;
typedef TYPE_4__ DumpOptions ;
typedef TYPE_5__ Archive ;




 int * FUNC_0 (TYPE_5__*,char*,int ) ;
 int FUNC_1 (TYPE_5__*,char*) ;







 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int,int) ;
 char const* FUNC_6 (int *,int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

 int FUNC_9 (TYPE_3__*,char*,scalar_t__) ;
 int FUNC_10 (TYPE_3__*,char) ;
 int FUNC_11 (TYPE_3__*,char*) ;
 int FUNC_12 (TYPE_3__*,char const*,TYPE_5__*) ;
 int FUNC_13 (TYPE_5__*,char*,char const*) ;
 int FUNC_14 (char const*,TYPE_5__*) ;
 TYPE_3__* FUNC_15 () ;
 int FUNC_16 (TYPE_3__*) ;
 char* FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (TYPE_1__*) ;
 TYPE_1__* FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (char const*,char*) ;
 int FUNC_22 (char const*) ;
 int FUNC_23 (char const*,char*) ;

__attribute__((used)) static int
FUNC_24(Archive *VAR_1, void *VAR_2)
{
 TableDataInfo *VAR_3 = (TableDataInfo *) VAR_2;
 TableInfo *VAR_4 = VAR_3->tdtable;
 DumpOptions *VAR_5 = VAR_1->dopt;
 PQExpBuffer VAR_6 = FUNC_15();
 PQExpBuffer VAR_7 = ((void*)0);
 PGresult *VAR_8;
 int VAR_9;
 int VAR_10 = VAR_5->dump_inserts;
 int VAR_11 = 0;

 FUNC_9(VAR_6, "DECLARE _pg_dump_cursor CURSOR FOR "
       "SELECT * FROM ONLY %s",
       FUNC_18(VAR_4));
 if (VAR_3->filtercond)
  FUNC_9(VAR_6, " %s", VAR_3->filtercond);

 FUNC_1(VAR_1, VAR_6->data);

 while (1)
 {
  VAR_8 = FUNC_0(VAR_1, "FETCH 100 FROM _pg_dump_cursor",
         VAR_0);
  VAR_9 = FUNC_7(VAR_8);
  if (VAR_7 == ((void*)0))
  {
   TableInfo *VAR_12;

   VAR_7 = FUNC_15();






   if (VAR_5->load_via_partition_root && VAR_4->ispartition)
    VAR_12 = FUNC_19(VAR_4);
   else
    VAR_12 = VAR_4;

   FUNC_9(VAR_7, "INSERT INTO %s ",
         FUNC_18(VAR_12));


   if (VAR_9 == 0)
   {
    FUNC_11(VAR_7, "DEFAULT VALUES;\n");
   }
   else
   {

    if (VAR_5->column_inserts)
    {
     FUNC_10(VAR_7, '(');
     for (int VAR_13 = 0; VAR_13 < VAR_9; VAR_13++)
     {
      if (VAR_13 > 0)
       FUNC_11(VAR_7, ", ");
      FUNC_11(VAR_7,
            FUNC_17(FUNC_3(VAR_8, VAR_13)));
     }
     FUNC_11(VAR_7, ") ");
    }

    if (VAR_4->needs_override)
     FUNC_11(VAR_7, "OVERRIDING SYSTEM VALUE ");

    FUNC_11(VAR_7, "VALUES");
   }
  }

  for (int VAR_14 = 0; VAR_14 < FUNC_8(VAR_8); VAR_14++)
  {

   if (VAR_11 == 0)
    FUNC_14(VAR_7->data, VAR_1);
   if (VAR_9 == 0)
    continue;


   if (VAR_10 == 1)
    FUNC_14(" (", VAR_1);
   else if (VAR_11 > 0)
    FUNC_14(",\n\t(", VAR_1);
   else
    FUNC_14("\n\t(", VAR_1);

   for (int VAR_15 = 0; VAR_15 < VAR_9; VAR_15++)
   {
    if (VAR_15 > 0)
     FUNC_14(", ", VAR_1);
    if (VAR_4->attgenerated[VAR_15])
    {
     FUNC_14("DEFAULT", VAR_1);
     continue;
    }
    if (FUNC_5(VAR_8, VAR_14, VAR_15))
    {
     FUNC_14("NULL", VAR_1);
     continue;
    }


    switch (FUNC_4(VAR_8, VAR_15))
    {
     case 133:
     case 132:
     case 131:
     case 129:
     case 135:
     case 134:
     case 130:
      {
       const char *VAR_16 = FUNC_6(VAR_8, VAR_14, VAR_15);

       if (FUNC_23(VAR_16, "0123456789 +-eE.") == FUNC_22(VAR_16))
        FUNC_14(VAR_16, VAR_1);
       else
        FUNC_13(VAR_1, "'%s'", VAR_16);
      }
      break;

     case 137:
     case 128:
      FUNC_13(VAR_1, "B'%s'",
           FUNC_6(VAR_8, VAR_14, VAR_15));
      break;

     case 136:
      if (FUNC_21(FUNC_6(VAR_8, VAR_14, VAR_15), "t") == 0)
       FUNC_14("true", VAR_1);
      else
       FUNC_14("false", VAR_1);
      break;

     default:

      FUNC_20(VAR_6);
      FUNC_12(VAR_6,
             FUNC_6(VAR_8, VAR_14, VAR_15),
             VAR_1);
      FUNC_14(VAR_6->data, VAR_1);
      break;
    }
   }


   FUNC_14(")", VAR_1);


   if (++VAR_11 >= VAR_10)
   {
    if (VAR_5->do_nothing)
     FUNC_14(" ON CONFLICT DO NOTHING;\n", VAR_1);
    else
     FUNC_14(";\n", VAR_1);

    VAR_11 = 0;
   }
  }

  if (FUNC_8(VAR_8) <= 0)
  {
   FUNC_2(VAR_8);
   break;
  }
  FUNC_2(VAR_8);
 }


 if (VAR_11 > 0)
 {
  if (VAR_5->do_nothing)
   FUNC_14(" ON CONFLICT DO NOTHING;\n", VAR_1);
  else
   FUNC_14(";\n", VAR_1);
 }

 FUNC_14("\n\n", VAR_1);

 FUNC_1(VAR_1, "CLOSE _pg_dump_cursor");

 FUNC_16(VAR_6);
 if (VAR_7 != ((void*)0))
  FUNC_16(VAR_7);

 return 1;
}
