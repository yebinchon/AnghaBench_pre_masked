
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct lwan_value {char* value; size_t len; } ;
struct TYPE_12__ {char* value; size_t len; } ;
struct TYPE_9__ {int value; } ;
struct lwan_request_parser_helper {char* next_request; int error_when_n_packets; scalar_t__ error_when_time; TYPE_6__ post_data; TYPE_4__* buffer; TYPE_3__ content_length; } ;
struct lwan_request {TYPE_5__* conn; struct lwan_request_parser_helper* helper; } ;
struct lwan_config {size_t max_post_data_size; scalar_t__ keep_alive_timeout; int allow_post_temp_file; } ;
typedef scalar_t__ ptrdiff_t ;
typedef enum lwan_http_status { ____Placeholder_lwan_http_status } lwan_http_status ;
struct TYPE_11__ {int coro; TYPE_2__* thread; } ;
struct TYPE_10__ {char* value; int len; } ;
struct TYPE_8__ {TYPE_1__* lwan; } ;
struct TYPE_7__ {struct lwan_config config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 char* FUNC_1 (int ,size_t,int ) ;
 int FUNC_2 (size_t) ;
 char* FUNC_3 (char*,char*,size_t) ;
 long FUNC_4 (int ,int) ;
 int VAR_4 ;
 int FUNC_5 (struct lwan_request*,struct lwan_value*,size_t,int ) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static enum lwan_http_status FUNC_7(struct lwan_request *VAR_5)
{
    struct lwan_request_parser_helper *VAR_6 = VAR_5->helper;

    struct lwan_config *VAR_7 = &VAR_5->conn->thread->lwan->config;
    const size_t VAR_8 = VAR_7->max_post_data_size;
    char *VAR_9;
    long VAR_10;

    if (FUNC_0(!VAR_6->content_length.value))
        return VAR_0;
    VAR_10 = FUNC_4(VAR_6->content_length.value, -1);
    if (FUNC_0(VAR_10 < 0))
        return VAR_0;
    if (FUNC_0(VAR_10 >= (long)VAR_8))
        return VAR_3;

    size_t VAR_11 = (size_t)VAR_10;
    size_t VAR_12;
    if (!VAR_6->next_request) {
        VAR_12 = 0;
    } else {
        char *VAR_13 = VAR_6->buffer->value + VAR_6->buffer->len;
        VAR_12 = (size_t)(ptrdiff_t)(VAR_13 - VAR_6->next_request);

        if (VAR_12 >= VAR_11) {
            VAR_6->post_data.value = VAR_6->next_request;
            VAR_6->post_data.len = VAR_11;
            VAR_6->next_request += VAR_11;
            return VAR_2;
        }
    }

    VAR_9 = FUNC_1(VAR_5->conn->coro, VAR_11 + 1,
                                   VAR_7->allow_post_temp_file);
    if (FUNC_0(!VAR_9))
        return VAR_1;

    VAR_6->post_data.value = VAR_9;
    VAR_6->post_data.len = VAR_11;
    if (VAR_12) {
        VAR_9 = FUNC_3(VAR_9, VAR_6->next_request, VAR_12);
        VAR_11 -= VAR_12;
    }
    VAR_6->next_request = ((void*)0);

    VAR_6->error_when_time = FUNC_6(((void*)0)) + VAR_7->keep_alive_timeout;
    VAR_6->error_when_n_packets = FUNC_2(VAR_11);

    struct lwan_value VAR_14 = {.value = VAR_9,
                                .len = VAR_11};
    return FUNC_5(VAR_5, &VAR_14, VAR_14.len,
                                    VAR_4);
}
