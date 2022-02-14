
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * name; } ;
typedef TYPE_1__ location_provider_t ;


 scalar_t__ FUNC_0 (char const*,int *) ;

__attribute__((used)) static const location_provider_t *
FUNC_1(
 const location_provider_t VAR_0[], const char *VAR_1)
{
 const location_provider_t *VAR_2 = ((void*)0);
 for (int VAR_3 = 0; VAR_0[VAR_3].name != ((void*)0); VAR_3++) {
  const location_provider_t *VAR_4 = &VAR_0[VAR_3];
  if (FUNC_0(VAR_1, VAR_4->name) == 0) {
   VAR_2 = VAR_4;
   break;
  }
 }

 return VAR_2;
}
