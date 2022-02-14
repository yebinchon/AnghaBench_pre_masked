
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int prop; int name; } ;
typedef int IndexAMProperty ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,char const*) ;

__attribute__((used)) static IndexAMProperty
FUNC_2(const char *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++)
 {
  if (FUNC_1(VAR_1[VAR_3].name, VAR_2) == 0)
   return VAR_1[VAR_3].prop;
 }


 return VAR_0;
}
