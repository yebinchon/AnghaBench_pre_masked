
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* buffer; } ;
typedef TYPE_2__ xmlreaderinput ;
struct TYPE_8__ {int written; int cur; } ;
typedef TYPE_3__ encoded_buffer ;
struct TYPE_6__ {scalar_t__ code_page; TYPE_3__ encoded; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(xmlreaderinput *VAR_1)
{
    encoded_buffer *VAR_2 = &VAR_1->buffer->encoded;
    int VAR_3;

    if (VAR_1->buffer->code_page == VAR_0)
        VAR_3 = FUNC_1(VAR_1);
    else
        VAR_3 = VAR_2->written;

    FUNC_0("%d\n", VAR_3 - VAR_2->cur);
    return VAR_3 - VAR_2->cur;
}
