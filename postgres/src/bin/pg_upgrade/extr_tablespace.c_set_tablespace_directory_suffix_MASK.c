
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cat_ver; } ;
struct TYPE_5__ {TYPE_1__ controldata; int major_version_str; int tablespace_suffix; int major_version; } ;
typedef TYPE_2__ ClusterInfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(ClusterInfo *VAR_0)
{
 if (FUNC_0(VAR_0->major_version) <= 804)
  VAR_0->tablespace_suffix = FUNC_1("");
 else
 {



  VAR_0->tablespace_suffix = FUNC_2("/PG_%s_%d",
             VAR_0->major_version_str,
             VAR_0->controldata.cat_ver);
 }
}
