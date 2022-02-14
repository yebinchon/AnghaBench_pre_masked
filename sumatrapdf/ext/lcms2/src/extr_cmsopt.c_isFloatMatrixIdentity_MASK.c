
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* v; } ;
typedef TYPE_2__ cmsMAT3 ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_5__ {int * n; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_2__*) ;

__attribute__((used)) static
cmsBool FUNC_2(cmsContext VAR_2, const cmsMAT3* VAR_3)
{
       cmsMAT3 VAR_4;
       int VAR_5, VAR_6;

       FUNC_1(VAR_2, &VAR_4);

       for (VAR_5 = 0; VAR_5 < 3; VAR_5++)
              for (VAR_6 = 0; VAR_6 < 3; VAR_6++)
                     if (!FUNC_0(VAR_3->v[VAR_5].n[VAR_6], VAR_4.v[VAR_5].n[VAR_6])) return VAR_0;

       return VAR_1;
}
