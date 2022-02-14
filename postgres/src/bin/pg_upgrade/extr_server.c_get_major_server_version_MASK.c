
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ver_filename ;
typedef int uint32 ;
struct TYPE_3__ {char* pgdata; int major_version_str; } ;
typedef int FILE ;
typedef TYPE_1__ ClusterInfo ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int,char*,char*) ;
 int FUNC_5 (int ,char*,int*,int*) ;

uint32
FUNC_6(ClusterInfo *VAR_1)
{
 FILE *VAR_2;
 char VAR_3[VAR_0];
 int VAR_4 = 0,
    VAR_5 = 0;

 FUNC_4(VAR_3, sizeof(VAR_3), "%s/PG_VERSION",
    VAR_1->pgdata);
 if ((VAR_2 = FUNC_1(VAR_3, "r")) == ((void*)0))
  FUNC_3("could not open version file: %s\n", VAR_3);

 if (FUNC_2(VAR_2, "%63s", VAR_1->major_version_str) == 0 ||
  FUNC_5(VAR_1->major_version_str, "%d.%d", &VAR_4, &VAR_5) < 1)
  FUNC_3("could not parse PG_VERSION file from %s\n", VAR_1->pgdata);

 FUNC_0(VAR_2);

 if (VAR_4 < 10)
 {

  return VAR_4 * 10000 + VAR_5 * 100;
 }
 else
 {

  return VAR_4 * 10000;
 }
}
