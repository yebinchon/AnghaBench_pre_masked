
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_separations; char const** name; } ;
typedef TYPE_1__ fz_separations ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;

const char *FUNC_1(fz_context *VAR_1, const fz_separations *VAR_2, int VAR_3)
{
 if (!VAR_2 || VAR_3 < 0 || VAR_3 >= VAR_2->num_separations)
  FUNC_0(VAR_1, VAR_0, "can't access non-existent separation");

 return VAR_2->name[VAR_3];
}
