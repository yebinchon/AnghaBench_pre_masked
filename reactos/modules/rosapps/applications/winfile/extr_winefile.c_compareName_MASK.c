
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATAW ;
struct TYPE_6__ {TYPE_1__ data; } ;
typedef TYPE_2__ Entry ;


 int FUNC_0 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(const void* VAR_0, const void* VAR_1)
{
 const WIN32_FIND_DATAW* VAR_2 = &(*(const Entry* const*)VAR_0)->data;
 const WIN32_FIND_DATAW* VAR_3 = &(*(const Entry* const*)VAR_1)->data;

 int VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 return FUNC_1(VAR_2->cFileName, VAR_3->cFileName);
}
