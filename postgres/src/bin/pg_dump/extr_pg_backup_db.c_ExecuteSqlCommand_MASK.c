
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pgCopyIn; int * connection; } ;
typedef int PGresult ;
typedef int PGconn ;
typedef TYPE_1__ ArchiveHandle ;






 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,char const*) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*,char*,char const*,int ,char const*) ;

__attribute__((used)) static void
FUNC_6(ArchiveHandle *VAR_1, const char *VAR_2, const char *VAR_3)
{
 PGconn *VAR_4 = VAR_1->connection;
 PGresult *VAR_5;




 VAR_5 = FUNC_2(VAR_4, VAR_2);

 switch (FUNC_3(VAR_5))
 {
  case 131:
  case 128:
  case 129:

   break;
  case 130:

   VAR_1->pgCopyIn = 1;
   break;
  default:

   FUNC_5(VAR_1, "%s: %sCommand was: %s",
          VAR_3, FUNC_1(VAR_4), VAR_2);
   break;
 }

 FUNC_0(VAR_5);
}
