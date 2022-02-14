
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ByteReader {TYPE_2__* input; TYPE_3__* zip; } ;
struct TYPE_4__ {int data_left; } ;
struct TYPE_6__ {TYPE_1__ progress; } ;
struct TYPE_5__ {int* data; int offset; int bytes_left; } ;
typedef int Byte ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static Byte FUNC_1(void *VAR_0)
{
    struct ByteReader *VAR_1 = VAR_0;
    if (!VAR_1->input->bytes_left && (!VAR_1->zip->progress.data_left || !FUNC_0(VAR_1->zip)))
        return 0xFF;
    VAR_1->input->bytes_left--;
    return VAR_1->input->data[VAR_1->input->offset++];
}
