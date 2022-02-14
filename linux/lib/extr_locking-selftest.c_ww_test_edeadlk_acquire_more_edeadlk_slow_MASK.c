
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int dep_map; } ;
struct TYPE_14__ {TYPE_2__* ctx; TYPE_8__ base; } ;
struct TYPE_13__ {int stamp; } ;
struct TYPE_12__ {TYPE_2__* ctx; TYPE_8__ base; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_6__*,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (int *,int,int ) ;
 TYPE_6__ VAR_2 ;
 TYPE_6__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(void)
{
 int VAR_7;

 FUNC_3(&VAR_3);
 FUNC_4(&VAR_3, 1, VAR_1);
 VAR_3 = &VAR_6;

 FUNC_3(&VAR_4);
 FUNC_4(&VAR_4, 1, VAR_1);
 VAR_4 = &VAR_6;

 FUNC_1(&VAR_5);
 VAR_6 = VAR_5;
 VAR_6-;

 VAR_7 = FUNC_2(&VAR_2, &VAR_5);
 FUNC_0(VAR_7);

 VAR_7 = FUNC_2(&VAR_3, &VAR_5);
 FUNC_0(VAR_7 != -VAR_0);

 FUNC_5(&VAR_4, &VAR_5);
}
