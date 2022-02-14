
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t UINT16 ;
typedef size_t UINT ;
struct TYPE_2__ {size_t wMaxId; int nMapper; int * lpMlds; } ;
typedef int * LPWINE_MLD ;


 int FUNC_0 (char*,size_t,size_t) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static LPWINE_MLD FUNC_1(UINT VAR_1, UINT VAR_2)
{
    FUNC_0("(%04x, %04x)\n", VAR_1, VAR_2);
    if (VAR_1 < VAR_0[VAR_2].wMaxId)
 return &VAR_0[VAR_2].lpMlds[VAR_1];
    if ((VAR_1 == (UINT16)-1 || VAR_1 == (UINT)-1) && VAR_0[VAR_2].nMapper != -1)
 return &VAR_0[VAR_2].lpMlds[-1];
    return ((void*)0);
}
