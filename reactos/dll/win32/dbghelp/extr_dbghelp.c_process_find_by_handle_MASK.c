
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct process {scalar_t__ handle; struct process* next; } ;
typedef scalar_t__ HANDLE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct process* VAR_1 ;

struct process* FUNC_1(HANDLE VAR_2)
{
    struct process* VAR_3;

    for (VAR_3 = VAR_1; VAR_3 && VAR_3->handle != VAR_2; VAR_3 = VAR_3->next);
    if (!VAR_3) FUNC_0(VAR_0);
    return VAR_3;
}
