
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * streamConn; } ;
typedef TYPE_1__ WalReceiverConn ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(WalReceiverConn *VAR_0, char **VAR_1,
      int *VAR_2)
{
 char *VAR_3 = ((void*)0);

 *VAR_1 = ((void*)0);
 *VAR_2 = 0;

 FUNC_0(VAR_0->streamConn != ((void*)0));

 VAR_3 = FUNC_1(VAR_0->streamConn);
 if (VAR_3 && FUNC_5(VAR_3) != 0)
  *VAR_1 = FUNC_4(VAR_3);

 VAR_3 = FUNC_2(VAR_0->streamConn);
 if (VAR_3 && FUNC_5(VAR_3) != 0)
  *VAR_2 = FUNC_3(VAR_3);
}
