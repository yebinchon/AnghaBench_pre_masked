
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int off64_t ;
struct TYPE_3__ {int data; int (* tell ) (int ) ;} ;
typedef TYPE_1__ ar_stream ;


 int FUNC_0 (int ) ;

off64_t FUNC_1(ar_stream *VAR_0)
{
    return VAR_0->tell(VAR_0->data);
}
