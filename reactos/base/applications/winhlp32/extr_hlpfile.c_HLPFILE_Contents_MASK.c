
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_4__ {int * first_page; int contents_start; } ;
typedef int HLPFILE_PAGE ;
typedef TYPE_1__ HLPFILE ;


 int * FUNC_0 (TYPE_1__*,int ,scalar_t__*) ;

__attribute__((used)) static HLPFILE_PAGE* FUNC_1(HLPFILE *VAR_0, ULONG* VAR_1)
{
    HLPFILE_PAGE* VAR_2 = ((void*)0);

    if (!VAR_0) return ((void*)0);

    VAR_2 = FUNC_0(VAR_0, VAR_0->contents_start, VAR_1);
    if (!VAR_2)
    {
        VAR_2 = VAR_0->first_page;
        *VAR_1 = 0;
    }
    return VAR_2;
}
