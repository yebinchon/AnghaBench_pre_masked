
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* data; size_t pos; } ;
typedef TYPE_1__ string_data_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(void *VAR_1)
{
    char VAR_2;
    string_data_t *VAR_3 = (string_data_t *)VAR_1;
    VAR_2 = VAR_3->data[VAR_3->pos];
    if(VAR_2 == '\0')
        return VAR_0;
    else
    {
        VAR_3->pos++;
        return (unsigned char)VAR_2;
    }
}
