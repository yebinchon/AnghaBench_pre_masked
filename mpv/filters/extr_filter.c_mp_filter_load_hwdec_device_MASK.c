
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_stream_info {int hwdec_devs; } ;
struct mp_filter {int dummy; } ;
struct AVBufferRef {int dummy; } ;


 struct AVBufferRef* FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 struct mp_stream_info* FUNC_2 (struct mp_filter*) ;

struct AVBufferRef *FUNC_3(struct mp_filter *VAR_0, int VAR_1)
{
    struct mp_stream_info *VAR_2 = FUNC_2(VAR_0);
    if (!VAR_2 || !VAR_2->hwdec_devs)
        return ((void*)0);

    FUNC_1(VAR_2->hwdec_devs);

    return FUNC_0(VAR_2->hwdec_devs, VAR_1);
}
