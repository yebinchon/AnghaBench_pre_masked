
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int nonblocking; int errorMessage; int xactStatus; int asyncStatus; int status; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(PGconn *VAR_3)
{



 FUNC_5(VAR_3);







 VAR_3->nonblocking = 0;




 FUNC_1(VAR_3, 1);
 VAR_3->status = VAR_0;
 VAR_3->asyncStatus = VAR_1;
 VAR_3->xactStatus = VAR_2;
 FUNC_0(VAR_3);
 FUNC_4(&VAR_3->errorMessage);
 FUNC_3(VAR_3);


 FUNC_2(VAR_3);
}
