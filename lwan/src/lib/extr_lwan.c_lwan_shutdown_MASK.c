
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int config_file_path; int error_template; int listener; } ;
struct lwan {int conns; int url_map_trie; TYPE_1__ config; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct lwan*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct lwan*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct lwan*) ;
 int FUNC_9 () ;
 int FUNC_10 (struct lwan*) ;
 int FUNC_11 (int *) ;

void FUNC_12(struct lwan *VAR_0)
{
    FUNC_7("Shutting down");

    FUNC_0(VAR_0->config.listener);
    FUNC_0(VAR_0->config.error_template);
    FUNC_0(VAR_0->config.config_file_path);

    FUNC_3();
    FUNC_10(VAR_0);

    FUNC_6("Shutting down URL handlers");
    FUNC_11(&VAR_0->url_map_trie);

    FUNC_0(VAR_0->conns);

    FUNC_5(VAR_0);
    FUNC_9();
    FUNC_8(VAR_0);
    FUNC_2();
    FUNC_4();
    FUNC_1(VAR_0);
}
