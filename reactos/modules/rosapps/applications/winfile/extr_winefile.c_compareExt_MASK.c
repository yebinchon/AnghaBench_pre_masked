
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * cFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATAW ;
typedef int WCHAR ;
struct TYPE_6__ {TYPE_1__ data; } ;
typedef TYPE_2__ Entry ;


 int FUNC_0 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_1 (int const*,int const*) ;
 int * VAR_0 ;
 int * FUNC_2 (int const*,char) ;

__attribute__((used)) static int FUNC_3(const void* VAR_1, const void* VAR_2)
{
 const WIN32_FIND_DATAW* VAR_3 = &(*(const Entry* const*)VAR_1)->data;
 const WIN32_FIND_DATAW* VAR_4 = &(*(const Entry* const*)VAR_2)->data;
 const WCHAR *VAR_5, *VAR_6, *VAR_7, *VAR_8;

 int VAR_9 = FUNC_0(VAR_3, VAR_4);
 if (VAR_9)
  return VAR_9;

 VAR_5 = VAR_3->cFileName;
 VAR_6 = VAR_4->cFileName;

 VAR_7 = FUNC_2(VAR_5, '.');
 VAR_8 = FUNC_2(VAR_6, '.');

 if (VAR_7)
  VAR_7++;
 else
  VAR_7 = VAR_0;

 if (VAR_8)
  VAR_8++;
 else
  VAR_8 = VAR_0;

 VAR_9 = FUNC_1(VAR_7, VAR_8);
 if (VAR_9)
  return VAR_9;

 return FUNC_1(VAR_5, VAR_6);
}
