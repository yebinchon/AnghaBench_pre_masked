
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int prompt_type; } ;
struct TYPE_6__ {TYPE_1__* cons; } ;
struct TYPE_5__ {TYPE_3__* line; } ;
typedef TYPE_2__ RCore ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*,int *,int *) ;

int FUNC_2(void *VAR_6) {
 RCore *VAR_7 = (RCore *)VAR_6;
 VAR_7->cons->line->prompt_type = VAR_1;
 FUNC_1 (VAR_7->cons->line, &VAR_3, &VAR_2);
 FUNC_0 (VAR_7, "open file: ", "o %s");
 VAR_7->cons->line->prompt_type = VAR_0;
 FUNC_1 (VAR_7->cons->line, &VAR_5, &VAR_4);
 return 0;
}
