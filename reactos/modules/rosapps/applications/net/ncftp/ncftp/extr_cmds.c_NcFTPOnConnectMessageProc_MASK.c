
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int msg; } ;
typedef TYPE_1__* ResponsePtr ;
typedef int * FTPCIPtr ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(const FTPCIPtr VAR_1, ResponsePtr VAR_2)
{
 VAR_0 = (VAR_1 != ((void*)0));
 (void) FUNC_2("\n");
 FUNC_1(&VAR_2->msg);
 FUNC_0("Logging in...");
}
