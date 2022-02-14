
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct QueueElement {unsigned int m_data; struct QueueElement* m_next; } ;
struct Queue {struct QueueElement* m_head; } ;


 int FUNC_0 (struct QueueElement*) ;

unsigned
FUNC_1(struct Queue *VAR_0)
{
    if (VAR_0->m_head == ((void*)0))
        return 0;
    else {
        struct QueueElement *VAR_1;
        unsigned VAR_2;

        VAR_1 = VAR_0->m_head;
        VAR_2 = VAR_1->m_data;
        VAR_0->m_head = VAR_1->m_next;

        FUNC_0(VAR_1);
        return VAR_2;
    }
}
