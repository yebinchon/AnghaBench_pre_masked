
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int name; } ;
typedef TYPE_1__ tar_entry ;
struct TYPE_6__ {int count; TYPE_1__* entries; } ;
typedef TYPE_2__ fz_tar_archive ;
typedef int fz_context ;


 int FUNC_0 (char const*,int ) ;

__attribute__((used)) static tar_entry *FUNC_1(fz_context *VAR_0, fz_tar_archive *VAR_1, const char *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_1->count; VAR_3++)
  if (!FUNC_0(VAR_2, VAR_1->entries[VAR_3].name))
   return &VAR_1->entries[VAR_3];
 return ((void*)0);
}
