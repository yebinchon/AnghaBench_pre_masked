
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t uint16_t ;
struct TYPE_4__ {size_t bytes_left; size_t offset; int * data; } ;
struct TYPE_3__ {int inflate; } ;
struct ar_archive_zip_uncomp {TYPE_2__ input; TYPE_1__ state; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int *,size_t*,void*,size_t*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static uint32_t FUNC_2(struct ar_archive_zip_uncomp *VAR_2, void *VAR_3, uint32_t VAR_4, bool VAR_5)
{
    size_t VAR_6 = VAR_2->input.bytes_left;
    size_t VAR_7 = VAR_4;

    int VAR_8 = FUNC_0(VAR_2->state.inflate, &VAR_2->input.data[VAR_2->input.offset], &VAR_6, VAR_3, &VAR_7);

    VAR_2->input.offset += VAR_2->input.bytes_left - (uint16_t)VAR_6;
    VAR_2->input.bytes_left = (uint16_t)VAR_6;

    if (VAR_8 && VAR_8 != VAR_0) {
        FUNC_1("Unexpected Inflate error %d", VAR_8);
        return VAR_1;
    }
    if (VAR_8 == VAR_0 && (!VAR_5 || VAR_7)) {
        FUNC_1("Premature EOS in Deflate stream");
        return VAR_1;
    }

    return VAR_4 - (uint32_t)VAR_7;
}
