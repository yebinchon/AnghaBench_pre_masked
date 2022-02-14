
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
typedef int sebuf ;
struct TYPE_4__ {scalar_t__ sock; int errorMessage; scalar_t__ ssl_in_use; } ;
typedef TYPE_1__ PGconn ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,char*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__,int,int,int ) ;
 int FUNC_4 (int *,int ,...) ;

__attribute__((used)) static int
FUNC_5(PGconn *VAR_4, int VAR_5, int VAR_6, time_t VAR_7)
{
 int VAR_8;

 if (!VAR_4)
  return -1;
 if (VAR_4->sock == VAR_1)
 {
  FUNC_4(&VAR_4->errorMessage,
        FUNC_1("invalid socket\n"));
  return -1;
 }
 do
  VAR_8 = FUNC_3(VAR_4->sock, VAR_5, VAR_6, VAR_7);
 while (VAR_8 < 0 && VAR_3 == VAR_0);

 if (VAR_8 < 0)
 {
  char VAR_9[VAR_2];

  FUNC_4(&VAR_4->errorMessage,
        FUNC_1("select() failed: %s\n"),
        FUNC_0(VAR_3, VAR_9, sizeof(VAR_9)));
 }

 return VAR_8;
}
