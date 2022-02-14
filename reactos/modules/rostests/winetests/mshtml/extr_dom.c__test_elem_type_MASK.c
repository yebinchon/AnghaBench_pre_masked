
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t elem_type_t ;
struct TYPE_2__ {scalar_t__ dispiid; int iids; int tag; } ;
typedef int IUnknown ;


 size_t VAR_0 ;
 int FUNC_0 (unsigned int,int *,scalar_t__,char*) ;
 int FUNC_1 (unsigned int,int *,int ) ;
 int FUNC_2 (unsigned int,int *,int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_3(unsigned VAR_2, IUnknown *VAR_3, elem_type_t VAR_4)
{
    FUNC_1(VAR_2, VAR_3, VAR_1[VAR_4].tag);
    FUNC_2(VAR_2, VAR_3, VAR_1[VAR_4].iids);

    if(VAR_1[VAR_4].dispiid && VAR_4 != VAR_0)
        FUNC_0(VAR_2, VAR_3, VAR_1[VAR_4].dispiid, "[object]");
}
