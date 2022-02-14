
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* running_cluster; } ;
struct TYPE_5__ {char* pgopts; int pgconfig; int bindir; } ;
typedef TYPE_1__ ClusterInfo ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int,int,char*,int ,int ,char*,char*) ;
 TYPE_1__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 TYPE_2__ VAR_3 ;

void
FUNC_1(bool VAR_4)
{
 ClusterInfo *VAR_5;

 if (VAR_3.running_cluster == &VAR_2)
  VAR_5 = &VAR_2;
 else if (VAR_3.running_cluster == &VAR_1)
  VAR_5 = &VAR_1;
 else
  return;

 FUNC_0(VAR_0, ((void*)0), !VAR_4, !VAR_4,
     "\"%s/pg_ctl\" -w -D \"%s\" -o \"%s\" %s stop",
     VAR_5->bindir, VAR_5->pgconfig,
     VAR_5->pgopts ? VAR_5->pgopts : "",
     VAR_4 ? "-m fast" : "-m smart");

 VAR_3.running_cluster = ((void*)0);
}
