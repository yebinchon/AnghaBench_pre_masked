
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mp_decoder_list {int dummy; } ;
typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;
struct TYPE_4__ {int type; int long_name; int name; int id; } ;
typedef TYPE_1__ AVCodec ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 TYPE_1__* FUNC_1 (void**) ;
 int FUNC_2 (struct mp_decoder_list*,int ,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct mp_decoder_list *VAR_1, enum AVMediaType VAR_2,
                       bool VAR_3)
{
    void *VAR_4 = ((void*)0);
    for (;;) {
        const AVCodec *VAR_5 = FUNC_1(&VAR_4);
        if (!VAR_5)
            break;
        if (FUNC_0(VAR_5) == VAR_3 &&
            (VAR_2 == VAR_0 || VAR_5->type == VAR_2))
        {
            FUNC_2(VAR_1, FUNC_3(VAR_5->id),
                           VAR_5->name, VAR_5->long_name);
        }
    }
}
