
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct redir_cache_data {int redir_to; } ;
struct lwan_request {int dummy; } ;
struct lwan_key_value {char* key; int value; } ;
struct file_cache_entry {struct redir_cache_data redir_cache_data; } ;
typedef enum lwan_http_status { ____Placeholder_lwan_http_status } lwan_http_status ;


 int VAR_0 ;
 int FUNC_0 (struct lwan_request*,struct file_cache_entry*,struct lwan_key_value const*,int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static enum lwan_http_status FUNC_2(struct lwan_request *VAR_1,
                                         void *VAR_2)
{
    struct file_cache_entry *VAR_3 = VAR_2;
    struct redir_cache_data *VAR_4 = &VAR_3->redir_cache_data;
    const struct lwan_key_value VAR_5 = {.key = "Location",
                                           .value = VAR_4->redir_to};

    return FUNC_0(VAR_1, VAR_3, &VAR_5, VAR_4->redir_to,
                        FUNC_1(VAR_4->redir_to), VAR_0);
}
