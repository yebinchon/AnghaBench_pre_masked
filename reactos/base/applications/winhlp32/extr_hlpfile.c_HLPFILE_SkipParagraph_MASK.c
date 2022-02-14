
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int first_page; } ;
typedef TYPE_1__ HLPFILE ;
typedef scalar_t__ BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__ const**) ;
 unsigned int FUNC_2 (scalar_t__ const**) ;

__attribute__((used)) static BOOL FUNC_3(HLPFILE *VAR_4, const BYTE *VAR_5, const BYTE *VAR_6, unsigned* VAR_7)
{
    const BYTE *VAR_8;

    if (!VAR_4->first_page) {FUNC_0("no page\n"); return VAR_0;};
    if (VAR_5 + 0x19 > VAR_6) {FUNC_0("header too small\n"); return VAR_0;};

    VAR_8 = VAR_5 + 0x15;
    if (VAR_5[0x14] == VAR_1 || VAR_5[0x14] == VAR_2)
    {
        FUNC_1(&VAR_8);
        *VAR_7 = FUNC_2(&VAR_8);
    }
    else *VAR_7 = VAR_6-VAR_5-15;

    return VAR_3;
}
