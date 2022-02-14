
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int qf_refcount; } ;
typedef TYPE_1__ qf_info_T ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (TYPE_1__*,int ,size_t) ;

__attribute__((used)) static qf_info_T *
FUNC_2()
{
    qf_info_T *VAR_0;

    VAR_0 = (qf_info_T *)FUNC_0((unsigned)sizeof(qf_info_T));
    if (VAR_0 != ((void*)0))
    {
 FUNC_1(VAR_0, 0, (size_t)(sizeof(qf_info_T)));
 VAR_0->qf_refcount++;
    }

    return VAR_0;
}
