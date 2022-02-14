
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sebuf ;
typedef int count ;
struct TYPE_4__ {int errorMessage; int sock; int * keepalives_count; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int*,TYPE_1__*,char*) ;
 scalar_t__ FUNC_4 (int ,int ,int ,char*,int) ;

__attribute__((used)) static int
FUNC_5(PGconn *VAR_4)
{
 int VAR_5;

 if (VAR_4->keepalives_count == ((void*)0))
  return 1;

 if (!FUNC_3(VAR_4->keepalives_count, &VAR_5, VAR_4,
       "keepalives_count"))
  return 0;
 if (VAR_5 < 0)
  VAR_5 = 0;
 return 1;
}
