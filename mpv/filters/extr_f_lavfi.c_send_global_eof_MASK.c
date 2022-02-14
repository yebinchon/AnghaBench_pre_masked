
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lavfi_pad {int buffer_is_eof; int buffer; } ;
struct lavfi {int num_in_pads; struct lavfi_pad** in_pads; } ;


 int FUNC_0 (struct lavfi*,char*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct lavfi *VAR_0)
{
    for (int VAR_1 = 0; VAR_1 < VAR_0->num_in_pads; VAR_1++) {
        struct lavfi_pad *VAR_2 = VAR_0->in_pads[VAR_1];
        if (!VAR_2->buffer || VAR_2->buffer_is_eof)
            continue;

        if (FUNC_1(VAR_2->buffer, ((void*)0)) < 0)
            FUNC_0(VAR_0, "could not send EOF to filter\n");

        VAR_2->buffer_is_eof = 1;
    }
}
