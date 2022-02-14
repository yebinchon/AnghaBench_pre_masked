
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
struct sockaddr_un {scalar_t__ sun_path; void* sun_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_12__ {size_t len; int * data; } ;
struct TYPE_9__ {int * data; int len; } ;
struct TYPE_8__ {int len; int * data; } ;
struct TYPE_13__ {char* err; int socklen; int naddrs; TYPE_5__ url; TYPE_4__* addrs; void* family; int sockaddr; TYPE_2__ host; TYPE_1__ uri; scalar_t__ uri_part; } ;
typedef TYPE_6__ ngx_url_t ;
typedef int ngx_pool_t ;
typedef int ngx_int_t ;
typedef int ngx_addr_t ;
struct TYPE_10__ {size_t len; int * data; } ;
struct TYPE_11__ {int socklen; TYPE_3__ name; struct sockaddr* sockaddr; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,size_t) ;
 void* FUNC_1 (int *,int) ;
 int * FUNC_2 (int *,int *,char) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_pool_t *VAR_3, ngx_url_t *VAR_4)
{
    VAR_4->err = "the unix domain sockets are not supported on this platform";

    return VAR_1;


}
