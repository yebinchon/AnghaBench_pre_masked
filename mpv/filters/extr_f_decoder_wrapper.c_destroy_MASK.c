
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priv {int decoded_coverart; TYPE_1__* decoder; } ;
struct mp_filter {struct priv* priv; } ;
struct TYPE_2__ {int f; } ;


 int FUNC_0 (struct mp_filter*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mp_filter*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct mp_filter *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    if (VAR_1->decoder) {
        FUNC_0(VAR_0, "Uninit decoder.\n");
        FUNC_3(VAR_1->decoder->f);
        VAR_1->decoder = ((void*)0);
    }
    FUNC_2(VAR_0);
    FUNC_1(&VAR_1->decoded_coverart);
}
