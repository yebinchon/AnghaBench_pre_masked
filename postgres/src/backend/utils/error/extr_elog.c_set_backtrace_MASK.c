
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int backtrace; } ;
struct TYPE_7__ {int data; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__ ErrorData ;


 int FUNC_0 (TYPE_1__*,char*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (void**,int ) ;
 char** FUNC_3 (void**,int) ;
 int FUNC_4 (char**) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (void**) ;

__attribute__((used)) static void
FUNC_7(ErrorData *VAR_0, int VAR_1)
{
 StringInfoData VAR_2;

 FUNC_5(&VAR_2);
 FUNC_1(&VAR_2,
         "backtrace generation is not supported by this installation");


 VAR_0->backtrace = VAR_2.data;
}
