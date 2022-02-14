
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_4__ {int len; char* buf; } ;
typedef TYPE_1__ strbuf_t ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,char,int) ;
 int FUNC_1 (int *,TYPE_1__*,char) ;

__attribute__((used)) static BOOL FUNC_2(stream_t *VAR_2, strbuf_t *VAR_3)
{
    int VAR_4 = 0, VAR_5 = VAR_3->len;
    char *VAR_6;

    while(1)
    {
        if(!FUNC_1(VAR_2, VAR_3, '>'))
            return VAR_0;
        if(VAR_3->len == 0)
            break;
        VAR_6 = &VAR_3->buf[VAR_5];
        while((VAR_6 = FUNC_0(VAR_6+1, '"', VAR_3->len-(VAR_6+1-VAR_3->buf))) != ((void*)0))
            VAR_4++;
        VAR_5 = VAR_3->len;
        if(VAR_4 % 2 != 0)
        {
            if(!FUNC_1(VAR_2, VAR_3, '"'))
                return VAR_0;
            VAR_4++;
        }
        else
            break;
    }
    return VAR_1;
}
