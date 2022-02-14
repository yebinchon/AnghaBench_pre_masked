
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stream {int dummy; } ;
struct mpv_global {int dummy; } ;
struct mp_cancel {int dummy; } ;
struct TYPE_3__ {int len; int start; } ;
typedef TYPE_1__ bstr ;


 int FUNC_0 (struct stream*) ;
 int FUNC_1 (struct stream*) ;
 struct stream* FUNC_2 (struct mpv_global*,struct mp_cancel*,struct stream**,int) ;
 struct stream* FUNC_3 (struct mpv_global*,int ,int ) ;

__attribute__((used)) static struct stream *FUNC_4(struct mpv_global *VAR_0,
                                                   struct mp_cancel *VAR_1,
                                                   bstr VAR_2, struct stream *VAR_3)
{
    struct stream *VAR_4 = FUNC_3(VAR_0, VAR_2.start, VAR_2.len);
    FUNC_0(VAR_4);

    struct stream *VAR_5[2] = {VAR_4, VAR_3};
    struct stream *VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_5, 2);
    if (!VAR_6) {
        FUNC_1(VAR_4);
        FUNC_1(VAR_3);
    }
    return VAR_6;
}
