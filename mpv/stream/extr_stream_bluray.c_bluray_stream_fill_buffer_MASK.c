
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bluray_priv_s {int bd; } ;
struct TYPE_4__ {struct bluray_priv_s* priv; } ;
typedef TYPE_1__ stream_t ;
typedef int BD_EVENT ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,void*,int) ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_3(stream_t *VAR_0, void *VAR_1, int VAR_2)
{
    struct bluray_priv_s *VAR_3 = VAR_0->priv;
    BD_EVENT VAR_4;
    while (FUNC_0(VAR_3->bd, &VAR_4))
        FUNC_2(VAR_0, &VAR_4);
    return FUNC_1(VAR_3->bd, VAR_1, VAR_2);
}
