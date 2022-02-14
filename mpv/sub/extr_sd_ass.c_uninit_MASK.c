
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd_ass_priv {int ass_library; int shadow_track; int ass_track; scalar_t__ converter; } ;
struct sd {struct sd_ass_priv* priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sd*,int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct sd *VAR_0)
{
    struct sd_ass_priv *VAR_1 = VAR_0->priv;

    if (VAR_1->converter)
        FUNC_3(VAR_1->converter);
    FUNC_0(VAR_1->ass_track);
    FUNC_0(VAR_1->shadow_track);
    FUNC_2(VAR_0, 0);
    FUNC_1(VAR_1->ass_library);
}
