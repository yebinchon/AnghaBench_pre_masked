
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ fs_type; } ;
typedef TYPE_1__ FATFS ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int const*) ;

__attribute__((used)) static DWORD FUNC_1 (
    FATFS* VAR_3,
    const BYTE* VAR_4
)
{
    DWORD VAR_5;

    VAR_5 = FUNC_0(VAR_4 + VAR_1);
    if (VAR_3->fs_type == VAR_2) {
        VAR_5 |= (DWORD)FUNC_0(VAR_4 + VAR_0) << 16;
    }

    return VAR_5;
}
