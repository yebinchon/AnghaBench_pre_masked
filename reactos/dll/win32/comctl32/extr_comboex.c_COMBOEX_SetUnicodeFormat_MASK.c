
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ unicode; } ;
typedef TYPE_1__ COMBOEX_INFO ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static BOOL FUNC_1 (COMBOEX_INFO *VAR_0, BOOL VAR_1)
{
    BOOL VAR_2 = VAR_0->unicode;

    FUNC_0("to %s, was %s\n", VAR_1 ? "TRUE":"FALSE", VAR_2 ? "TRUE":"FALSE");

    VAR_0->unicode = VAR_1;

    return VAR_2;
}
