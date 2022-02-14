
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nFileSizeHigh; int nFileSizeLow; } ;
typedef TYPE_1__ WIN32_FIND_DATAW ;
struct TYPE_6__ {TYPE_1__ data; } ;
typedef TYPE_2__ Entry ;


 int FUNC_0 (TYPE_1__ const*,TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_1(const void* VAR_0, const void* VAR_1)
{
 const WIN32_FIND_DATAW* VAR_2 = &(*(const Entry* const*)VAR_0)->data;
 const WIN32_FIND_DATAW* VAR_3 = &(*(const Entry* const*)VAR_1)->data;

 int VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = VAR_3->nFileSizeHigh - VAR_2->nFileSizeHigh;

 if (VAR_4 < 0)
  return -1;
 else if (VAR_4 > 0)
  return 1;

 VAR_4 = VAR_3->nFileSizeLow - VAR_2->nFileSizeLow;

 return VAR_4<0? -1: VAR_4>0? 1: 0;
}
