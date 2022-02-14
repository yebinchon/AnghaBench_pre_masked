
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cyIntegral; int cyMinChild; int cyMaxChild; } ;
typedef TYPE_1__ REBAR_BAND ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(const REBAR_BAND *VAR_0, int VAR_1)
{
    int VAR_2 = 0;
    if (VAR_0->cyIntegral == 0)
        return VAR_1;
    VAR_2 = FUNC_0(VAR_1 - (int)VAR_0->cyMinChild, 0);
    VAR_2 = VAR_0->cyMinChild + (VAR_2/VAR_0->cyIntegral) * VAR_0->cyIntegral;
    VAR_2 = FUNC_1(VAR_2, VAR_0->cyMaxChild);
    return VAR_2;
}
