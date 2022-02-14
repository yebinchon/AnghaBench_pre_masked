
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int timeout ;
typedef int sebuf ;
struct TYPE_4__ {int errorMessage; int sock; int * pgtcp_user_timeout; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int*,TYPE_1__*,char*) ;
 scalar_t__ FUNC_4 (int ,int ,int ,char*,int) ;

__attribute__((used)) static int
FUNC_5(PGconn *VAR_3)
{
 int VAR_4;

 if (VAR_3->pgtcp_user_timeout == ((void*)0))
  return 1;

 if (!FUNC_3(VAR_3->pgtcp_user_timeout, &VAR_4, VAR_3,
       "tcp_user_timeout"))
  return 0;

 if (VAR_4 < 0)
  VAR_4 = 0;
 return 1;
}
