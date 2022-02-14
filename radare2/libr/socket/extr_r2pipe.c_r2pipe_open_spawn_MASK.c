
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* input; int* output; } ;
typedef TYPE_1__ R2Pipe ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;

__attribute__((used)) static R2Pipe* FUNC_5(R2Pipe* VAR_0) {
 FUNC_2 ("r2pipe_open(NULL) not supported on windows\n");
 return ((void*)0);

}
