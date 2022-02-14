
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cy; } ;
struct TYPE_5__ {TYPE_1__ calcSize; } ;
typedef TYPE_2__ REBAR_INFO ;
typedef int LRESULT ;
typedef int INT ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static LRESULT
FUNC_1 (const REBAR_INFO *VAR_0)
{
    INT VAR_1;

    VAR_1 = VAR_0->calcSize.cy;

    FUNC_0("height = %d\n", VAR_1);

    return VAR_1;
}
