
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {int offset; int bytes_left; int at_eof; int * data; } ;
struct ar_archive_zip_uncomp {TYPE_2__ input; } ;
struct TYPE_8__ {size_t data_left; } ;
struct TYPE_6__ {int stream; } ;
struct TYPE_9__ {TYPE_3__ progress; TYPE_1__ super; struct ar_archive_zip_uncomp uncomp; } ;
typedef TYPE_4__ ar_archive_zip ;


 size_t FUNC_0 (int ,int *,size_t) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static bool FUNC_3(ar_archive_zip *VAR_0)
{
    struct ar_archive_zip_uncomp *VAR_1 = &VAR_0->uncomp;
    size_t VAR_2;

    if (VAR_1->input.offset) {
        FUNC_1(&VAR_1->input.data[0], &VAR_1->input.data[VAR_1->input.offset], VAR_1->input.bytes_left);
        VAR_1->input.offset = 0;
    }
    VAR_2 = sizeof(VAR_1->input.data) - VAR_1->input.bytes_left;
    if (VAR_2 > VAR_0->progress.data_left)
        VAR_2 = VAR_0->progress.data_left;
    if (FUNC_0(VAR_0->super.stream, &VAR_1->input.data[VAR_1->input.bytes_left], VAR_2) != VAR_2) {
        FUNC_2("Unexpected EOF during decompression (invalid data size?)");
        return 0;
    }
    VAR_0->progress.data_left -= VAR_2;
    VAR_1->input.bytes_left += (uint16_t)VAR_2;
    VAR_1->input.at_eof = !VAR_0->progress.data_left;

    return 1;
}
