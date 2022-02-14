
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct serve_files_priv {int cache; } ;
struct TYPE_10__ {int * callback; struct file_cache_entry* data; } ;
struct lwan_response {TYPE_5__ stream; int mime_type; } ;
struct TYPE_7__ {int value; } ;
struct lwan_request {int flags; TYPE_2__ url; TYPE_1__* conn; } ;
struct TYPE_8__ {int integer; } ;
struct file_cache_entry {TYPE_4__* funcs; int mime_type; TYPE_3__ last_modified; } ;
struct cache_entry {int dummy; } ;
typedef enum lwan_http_status { ____Placeholder_lwan_http_status } lwan_http_status ;
struct TYPE_9__ {int * serve; } ;
struct TYPE_6__ {int coro; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 struct cache_entry* FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct lwan_request*,int ) ;

__attribute__((used)) static enum lwan_http_status
FUNC_3(struct lwan_request *VAR_4,
                           struct lwan_response *VAR_5,
                           void *VAR_6)
{
    struct serve_files_priv *VAR_7 = VAR_6;
    enum lwan_http_status VAR_8;
    struct file_cache_entry *VAR_9;
    struct cache_entry *VAR_10;

    VAR_10 = FUNC_1(VAR_7->cache, VAR_4->conn->coro,
                                      VAR_4->url.value);
    if (FUNC_0(!VAR_10)) {
        VAR_8 = VAR_0;
        goto out;
    }

    VAR_9 = (struct file_cache_entry *)VAR_10;
    if (FUNC_2(VAR_4, VAR_9->last_modified.integer)) {
        VAR_8 = VAR_1;
        goto out;
    }

    VAR_5->mime_type = VAR_9->mime_type;
    VAR_5->stream.callback = VAR_9->funcs->serve;
    VAR_5->stream.data = VAR_9;

    VAR_4->flags |= VAR_3;

    return VAR_2;

out:
    VAR_5->stream.callback = ((void*)0);
    return VAR_8;
}
