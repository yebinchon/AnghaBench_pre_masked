
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cmd_output ;
typedef int cmd ;
struct TYPE_3__ {char* bindir; int bin_version; } ;
typedef int FILE ;
typedef TYPE_1__ ClusterInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (char*,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,...) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int,char*,char*) ;
 int FUNC_5 (char*,char*,int*,int*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(ClusterInfo *VAR_3)
{
 char VAR_4[VAR_0],
    VAR_5[VAR_1];
 FILE *VAR_6;
 int VAR_7 = 0,
    VAR_8 = 0;

 FUNC_4(VAR_4, sizeof(VAR_4), "\"%s/pg_ctl\" --version", VAR_3->bindir);

 if ((VAR_6 = FUNC_3(VAR_4, "r")) == ((void*)0) ||
  FUNC_0(VAR_5, sizeof(VAR_5), VAR_6) == ((void*)0))
  FUNC_2("could not get pg_ctl version data using %s: %s\n",
     VAR_4, FUNC_6(VAR_2));

 FUNC_1(VAR_6);

 if (FUNC_5(VAR_5, "%*s %*s %d.%d", &VAR_7, &VAR_8) < 1)
  FUNC_2("could not get pg_ctl version output from %s\n", VAR_4);

 if (VAR_7 < 10)
 {

  VAR_3->bin_version = VAR_7 * 10000 + VAR_8 * 100;
 }
 else
 {

  VAR_3->bin_version = VAR_7 * 10000;
 }
}
