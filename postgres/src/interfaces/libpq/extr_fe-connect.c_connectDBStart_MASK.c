
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* gssencmode; int try_gss; int whichhost; int try_next_addr; int try_next_host; int status; int errorMessage; scalar_t__ outCount; scalar_t__ inEnd; scalar_t__ inCursor; scalar_t__ inStart; int options_valid; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(PGconn *VAR_3)
{
 if (!VAR_3)
  return 0;

 if (!VAR_3->options_valid)
  goto connect_errReturn;







 if (!FUNC_1())
 {
  FUNC_3(&VAR_3->errorMessage,
        "libpq is incorrectly linked to backend functions\n");
  goto connect_errReturn;
 }


 VAR_3->inStart = VAR_3->inCursor = VAR_3->inEnd = 0;
 VAR_3->outCount = 0;







 FUNC_4(&VAR_3->errorMessage);
 VAR_3->whichhost = -1;
 VAR_3->try_next_addr = 0;
 VAR_3->try_next_host = 1;
 VAR_3->status = VAR_1;
 if (FUNC_0(VAR_3) == VAR_2)
  return 1;

connect_errReturn:






 FUNC_2(VAR_3, 1);
 VAR_3->status = VAR_0;
 return 0;
}
