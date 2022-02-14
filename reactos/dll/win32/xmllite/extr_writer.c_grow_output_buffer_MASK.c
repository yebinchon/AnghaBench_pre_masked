
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct output_buffer {int allocated; int written; char* data; } ;
struct TYPE_4__ {struct output_buffer buffer; } ;
typedef TYPE_1__ xmlwriteroutput ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 char* FUNC_1 (TYPE_1__*,char*,int) ;

__attribute__((used)) static HRESULT FUNC_2(xmlwriteroutput *VAR_2, int VAR_3)
{
    struct output_buffer *VAR_4 = &VAR_2->buffer;

    if (VAR_4->allocated < VAR_4->written + VAR_3 + 4) {
        int VAR_5 = FUNC_0(2*VAR_4->allocated, VAR_4->allocated + VAR_3);
        char *VAR_6 = FUNC_1(VAR_2, VAR_4->data, VAR_5);
        if (!VAR_6) return VAR_0;
        VAR_4->data = VAR_6;
        VAR_4->allocated = VAR_5;
    }

    return VAR_1;
}
