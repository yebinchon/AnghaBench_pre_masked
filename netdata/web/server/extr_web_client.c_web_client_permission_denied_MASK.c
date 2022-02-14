
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int code; TYPE_2__* data; } ;
struct web_client {TYPE_1__ response; } ;
struct TYPE_5__ {int contenttype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char*) ;

inline int FUNC_2(struct web_client *VAR_2) {
    VAR_2->response.data->contenttype = VAR_0;
    FUNC_0(VAR_2->response.data);
    FUNC_1(VAR_2->response.data, "You are not allowed to access this resource.");
    VAR_2->response.code = VAR_1;
    return VAR_1;
}
