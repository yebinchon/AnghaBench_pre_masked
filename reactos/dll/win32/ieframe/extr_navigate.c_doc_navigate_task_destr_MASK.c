
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int task_header_t ;
struct TYPE_3__ {scalar_t__ post_data; int headers; int url; } ;
typedef TYPE_1__ task_doc_navigate_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(task_header_t *VAR_0)
{
    task_doc_navigate_t *VAR_1 = (task_doc_navigate_t*)VAR_0;

    FUNC_1(VAR_1->url);
    FUNC_1(VAR_1->headers);
    if(VAR_1->post_data)
        FUNC_0(VAR_1->post_data);
    FUNC_2(VAR_1);
}
