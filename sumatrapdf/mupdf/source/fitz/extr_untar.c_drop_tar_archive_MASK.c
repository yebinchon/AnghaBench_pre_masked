
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; TYPE_2__* entries; } ;
typedef TYPE_1__ fz_tar_archive ;
typedef int fz_context ;
typedef int fz_archive ;
struct TYPE_4__ {struct TYPE_4__* name; } ;


 int FUNC_0 (int *,TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(fz_context *VAR_0, fz_archive *VAR_1)
{
 fz_tar_archive *VAR_2 = (fz_tar_archive *) VAR_1;
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2->count; ++VAR_3)
  FUNC_0(VAR_0, VAR_2->entries[VAR_3].name);
 FUNC_0(VAR_0, VAR_2->entries);
}
