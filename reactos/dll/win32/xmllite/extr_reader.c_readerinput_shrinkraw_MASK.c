
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* buffer; } ;
typedef TYPE_2__ xmlreaderinput ;
struct TYPE_8__ {int data; int cur; int written; } ;
typedef TYPE_3__ encoded_buffer ;
struct TYPE_6__ {TYPE_3__ encoded; } ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(xmlreaderinput *VAR_0, int VAR_1)
{
    encoded_buffer *VAR_2 = &VAR_0->buffer->encoded;

    if (VAR_1 == -1)
        VAR_1 = FUNC_1(VAR_0);

    FUNC_0(VAR_2->data, VAR_2->data + VAR_2->cur + (VAR_2->written - VAR_1), VAR_1);

    VAR_2->written -= VAR_1 + VAR_2->cur;


    VAR_2->cur = 0;
}
