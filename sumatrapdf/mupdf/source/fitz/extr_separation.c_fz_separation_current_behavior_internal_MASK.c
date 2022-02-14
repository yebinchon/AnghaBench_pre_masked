
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_separations; } ;
typedef TYPE_1__ fz_separations ;
typedef int fz_separation_behavior ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (TYPE_1__ const*,int) ;

fz_separation_behavior FUNC_2(fz_context *VAR_1, const fz_separations *VAR_2, int VAR_3)
{
 if (!VAR_2 || VAR_3 < 0 || VAR_3 >= VAR_2->num_separations)
  FUNC_0(VAR_1, VAR_0, "can't disable non-existent separation");

 return FUNC_1(VAR_2, VAR_3);
}
