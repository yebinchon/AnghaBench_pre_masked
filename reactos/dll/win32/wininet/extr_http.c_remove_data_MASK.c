
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int read_size; scalar_t__ read_pos; } ;
typedef TYPE_1__ http_request_t ;



__attribute__((used)) static void FUNC_0( http_request_t *VAR_0, int VAR_1 )
{
    if (!(VAR_0->read_size -= VAR_1)) VAR_0->read_pos = 0;
    else VAR_0->read_pos += VAR_1;
}
