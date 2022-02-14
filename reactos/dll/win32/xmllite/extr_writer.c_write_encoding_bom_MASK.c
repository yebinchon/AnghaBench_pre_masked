
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bomwritten; TYPE_3__* output; int bom; } ;
typedef TYPE_1__ xmlwriter ;
typedef int utf16bom ;
struct output_buffer {scalar_t__ written; scalar_t__ data; } ;
struct TYPE_5__ {scalar_t__ encoding; struct output_buffer buffer; } ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (scalar_t__,char const*,int) ;

__attribute__((used)) static HRESULT FUNC_3(xmlwriter *VAR_3)
{
    if (!VAR_3->bom || VAR_3->bomwritten) return VAR_0;

    if (VAR_3->output->encoding == VAR_2) {
        static const char VAR_4[] = {0xff, 0xfe};
        struct output_buffer *VAR_5 = &VAR_3->output->buffer;
        int VAR_6 = sizeof(VAR_4);
        HRESULT VAR_7;

        VAR_7 = FUNC_1(VAR_3->output, VAR_6);
        if (FUNC_0(VAR_7)) return VAR_7;
        FUNC_2(VAR_5->data + VAR_5->written, VAR_4, VAR_6);
        VAR_5->written += VAR_6;
    }

    VAR_3->bomwritten = VAR_1;
    return VAR_0;
}
