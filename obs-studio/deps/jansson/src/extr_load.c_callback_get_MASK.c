
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t pos; size_t len; size_t (* callback ) (char*,int ,int ) ;char* data; int arg; } ;
typedef TYPE_1__ callback_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_2)
{
    char VAR_3;
    callback_data_t *VAR_4 = VAR_2;

    if(VAR_4->pos >= VAR_4->len) {
        VAR_4->pos = 0;
        VAR_4->len = VAR_4->callback(VAR_4->data, VAR_1, VAR_4->arg);
        if(VAR_4->len == 0 || VAR_4->len == (size_t)-1)
            return VAR_0;
    }

    VAR_3 = VAR_4->data[VAR_4->pos];
    VAR_4->pos++;
    return (unsigned char)VAR_3;
}
