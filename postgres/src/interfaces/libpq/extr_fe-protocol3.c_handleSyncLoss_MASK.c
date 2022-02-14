
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int status; int asyncStatus; int errorMessage; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ,char,int) ;

__attribute__((used)) static void
FUNC_4(PGconn *VAR_2, char VAR_3, int VAR_4)
{
 FUNC_3(&VAR_2->errorMessage,
       FUNC_0(
         "lost synchronization with server: got message type \"%c\", length %d\n"),
       VAR_3, VAR_4);

 FUNC_2(VAR_2);
 VAR_2->asyncStatus = VAR_1;

 FUNC_1(VAR_2, 1);
 VAR_2->status = VAR_0;
}
