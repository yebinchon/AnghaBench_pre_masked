
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int dep_map; } ;
struct TYPE_12__ {TYPE_5__ base; TYPE_1__* ctx; } ;
struct TYPE_11__ {int stamp; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_4 (int *,int ,int,int ) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int *,int,int ) ;
 int FUNC_7 (TYPE_5__*) ;
 TYPE_3__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static void FUNC_8(void)
{
 int VAR_6;

 FUNC_5(&VAR_3);
 VAR_3 = &VAR_5;
 FUNC_6(&VAR_3, 1, VAR_1);

 FUNC_1(&VAR_4);
 VAR_5 = VAR_4;
 VAR_5-;

 VAR_6 = FUNC_2(&VAR_2, &VAR_4);
 FUNC_0(VAR_6);

 VAR_6 = FUNC_2(&VAR_3, &VAR_4);
 FUNC_0(VAR_6 != -VAR_0);

 VAR_3 = ((void*)0);
 FUNC_4(&VAR_3, 0, 1, VAR_1);
 FUNC_7(&VAR_3);
 FUNC_3(&VAR_2);

 FUNC_2(&VAR_3, &VAR_4);
}
