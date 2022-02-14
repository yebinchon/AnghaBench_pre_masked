
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int context; int display; } ;
struct mp_filter {struct priv* priv; } ;
typedef int VAStatus ;
typedef int VABufferID ;


 scalar_t__ FUNC_0 (struct mp_filter*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int,int,void*,int *) ;

__attribute__((used)) static VABufferID FUNC_2(struct mp_filter *VAR_2, int VAR_3,
                                          int VAR_4, void *VAR_5)
{
    struct priv *VAR_6 = VAR_2->priv;
    VABufferID VAR_7;
    VAStatus VAR_8 = FUNC_1(VAR_6->display, VAR_6->context,
                                     VAR_0,
                                     VAR_3, VAR_4, VAR_5, &VAR_7);
    return FUNC_0(VAR_2, "vaCreateBuffer()") ? VAR_7 : VAR_1;
}
