
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int offset; int* buffer; int partial; int buf; } ;
typedef TYPE_1__ ge_GIF ;


 int FUNC_0 (int ,char) ;
 int FUNC_1 (int ,int*,int) ;

__attribute__((used)) static void FUNC_2(ge_GIF *VAR_0)
{
    int VAR_1;

    VAR_1 = VAR_0->offset / 8;
    if (VAR_0->offset % 8)
        VAR_0->buffer[VAR_1++] = VAR_0->partial & 0xFF;

    FUNC_0(VAR_0->buf, VAR_1);
    FUNC_1(VAR_0->buf, VAR_0->buffer, VAR_1);
    FUNC_0(VAR_0->buf, '\0');

    VAR_0->offset = VAR_0->partial = 0;
}
