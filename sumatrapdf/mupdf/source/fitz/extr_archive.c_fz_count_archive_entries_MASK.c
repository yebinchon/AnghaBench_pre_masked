
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_4__ {int (* count_entries ) (int *,TYPE_1__*) ;} ;
typedef TYPE_1__ fz_archive ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,TYPE_1__*) ;

int
FUNC_2(fz_context *VAR_1, fz_archive *VAR_2)
{
 if (!VAR_2->count_entries)
  FUNC_0(VAR_1, VAR_0, "cannot count archive entries");
 return VAR_2->count_entries(VAR_1, VAR_2);
}
