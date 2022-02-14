
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int obs_data_t ;
struct TYPE_4__ {int server; void* advanced; void* show_cursor; int screen_id; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_0 ;
 void* FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(void *VAR_1, obs_data_t *VAR_2)
{
 FUNC_0(VAR_1);

 FUNC_6(VAR_0);

 VAR_0->screen_id = FUNC_3(VAR_2, "screen");
 VAR_0->show_cursor = FUNC_2(VAR_2, "show_cursor");
 VAR_0->advanced = FUNC_2(VAR_2, "advanced");
 VAR_0->server = FUNC_1(FUNC_4(VAR_2, "server"));

 FUNC_5(VAR_0);
}
