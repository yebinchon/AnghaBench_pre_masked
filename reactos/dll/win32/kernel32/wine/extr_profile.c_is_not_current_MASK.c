
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwLowDateTime; scalar_t__ dwHighDateTime; } ;
typedef int LONGLONG ;
typedef TYPE_1__ FILETIME ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,unsigned int,unsigned int) ;

__attribute__((used)) static BOOL FUNC_2(FILETIME * VAR_0)
{
    FILETIME VAR_1;
    LONGLONG VAR_2, VAR_3;
    FUNC_0(&VAR_1);
    VAR_2 = ((LONGLONG)VAR_0->dwHighDateTime << 32) + VAR_0->dwLowDateTime;
    VAR_3 = ((LONGLONG)VAR_1.dwHighDateTime << 32) + VAR_1.dwLowDateTime;
    FUNC_1("%08x;%08x\n",(unsigned)VAR_2+21000000,(unsigned)VAR_3);
    return VAR_2 + 21000000 < VAR_3;
}
