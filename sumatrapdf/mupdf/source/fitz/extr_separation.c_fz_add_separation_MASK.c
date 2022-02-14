
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_separations; int* cs_pos; int * cs; int * name; } ;
typedef TYPE_1__ fz_separations ;
typedef int fz_context ;
typedef int fz_colorspace ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,int ,char*) ;

void FUNC_3(fz_context *VAR_2, fz_separations *VAR_3, const char *VAR_4, fz_colorspace *VAR_5, int VAR_6)
{
 int VAR_7;

 if (!VAR_3)
  FUNC_2(VAR_2, VAR_0, "can't add to non-existent separations");

 VAR_7 = VAR_3->num_separations;
 if (VAR_7 == VAR_1)
  FUNC_2(VAR_2, VAR_0, "too many separations");

 VAR_3->name[VAR_7] = FUNC_1(VAR_2, VAR_4);
 VAR_3->cs[VAR_7] = FUNC_0(VAR_2, VAR_5);
 VAR_3->cs_pos[VAR_7] = VAR_6;

 VAR_3->num_separations++;
}
