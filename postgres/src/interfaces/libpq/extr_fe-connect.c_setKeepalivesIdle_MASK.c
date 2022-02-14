
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sebuf ;
typedef int idle ;
struct TYPE_4__ {int errorMessage; int sock; int * keepalives_idle; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int*,TYPE_1__*,char*) ;
 scalar_t__ FUNC_4 (int ,int ,int ,char*,int) ;

__attribute__((used)) static int
FUNC_5(PGconn *VAR_5)
{
 int VAR_6;

 if (VAR_5->keepalives_idle == ((void*)0))
  return 1;

 if (!FUNC_3(VAR_5->keepalives_idle, &VAR_6, VAR_5,
       "keepalives_idle"))
  return 0;
 if (VAR_6 < 0)
  VAR_6 = 0;
 return 1;
}
