
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int task_header_t ;
typedef int http_request_t ;
struct TYPE_3__ {scalar_t__ hdr; } ;
struct TYPE_4__ {int context; int flags; TYPE_1__ hdr; } ;
typedef TYPE_2__ end_request_task_t ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (char*,int *) ;

__attribute__((used)) static void FUNC_2(task_header_t *VAR_0)
{
    end_request_task_t *VAR_1 = (end_request_task_t*)VAR_0;
    http_request_t *VAR_2 = (http_request_t*)VAR_1->hdr.hdr;

    FUNC_1("%p\n", VAR_2);

    FUNC_0(VAR_2, VAR_1->flags, VAR_1->context);
}
