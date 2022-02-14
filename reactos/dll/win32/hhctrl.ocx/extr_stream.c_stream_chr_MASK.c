
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t p; size_t size; char* buf; int str; } ;
typedef TYPE_1__ stream_t ;
typedef int strbuf_t ;
typedef size_t ULONG ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,size_t*) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,size_t) ;

__attribute__((used)) static BOOL FUNC_2(stream_t *VAR_2, strbuf_t *VAR_3, char VAR_4)
{
    BOOL VAR_5 = VAR_1;
    ULONG VAR_6;

    while(VAR_5) {
        for(VAR_6=VAR_2->p; VAR_6<VAR_2->size; VAR_6++) {
            if(VAR_2->buf[VAR_6] == VAR_4) {
                VAR_5 = VAR_0;
                break;
            }
        }

        if(VAR_3 && VAR_6 > VAR_2->p)
            FUNC_1(VAR_3, VAR_2->buf+VAR_2->p, VAR_6-VAR_2->p);
        VAR_2->p = VAR_6;

        if(VAR_2->p == VAR_2->size) {
            VAR_2->p = 0;
            FUNC_0(VAR_2->str, VAR_2->buf, sizeof(VAR_2->buf), &VAR_2->size);
            if(!VAR_2->size)
                break;
        }
    }

    return VAR_2->size != 0;
}
