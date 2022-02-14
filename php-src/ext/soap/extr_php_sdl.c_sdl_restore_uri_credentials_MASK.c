
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * context; int old_header; } ;
typedef TYPE_1__ sdlCtx ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,char*,int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(sdlCtx *VAR_1)
{
 if (FUNC_1(VAR_1->old_header) != VAR_0) {
     FUNC_2(VAR_1->context, "http", "header", &VAR_1->old_header);
     FUNC_3(&VAR_1->old_header);
  FUNC_0(&VAR_1->old_header);
 }
 VAR_1->context = ((void*)0);
}
