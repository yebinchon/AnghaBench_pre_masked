
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int user; } ;
struct TYPE_12__ {int port; int sockdir; } ;
struct TYPE_11__ {char* data; } ;
typedef TYPE_1__* PQExpBuffer ;
typedef TYPE_2__ ClusterInfo ;


 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (TYPE_1__*,char) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_4 () ;
 TYPE_4__ VAR_0 ;
 int FUNC_5 (TYPE_1__*) ;

char *
FUNC_6(ClusterInfo *VAR_1)
{
 static PQExpBuffer VAR_2;

 if (VAR_2 == ((void*)0))
  VAR_2 = FUNC_4();
 else
  FUNC_5(VAR_2);

 if (VAR_1->sockdir)
 {
  FUNC_2(VAR_2, "--host ");
  FUNC_3(VAR_2, VAR_1->sockdir);
  FUNC_1(VAR_2, ' ');
 }
 FUNC_0(VAR_2, "--port %d --username ", VAR_1->port);
 FUNC_3(VAR_2, VAR_0.user);

 return VAR_2->data;
}
