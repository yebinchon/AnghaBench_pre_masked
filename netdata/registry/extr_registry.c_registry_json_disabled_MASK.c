
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
struct web_client {TYPE_1__ response; } ;
struct TYPE_4__ {int registry_to_announce; } ;
typedef int RRDHOST ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (struct web_client*) ;
 int FUNC_2 (int *,struct web_client*,char const*,int ) ;

__attribute__((used)) static inline int FUNC_3(RRDHOST *VAR_2, struct web_client *VAR_3, const char *VAR_4) {
    FUNC_2(VAR_2, VAR_3, VAR_4, VAR_0);

    FUNC_0(VAR_3->response.data, ",\n\t\"registry\": \"%s\"",
            VAR_1.registry_to_announce);

    FUNC_1(VAR_3);
    return 200;
}
