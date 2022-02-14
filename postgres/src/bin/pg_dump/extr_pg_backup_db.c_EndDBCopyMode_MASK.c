
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pgCopyIn; int connection; } ;
typedef int PGresult ;
typedef TYPE_1__ ArchiveHandle ;
typedef int Archive ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (TYPE_1__*,char*,char const*,int ) ;

void
FUNC_8(Archive *VAR_1, const char *VAR_2)
{
 ArchiveHandle *VAR_3 = (ArchiveHandle *) VAR_1;

 if (VAR_3->pgCopyIn)
 {
  PGresult *VAR_4;

  if (FUNC_3(VAR_3->connection, ((void*)0)) <= 0)
   FUNC_5("error returned by PQputCopyEnd: %s",
      FUNC_1(VAR_3->connection));


  VAR_4 = FUNC_2(VAR_3->connection);
  if (FUNC_4(VAR_4) != VAR_0)
   FUNC_7(VAR_3, "COPY failed for table \"%s\": %s",
          VAR_2, FUNC_1(VAR_3->connection));
  FUNC_0(VAR_4);


  if (FUNC_2(VAR_3->connection) != ((void*)0))
   FUNC_6("unexpected extra results during COPY of table \"%s\"",
         VAR_2);

  VAR_3->pgCopyIn = 0;
 }
}
