
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ content_read; int data_stream; } ;
struct TYPE_5__ {int read_gzip; TYPE_1__ netconn_stream; scalar_t__ read_size; scalar_t__ read_pos; int * data_stream; } ;
typedef TYPE_2__ http_request_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(http_request_t *VAR_1)
{
    FUNC_0(VAR_1->data_stream);
    VAR_1->data_stream = &VAR_1->netconn_stream.data_stream;
    VAR_1->read_pos = VAR_1->read_size = VAR_1->netconn_stream.content_read = 0;
    VAR_1->read_gzip = VAR_0;
}
