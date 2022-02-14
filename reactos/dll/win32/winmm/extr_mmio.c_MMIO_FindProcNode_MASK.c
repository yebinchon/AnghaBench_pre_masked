
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct IOProcList {scalar_t__ fourCC; struct IOProcList* pNext; } ;
typedef scalar_t__ FOURCC ;


 struct IOProcList* VAR_0 ;

__attribute__((used)) static struct IOProcList* FUNC_0(FOURCC VAR_1)
{
    struct IOProcList* VAR_2;

    for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->pNext) {
 if (VAR_2->fourCC == VAR_1) {
     return VAR_2;
 }
    }
    return ((void*)0);
}
