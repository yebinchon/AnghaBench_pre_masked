
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bUnicode; } ;
typedef TYPE_1__ STATUS_INFO ;
typedef int LRESULT ;
typedef int BOOL ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static inline LRESULT
FUNC_1 (STATUS_INFO *VAR_0, BOOL VAR_1)
{
    BOOL VAR_2 = VAR_0->bUnicode;

    FUNC_0("(0x%x)\n", VAR_1);
    VAR_0->bUnicode = VAR_1;

    return VAR_2;
}
