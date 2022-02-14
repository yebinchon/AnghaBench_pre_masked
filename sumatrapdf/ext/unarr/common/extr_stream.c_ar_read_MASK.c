
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t (* read ) (int ,void*,size_t) ;int data; } ;
typedef TYPE_1__ ar_stream ;


 size_t FUNC_0 (int ,void*,size_t) ;

size_t FUNC_1(ar_stream *VAR_0, void *VAR_1, size_t VAR_2)
{
    return VAR_0->read(VAR_0->data, VAR_1, VAR_2);
}
