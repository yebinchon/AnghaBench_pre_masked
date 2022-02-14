
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwRefCount; } ;
typedef TYPE_1__* PTHEME_FILE ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_1__*,int ) ;

HRESULT FUNC_1(PTHEME_FILE VAR_1)
{
    VAR_1->dwRefCount++;
    FUNC_0("Theme %p refcount: %d\n", VAR_1, VAR_1->dwRefCount);
    return VAR_0;
}
