
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Long; scalar_t__ Short; } ;
struct TYPE_6__ {TYPE_1__ Name; int ShortName; } ;
struct TYPE_7__ {TYPE_2__ N; } ;
typedef TYPE_3__ IMAGE_SYMBOL ;


 int FUNC_0 (char*,int ,int) ;

__attribute__((used)) static const char* FUNC_1(const IMAGE_SYMBOL* VAR_0,
                                      const char* VAR_1)
{
    static char VAR_2[9];
    const char* VAR_3;

    if (VAR_0->N.Name.Short)
    {
        FUNC_0(VAR_2, VAR_0->N.ShortName, 8);
        VAR_2[8] = '\0';
        VAR_3 = &VAR_2[0];
    }
    else
    {
        VAR_3 = VAR_1 + VAR_0->N.Name.Long;
    }

    if (VAR_3[0] == '_') VAR_3++;
    return VAR_3;
}
