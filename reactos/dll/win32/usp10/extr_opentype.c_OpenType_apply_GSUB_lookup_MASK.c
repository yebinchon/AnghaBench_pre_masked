
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_2__ {int LookupList; } ;
typedef int OT_LookupList ;
typedef TYPE_1__ GSUB_Header ;
typedef int BYTE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int const*,unsigned int,int *,unsigned int,int,int*) ;

int FUNC_2(const void *VAR_0, unsigned int VAR_1, WORD *VAR_2,
        unsigned int VAR_3, int VAR_4, int *VAR_5)
{
    const GSUB_Header *VAR_6 = (const GSUB_Header *)VAR_0;
    const OT_LookupList *VAR_7 = (const OT_LookupList*)((const BYTE*)VAR_6 + FUNC_0(VAR_6->LookupList));

    return FUNC_1(VAR_7, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
