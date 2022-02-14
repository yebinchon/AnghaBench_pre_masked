
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int b_parent; int b_dir; int psz_name; TYPE_3__* p_udf; int fe; } ;
typedef TYPE_1__ udf_dirent_t ;
struct TYPE_9__ {scalar_t__ i_position; } ;


 scalar_t__ FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*,char const*,int) ;
 char* FUNC_2 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_3 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_4 (int *,TYPE_3__*,int ,int ,int ) ;

udf_dirent_t *
FUNC_5(udf_dirent_t *VAR_2, const char *VAR_3)
{
  udf_dirent_t *VAR_4 = ((void*)0);

  if (VAR_2) {
    char VAR_5[VAR_0];
    char *VAR_6;


    VAR_2->p_udf->i_position = 0;

    FUNC_1(VAR_5, VAR_3, VAR_0-1);
    VAR_5[VAR_0-1] = '\0';
    VAR_6 = FUNC_2(VAR_5, VAR_1);
    if (VAR_6) {
      udf_dirent_t *VAR_7 =
 FUNC_4(&VAR_2->fe, VAR_2->p_udf,
         VAR_2->psz_name, VAR_2->b_dir,
         VAR_2->b_parent);
      VAR_4 = FUNC_3(VAR_7, VAR_6);
    }
    else if ( 0 == FUNC_0("/", VAR_3, sizeof("/")) ) {
      return FUNC_4(&VAR_2->fe, VAR_2->p_udf,
       VAR_2->psz_name, VAR_2->b_dir,
       VAR_2->b_parent);
    }
  }
  return VAR_4;
}
