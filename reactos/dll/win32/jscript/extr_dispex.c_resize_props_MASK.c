
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int buf_size; int prop_cnt; TYPE_2__* props; } ;
typedef TYPE_1__ jsdisp_t ;
struct TYPE_8__ {int bucket_head; int bucket_next; int hash; } ;
typedef TYPE_2__ dispex_prop_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static inline HRESULT FUNC_2(jsdisp_t *VAR_3)
{
    dispex_prop_t *VAR_4;
    int VAR_5, VAR_6;

    if(VAR_3->buf_size != VAR_3->prop_cnt)
        return VAR_1;

    VAR_4 = FUNC_1(VAR_3->props, sizeof(dispex_prop_t)*VAR_3->buf_size*2);
    if(!VAR_4)
        return VAR_0;
    VAR_3->buf_size *= 2;
    VAR_3->props = VAR_4;

    for(VAR_5=0; VAR_5<VAR_3->buf_size; VAR_5++) {
        VAR_3->props[VAR_5].bucket_head = 0;
        VAR_3->props[VAR_5].bucket_next = 0;
    }

    for(VAR_5=1; VAR_5<VAR_3->prop_cnt; VAR_5++) {
        VAR_4 = VAR_3->props+VAR_5;

        VAR_6 = FUNC_0(VAR_3, VAR_4->hash);
        VAR_4->bucket_next = VAR_3->props[VAR_6].bucket_head;
        VAR_3->props[VAR_6].bucket_head = VAR_5;
    }

    return VAR_2;
}
