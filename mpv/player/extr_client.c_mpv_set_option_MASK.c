
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct mpv_node {int u; scalar_t__ format; } ;
struct m_option {TYPE_2__* type; } ;
struct TYPE_9__ {TYPE_1__* mpctx; } ;
typedef TYPE_3__ mpv_handle ;
typedef scalar_t__ mpv_format ;
struct TYPE_8__ {int size; } ;
struct TYPE_7__ {int mconfig; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;




 int FUNC_0 (char const*) ;
 struct m_option* FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int ,void*,int ) ;
 int FUNC_4 (int *,void*,int ) ;
 int FUNC_5 (TYPE_3__*) ;

int FUNC_6(mpv_handle *VAR_4, const char *VAR_5, mpv_format VAR_6,
                   void *VAR_7)
{
    const struct m_option *VAR_8 = FUNC_1(VAR_6);
    if (!VAR_8)
        return VAR_1;
    struct mpv_node VAR_9;
    if (VAR_6 != VAR_3) {
        VAR_9.format = VAR_6;
        FUNC_4(&VAR_9.u, VAR_7, VAR_8->type->size);
        VAR_7 = &VAR_9;
    }
    FUNC_2(VAR_4);
    int VAR_10 = FUNC_3(VAR_4->mpctx->mconfig, FUNC_0(VAR_5), VAR_7, 0);
    FUNC_5(VAR_4);
    switch (VAR_10) {
    case 130:
    case 131:
        return VAR_0;
    case 129:
        return VAR_1;
    case 128:
        return VAR_2;
    default:
        if (VAR_10 >= 0)
            return 0;
        return VAR_0;
    }
}
