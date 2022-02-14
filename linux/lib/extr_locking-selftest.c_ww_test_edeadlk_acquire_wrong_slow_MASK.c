
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int dep_map; } ;
struct TYPE_12__ {TYPE_1__* ctx; TYPE_6__ base; } ;
struct TYPE_11__ {int stamp; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (int *,int,int ) ;
 TYPE_4__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_6 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(void)
{
 int VAR_7;

 FUNC_4(&VAR_3);
 FUNC_5(&VAR_3, 1, VAR_1);
 VAR_3 = &VAR_6;

 FUNC_1(&VAR_5);
 VAR_6 = VAR_5;
 VAR_6-;

 VAR_7 = FUNC_2(&VAR_2, &VAR_5);
 FUNC_0(VAR_7);

 VAR_7 = FUNC_2(&VAR_3, &VAR_5);
 FUNC_0(VAR_7 != -VAR_0);
 if (!VAR_7)
  FUNC_3(&VAR_3);

 FUNC_3(&VAR_2);

 FUNC_6(&VAR_4, &VAR_5);
}
