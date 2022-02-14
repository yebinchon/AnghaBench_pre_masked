
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int usVersion; } ;
typedef TYPE_1__ ILHEAD ;
typedef int BOOL ;



__attribute__((used)) static BOOL FUNC_0(const ILHEAD *VAR_0)
{
    return (VAR_0->usVersion & 0xff00) == 0x600;
}
