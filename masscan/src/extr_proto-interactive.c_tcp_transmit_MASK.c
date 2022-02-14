
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct InteractiveData {unsigned int m_length; int is_payload_dynamic; void const* m_payload; } ;


 unsigned int VAR_0 ;

void
FUNC_0(struct InteractiveData *VAR_1, const void *VAR_2, size_t VAR_3, unsigned VAR_4)
{
    VAR_1->m_payload = VAR_2;
    VAR_1->m_length = (unsigned)VAR_3;

    if (VAR_4 & VAR_0)
        VAR_1->is_payload_dynamic = 1;
}
