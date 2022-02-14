
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* data; } ;
struct web_client {TYPE_1__ response; } ;
struct TYPE_5__ {int contenttype; } ;
typedef int RRDHOST ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*) ;

inline int FUNC_2(RRDHOST *VAR_2, struct web_client *VAR_3, char *VAR_4) {
    (void)VAR_4;

    FUNC_0(VAR_3->response.data);
    VAR_3->response.data->contenttype = VAR_0;
    FUNC_1(VAR_2, VAR_3->response.data);
    return VAR_1;
}
