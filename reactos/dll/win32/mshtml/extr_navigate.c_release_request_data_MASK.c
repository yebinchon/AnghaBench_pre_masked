
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ post_data; int headers; scalar_t__ post_stream; } ;
typedef TYPE_1__ request_data_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(request_data_t *VAR_0)
{
    if(VAR_0->post_stream)
        FUNC_2(VAR_0->post_stream);
    FUNC_1(VAR_0->headers);
    if(VAR_0->post_data)
        FUNC_0(VAR_0->post_data);
}
