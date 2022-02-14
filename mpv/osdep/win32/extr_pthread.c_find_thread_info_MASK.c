
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_thread_info {scalar_t__ id; } ;
typedef scalar_t__ DWORD ;


 struct m_thread_info* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct m_thread_info *FUNC_0(DWORD VAR_2)
{
    for (int VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        if (VAR_2 == VAR_0[VAR_3].id)
            return &VAR_0[VAR_3];
    }
    return ((void*)0);
}
