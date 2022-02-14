
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ULONG_PTR ;
struct TYPE_2__ {int (* SeekFileProc ) (int ,int ) ;} ;
typedef int PVOID ;
typedef TYPE_1__* PROSSYM_OWN_FILECONTEXT ;
typedef int BOOLEAN ;


 int FUNC_0 (int ,int ) ;

BOOLEAN
FUNC_1(PVOID VAR_0, ULONG_PTR VAR_1)
{
    PROSSYM_OWN_FILECONTEXT VAR_2 = (PROSSYM_OWN_FILECONTEXT)VAR_0;
    return VAR_2->SeekFileProc(VAR_0, VAR_1);
}
