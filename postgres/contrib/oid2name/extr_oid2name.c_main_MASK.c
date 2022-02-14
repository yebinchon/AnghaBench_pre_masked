
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct options {char* dbname; int nodb; int quiet; TYPE_1__* filenodes; TYPE_1__* tables; TYPE_1__* oids; scalar_t__ tablespaces; } ;
struct TYPE_2__ {scalar_t__ num; scalar_t__ alloc; } ;
typedef TYPE_1__ eary ;
typedef int PGconn ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char**,struct options*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 int * FUNC_5 (struct options*) ;
 int FUNC_6 (int *,struct options*) ;
 int FUNC_7 (int *,struct options*) ;
 int FUNC_8 (int *,struct options*) ;
 int FUNC_9 (int *,struct options*) ;

int
FUNC_10(int VAR_0, char **VAR_1)
{
 struct options *VAR_2;
 PGconn *VAR_3;

 VAR_2 = (struct options *) FUNC_3(sizeof(struct options));

 VAR_2->oids = (eary *) FUNC_3(sizeof(eary));
 VAR_2->tables = (eary *) FUNC_3(sizeof(eary));
 VAR_2->filenodes = (eary *) FUNC_3(sizeof(eary));

 VAR_2->oids->num = VAR_2->oids->alloc = 0;
 VAR_2->tables->num = VAR_2->tables->alloc = 0;
 VAR_2->filenodes->num = VAR_2->filenodes->alloc = 0;


 FUNC_2(VAR_0, VAR_1, VAR_2);

 if (VAR_2->dbname == ((void*)0))
 {
  VAR_2->dbname = "postgres";
  VAR_2->nodb = 1;
 }
 VAR_3 = FUNC_5(VAR_2);


 if (VAR_2->tablespaces)
 {
  if (!VAR_2->quiet)
   FUNC_4("All tablespaces:\n");
  FUNC_8(VAR_3, VAR_2);

  FUNC_0(VAR_3);
  FUNC_1(0);
 }


 if (VAR_2->oids->num > 0 ||
  VAR_2->tables->num > 0 ||
  VAR_2->filenodes->num > 0)
 {
  if (!VAR_2->quiet)
   FUNC_4("From database \"%s\":\n", VAR_2->dbname);
  FUNC_9(VAR_3, VAR_2);

  FUNC_0(VAR_3);
  FUNC_1(0);
 }


 if (VAR_2->dbname && !VAR_2->nodb)
 {
  if (!VAR_2->quiet)
   FUNC_4("From database \"%s\":\n", VAR_2->dbname);
  FUNC_7(VAR_3, VAR_2);

  FUNC_0(VAR_3);
  FUNC_1(0);
 }


 if (!VAR_2->quiet)
  FUNC_4("All databases:\n");
 FUNC_6(VAR_3, VAR_2);

 FUNC_0(VAR_3);
 return 0;
}
