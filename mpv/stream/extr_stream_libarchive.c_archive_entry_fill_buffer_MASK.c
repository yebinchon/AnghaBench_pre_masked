
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct priv {TYPE_2__* mpa; } ;
struct TYPE_6__ {struct priv* priv; } ;
typedef TYPE_1__ stream_t ;
typedef int locale_t ;
struct TYPE_7__ {int arch; int locale; } ;


 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,void*,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(stream_t *VAR_0, void *VAR_1, int VAR_2)
{
    struct priv *VAR_3 = VAR_0->priv;
    if (!VAR_3->mpa)
        return 0;
    locale_t VAR_4 = FUNC_5(VAR_3->mpa->locale);
    int VAR_5 = FUNC_2(VAR_3->mpa->arch, VAR_1, VAR_2);
    if (VAR_5 < 0) {
        FUNC_0(VAR_0, "%s\n", FUNC_1(VAR_3->mpa->arch));
        if (FUNC_3(VAR_3->mpa, VAR_5)) {
            FUNC_4(VAR_3->mpa);
            VAR_3->mpa = ((void*)0);
        }
    }
    FUNC_5(VAR_4);
    return VAR_5;
}
