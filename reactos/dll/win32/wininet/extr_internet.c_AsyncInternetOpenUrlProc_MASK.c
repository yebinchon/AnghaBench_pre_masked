
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int task_header_t ;
struct TYPE_3__ {scalar_t__ hdr; } ;
struct TYPE_4__ {int headers; int url; int context; int flags; int headers_len; TYPE_1__ hdr; } ;
typedef TYPE_2__ open_url_task_t ;
typedef int appinfo_t ;


 int FUNC_0 (int *,int ,int ,int ,int ,int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(task_header_t *VAR_0)
{
    open_url_task_t *VAR_1 = (open_url_task_t*)VAR_0;

    FUNC_1("%p\n", VAR_1->hdr.hdr);

    FUNC_0((appinfo_t*)VAR_1->hdr.hdr, VAR_1->url, VAR_1->headers,
            VAR_1->headers_len, VAR_1->flags, VAR_1->context);
    FUNC_2(VAR_1->url);
    FUNC_2(VAR_1->headers);
}
