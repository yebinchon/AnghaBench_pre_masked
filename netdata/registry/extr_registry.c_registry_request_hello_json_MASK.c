
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
struct web_client {TYPE_1__ response; } ;
struct TYPE_4__ {int cloud_base_url; int registry_to_announce; } ;
typedef int RRDHOST ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,char*) ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (struct web_client*) ;
 int FUNC_2 (int *,struct web_client*,char*,int ) ;

int FUNC_3(RRDHOST *VAR_3, struct web_client *VAR_4) {
    FUNC_2(VAR_3, VAR_4, "hello", VAR_0);

    FUNC_0(VAR_4->response.data,
            ",\n\t\"registry\": \"%s\",\n\t\"cloud_base_url\": \"%s\",\n\t\"anonymous_statistics\": %s",
            VAR_2.registry_to_announce,
            VAR_2.cloud_base_url, VAR_1?"true":"false");

    FUNC_1(VAR_4);
    return 200;
}
