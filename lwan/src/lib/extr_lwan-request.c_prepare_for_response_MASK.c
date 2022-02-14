
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int password_file; int realm; } ;
struct lwan_url_map {scalar_t__ prefix_len; int flags; TYPE_1__ authorization; } ;
struct TYPE_4__ {char* value; scalar_t__ len; } ;
struct lwan_request {TYPE_2__ url; } ;
typedef enum lwan_http_status { ____Placeholder_lwan_http_status } lwan_http_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct lwan_request*,int ,int ) ;
 scalar_t__ FUNC_2 (struct lwan_request*) ;
 int FUNC_3 (struct lwan_request*) ;
 int FUNC_4 (struct lwan_request*) ;

__attribute__((used)) static enum lwan_http_status FUNC_5(struct lwan_url_map *VAR_7,
                                                  struct lwan_request *VAR_8)
{
    VAR_8->url.value += VAR_7->prefix_len;
    VAR_8->url.len -= VAR_7->prefix_len;

    if (FUNC_0(VAR_7->flags & VAR_1 &&
                 !FUNC_1(VAR_8, VAR_7->authorization.realm,
                                      VAR_7->authorization.password_file)))
        return VAR_4;

    while (*VAR_8->url.value == '/' && VAR_8->url.len > 0) {
        VAR_8->url.value++;
        VAR_8->url.len--;
    }

    if (VAR_7->flags & VAR_2)
        FUNC_3(VAR_8);

    if (FUNC_2(VAR_8) == VAR_6) {
        enum lwan_http_status VAR_9;

        if (!(VAR_7->flags & VAR_0)) {





            return VAR_3;
        }

        VAR_9 = FUNC_4(VAR_8);
        if (FUNC_0(VAR_9 != VAR_5))
            return VAR_9;
    }

    return VAR_5;
}
