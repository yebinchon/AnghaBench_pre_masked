
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int yaml_event_t ;
typedef int yaml_emitter_t ;
typedef int yaml_char_t ;
struct dt_info {int dt; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *,int *,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int *,int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int ,int *) ;

void FUNC_11(FILE *VAR_3, struct dt_info *VAR_4)
{
 yaml_emitter_t VAR_5;
 yaml_event_t VAR_6;

 FUNC_4(&VAR_5);
 FUNC_5(&VAR_5, VAR_3);
 FUNC_9(&VAR_6, VAR_2);
 FUNC_3(&VAR_5, &VAR_6);

 FUNC_1(&VAR_6, ((void*)0), ((void*)0), ((void*)0), 0);
 FUNC_3(&VAR_5, &VAR_6);

 FUNC_7(&VAR_6, ((void*)0), (yaml_char_t *)VAR_1, 1, VAR_0);
 FUNC_3(&VAR_5, &VAR_6);

 FUNC_10(VAR_4->dt, &VAR_5);

 FUNC_6(&VAR_6);
 FUNC_3(&VAR_5, &VAR_6);

 FUNC_0(&VAR_6, 0);
 FUNC_3(&VAR_5, &VAR_6);

 FUNC_8(&VAR_6);
 FUNC_3(&VAR_5, &VAR_6);

 FUNC_2(&VAR_5);
}
