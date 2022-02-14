
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* filename; } ;
typedef TYPE_1__ ze_zip_object ;



__attribute__((used)) static char * FUNC_0(ze_zip_object *VAR_0)
{

 if (!VAR_0) {
  return ((void*)0);
 }

 if (VAR_0->filename) {
  return VAR_0->filename;
 }
 return ((void*)0);
}
