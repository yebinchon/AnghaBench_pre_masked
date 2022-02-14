
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {char const* user; } ;
struct TYPE_11__ {char const* sockdir; int port; } ;
struct TYPE_10__ {int data; } ;
typedef TYPE_1__ PQExpBufferData ;
typedef int PGconn ;
typedef TYPE_2__ ClusterInfo ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_4__ VAR_0 ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static PGconn *
FUNC_6(ClusterInfo *VAR_1, const char *VAR_2)
{
 PQExpBufferData VAR_3;
 PGconn *VAR_4;


 FUNC_4(&VAR_3);
 FUNC_3(&VAR_3, "dbname=");
 FUNC_1(&VAR_3, VAR_2);
 FUNC_3(&VAR_3, " user=");
 FUNC_1(&VAR_3, VAR_0.user);
 FUNC_2(&VAR_3, " port=%d", VAR_1->port);
 if (VAR_1->sockdir)
 {
  FUNC_3(&VAR_3, " host=");
  FUNC_1(&VAR_3, VAR_1->sockdir);
 }

 VAR_4 = FUNC_0(VAR_3.data);
 FUNC_5(&VAR_3);
 return VAR_4;
}
