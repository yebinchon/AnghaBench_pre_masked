
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_1(CHAR VAR_3[VAR_1])
{
    int VAR_4;

    for(VAR_4 = 0;VAR_4 < VAR_1;++VAR_4)
        if(VAR_3[VAR_4] != 0)
        {
            FUNC_0("emptystr[%d] = %d\n",VAR_4,VAR_3[VAR_4]);
            return VAR_0;
        }

    return VAR_2;
}
