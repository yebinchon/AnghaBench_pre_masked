
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ iVersion; } ;
typedef TYPE_1__ REBAR_INFO ;
typedef int LRESULT ;
typedef scalar_t__ INT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;

__attribute__((used)) static LRESULT
FUNC_1 (REBAR_INFO *VAR_1, INT VAR_2)
{
    INT VAR_3 = VAR_1->iVersion;

    if (VAR_2 > VAR_0)
 return -1;

    VAR_1->iVersion = VAR_2;

    FUNC_0("new version %d\n", VAR_2);

    return VAR_3;
}
