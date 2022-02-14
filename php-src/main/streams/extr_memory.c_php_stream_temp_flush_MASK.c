
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ innerstream; } ;
typedef TYPE_1__ php_stream_temp_data ;
struct TYPE_5__ {scalar_t__ abstract; } ;
typedef TYPE_2__ php_stream ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(php_stream *VAR_0)
{
 php_stream_temp_data *VAR_1 = (php_stream_temp_data*)VAR_0->abstract;
 FUNC_0(VAR_1 != ((void*)0));

 return VAR_1->innerstream ? FUNC_1(VAR_1->innerstream) : -1;
}
