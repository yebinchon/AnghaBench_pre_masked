
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct QueueElement {unsigned int m_data; struct QueueElement* m_next; } ;
struct Queue {struct QueueElement* m_tail; struct QueueElement* m_head; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;

void
FUNC_3(struct Queue *VAR_1, unsigned VAR_2)
{
    struct QueueElement *VAR_3;

    VAR_3 = (struct QueueElement *)FUNC_2(sizeof (struct QueueElement));
    if (VAR_3 == ((void*)0)) {
        FUNC_1(VAR_0, "%s: out of memory error\n", "smack");
        FUNC_0(1);
    }

    if (VAR_1->m_head == ((void*)0)) {


        VAR_1->m_head = VAR_3;
    } else {

        VAR_1->m_tail->m_next = VAR_3;
    }

    VAR_3->m_data = VAR_2;
    VAR_3->m_next = ((void*)0);
    VAR_1->m_tail = VAR_3;
}
