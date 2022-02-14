
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sb; } ;
typedef TYPE_1__ php_stream_statbuf ;
struct TYPE_7__ {scalar_t__ abstract; } ;
typedef TYPE_2__ php_stream ;
struct TYPE_8__ {int socket; } ;
typedef TYPE_3__ php_netstream_data_t ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(php_stream *VAR_0, php_stream_statbuf *VAR_1)
{



 php_netstream_data_t *VAR_2 = (php_netstream_data_t*)VAR_0->abstract;

 return FUNC_0(VAR_2->socket, &VAR_1->sb);

}
