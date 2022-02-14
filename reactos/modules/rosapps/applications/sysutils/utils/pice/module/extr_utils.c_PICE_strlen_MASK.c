
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t USHORT ;
typedef int ULONG ;


 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_0 ;

USHORT FUNC_1(const char* VAR_1)
{
 USHORT VAR_2;

 for(VAR_2=0;FUNC_0((ULONG)&VAR_1[VAR_2]) && VAR_1[VAR_2]!=0 && VAR_2<VAR_0;VAR_2++);

    if(FUNC_0((ULONG)&VAR_1[VAR_2]) && VAR_1[VAR_2]==0)
        return VAR_2;

    return 0;
}
