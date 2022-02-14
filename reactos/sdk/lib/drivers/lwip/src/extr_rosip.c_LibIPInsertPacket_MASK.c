
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32_t ;
struct pbuf {scalar_t__ tot_len; scalar_t__ len; int payload; } ;
struct TYPE_3__ {int (* input ) (struct pbuf*,TYPE_1__*) ;} ;
typedef TYPE_1__* PNETIF ;


 int FUNC_0 (void const* const) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,void const* const,scalar_t__ const) ;
 struct pbuf* FUNC_2 (int ,scalar_t__ const,int ) ;
 int FUNC_3 (struct pbuf*,TYPE_1__*) ;

void
FUNC_4(void *VAR_2,
                  const void *const VAR_3,
                  const u32_t VAR_4)
{
    struct pbuf *VAR_5;

    FUNC_0(VAR_2);
    FUNC_0(VAR_3);
    FUNC_0(VAR_4 > 0);

    VAR_5 = FUNC_2(VAR_1, VAR_4, VAR_0);
    if (VAR_5)
    {
        FUNC_0(VAR_5->tot_len == VAR_5->len);
        FUNC_0(VAR_5->len == VAR_4);

        FUNC_1(VAR_5->payload, VAR_3, VAR_5->len);

        ((PNETIF)VAR_2)->input(VAR_5, (PNETIF)VAR_2);
    }
}
