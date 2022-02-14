
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lwan_config {int config_file_path; } ;
struct TYPE_2__ {int request_flags; scalar_t__ allow_cors; scalar_t__ proxy_protocol; } ;
struct lwan {TYPE_1__ config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct lwan*) ;
 int FUNC_2 (struct lwan*,int ) ;

__attribute__((used)) static void FUNC_3(struct lwan *VAR_2,
                                  const struct lwan_config *VAR_3)
{
    if (!FUNC_2(VAR_2, VAR_3->config_file_path)) {
        if (VAR_3->config_file_path) {
            FUNC_0("Could not read config file: %s",
                                 VAR_3->config_file_path);
        }
    }

    FUNC_1(VAR_2);

    VAR_2->config.request_flags =
        (VAR_2->config.proxy_protocol ? VAR_1 : 0) |
        (VAR_2->config.allow_cors ? VAR_0 : 0);
}
