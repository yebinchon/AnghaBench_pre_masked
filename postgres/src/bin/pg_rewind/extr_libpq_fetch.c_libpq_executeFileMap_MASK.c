
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int narray; TYPE_2__** array; } ;
typedef TYPE_1__ filemap_t ;
struct TYPE_7__ {int action; int newsize; int oldsize; int path; int pagemap; } ;
typedef TYPE_2__ file_entry_t ;
typedef int PGresult ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,char const*) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_2 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (char const*) ;
 int FUNC_15 (int ,int ) ;

void
FUNC_16(filemap_t *VAR_3)
{
 file_entry_t *VAR_4;
 const char *VAR_5;
 PGresult *VAR_6;
 int VAR_7;





 VAR_5 = "CREATE TEMPORARY TABLE fetchchunks(path text, begin int8, len int4);";
 FUNC_14(VAR_5);

 VAR_5 = "COPY fetchchunks FROM STDIN";
 VAR_6 = FUNC_2(VAR_2, VAR_5);

 if (FUNC_6(VAR_6) != VAR_1)
  FUNC_11("could not send file list: %s",
     FUNC_5(VAR_6));
 FUNC_0(VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_3->narray; VAR_7++)
 {
  VAR_4 = VAR_3->array[VAR_7];


  FUNC_8(&VAR_4->pagemap, VAR_4->path);

  switch (VAR_4->action)
  {
   case 130:

    break;

   case 133:

    FUNC_10(VAR_4->path, 1);
    FUNC_9(VAR_4->path, 0, VAR_4->newsize);
    break;

   case 128:
    FUNC_15(VAR_4->path, VAR_4->newsize);
    break;

   case 132:
    FUNC_9(VAR_4->path, VAR_4->oldsize, VAR_4->newsize);
    break;

   case 129:
    FUNC_13(VAR_4);
    break;

   case 131:
    FUNC_7(VAR_4);
    break;
  }
 }

 if (FUNC_4(VAR_2, ((void*)0)) != 1)
  FUNC_11("could not send end-of-COPY: %s",
     FUNC_1(VAR_2));

 while ((VAR_6 = FUNC_3(VAR_2)) != ((void*)0))
 {
  if (FUNC_6(VAR_6) != VAR_0)
   FUNC_11("unexpected result while sending file list: %s",
      FUNC_5(VAR_6));
  FUNC_0(VAR_6);
 }





 VAR_5 =
  "SELECT path, begin,\n"
  "  pg_read_binary_file(path, begin, len, true) AS chunk\n"
  "FROM fetchchunks\n";

 FUNC_12(VAR_5);
}
