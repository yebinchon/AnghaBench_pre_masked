
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_2__ {int trailing_move; int ctm; int move; } ;
typedef TYPE_1__ bound_path_arg ;


 int FUNC_0 (float,float,int ) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, void *VAR_1, float VAR_2, float VAR_3)
{
 bound_path_arg *VAR_4 = (bound_path_arg *)VAR_1;
 VAR_4->move = FUNC_0(VAR_2, VAR_3, VAR_4->ctm);
 VAR_4->trailing_move = 1;
}
