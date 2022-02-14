
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int next_upstream; int * upstream; int buffer_size; int next_upstream_timeout; int read_timeout; int send_timeout; int connect_timeout; int next_upstream_tries; int socket_keepalive; int local; } ;
struct TYPE_4__ {scalar_t__ index; int gzip_flag; TYPE_1__ upstream; } ;
typedef TYPE_2__ ngx_http_memcached_loc_conf_t ;
typedef int ngx_conf_t ;


 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,size_t) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static char *
FUNC_6(ngx_conf_t *VAR_7, void *VAR_8, void *VAR_9)
{
    ngx_http_memcached_loc_conf_t *VAR_10 = VAR_8;
    ngx_http_memcached_loc_conf_t *VAR_11 = VAR_9;

    FUNC_2(VAR_11->upstream.local,
                              VAR_10->upstream.local, ((void*)0));

    FUNC_5(VAR_11->upstream.socket_keepalive,
                              VAR_10->upstream.socket_keepalive, 0);

    FUNC_4(VAR_11->upstream.next_upstream_tries,
                              VAR_10->upstream.next_upstream_tries, 0);

    FUNC_1(VAR_11->upstream.connect_timeout,
                              VAR_10->upstream.connect_timeout, 60000);

    FUNC_1(VAR_11->upstream.send_timeout,
                              VAR_10->upstream.send_timeout, 60000);

    FUNC_1(VAR_11->upstream.read_timeout,
                              VAR_10->upstream.read_timeout, 60000);

    FUNC_1(VAR_11->upstream.next_upstream_timeout,
                              VAR_10->upstream.next_upstream_timeout, 0);

    FUNC_3(VAR_11->upstream.buffer_size,
                              VAR_10->upstream.buffer_size,
                              (size_t) VAR_6);

    FUNC_0(VAR_11->upstream.next_upstream,
                              VAR_10->upstream.next_upstream,
                              (VAR_0
                               |VAR_3
                               |VAR_5));

    if (VAR_11->upstream.next_upstream & VAR_4) {
        VAR_11->upstream.next_upstream = VAR_0
                                       |VAR_4;
    }

    if (VAR_11->upstream.upstream == ((void*)0)) {
        VAR_11->upstream.upstream = VAR_10->upstream.upstream;
    }

    if (VAR_11->index == VAR_2) {
        VAR_11->index = VAR_10->index;
    }

    FUNC_4(VAR_11->gzip_flag, VAR_10->gzip_flag, 0);

    return VAR_1;
}
