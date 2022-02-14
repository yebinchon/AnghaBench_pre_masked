
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int filename ;
typedef int cmd_output ;
typedef int cmd ;
struct TYPE_4__ {char* pgconfig; char* pgdata; char* bindir; } ;
typedef int FILE ;
typedef TYPE_1__ ClusterInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,int ) ;
 void* FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int * FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int,char*,char*,...) ;
 int FUNC_11 (int ) ;

void
FUNC_12(ClusterInfo *VAR_4)
{
 char VAR_5[VAR_0];
 char VAR_6[VAR_0],
    VAR_7[VAR_1];
 FILE *VAR_8,
      *VAR_9;


 VAR_4->pgconfig = FUNC_6(VAR_4->pgdata);


 FUNC_10(VAR_5, sizeof(VAR_5), "%s/postgresql.conf", VAR_4->pgconfig);
 if ((VAR_8 = FUNC_3(VAR_5, "r")) == ((void*)0))
  return;
 FUNC_1(VAR_8);


 FUNC_10(VAR_5, sizeof(VAR_5), "%s/PG_VERSION", VAR_4->pgconfig);
 if ((VAR_8 = FUNC_3(VAR_5, "r")) != ((void*)0))
 {
  FUNC_1(VAR_8);
  return;
 }



 if (VAR_4 == &VAR_3)
  FUNC_9("Finding the real data directory for the source cluster");
 else
  FUNC_9("Finding the real data directory for the target cluster");






 FUNC_10(VAR_6, sizeof(VAR_6), "\"%s/postgres\" -D \"%s\" -C data_directory",
    VAR_4->bindir, VAR_4->pgconfig);

 if ((VAR_9 = FUNC_8(VAR_6, "r")) == ((void*)0) ||
  FUNC_2(VAR_7, sizeof(VAR_7), VAR_9) == ((void*)0))
  FUNC_5("could not get data directory using %s: %s\n",
     VAR_6, FUNC_11(VAR_2));

 FUNC_4(VAR_9);


 (void) FUNC_7(VAR_7);

 VAR_4->pgdata = FUNC_6(VAR_7);

 FUNC_0();
}
