
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int count; TYPE_1__* entries; } ;
typedef TYPE_2__ fz_zip_archive ;
typedef int fz_context ;
typedef int fz_archive ;
struct TYPE_3__ {char const* name; } ;



__attribute__((used)) static const char *FUNC_0(fz_context *VAR_0, fz_archive *VAR_1, int VAR_2)
{
 fz_zip_archive *VAR_3 = (fz_zip_archive *) VAR_1;
 if (VAR_2 < 0 || VAR_2 >= VAR_3->count)
  return ((void*)0);
 return VAR_3->entries[VAR_2].name;
}
