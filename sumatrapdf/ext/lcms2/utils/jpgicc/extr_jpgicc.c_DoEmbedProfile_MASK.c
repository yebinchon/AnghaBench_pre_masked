
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ cmsUInt8Number ;
typedef int FILE ;


 int VAR_0 ;
 size_t FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 size_t FUNC_3 (scalar_t__*,int,size_t,int *) ;
 int FUNC_4 (scalar_t__*) ;
 scalar_t__ FUNC_5 (size_t) ;
 int FUNC_6 (int *,scalar_t__*,unsigned int) ;

__attribute__((used)) static
void FUNC_7(const char* VAR_1)
{
    FILE* VAR_2;
    size_t VAR_3, VAR_4;
    cmsUInt8Number* VAR_5;

        VAR_2 = FUNC_2(VAR_1, "rb");
        if (VAR_2 == ((void*)0)) return;

        VAR_3 = FUNC_0(VAR_2);
        VAR_5 = (cmsUInt8Number*) FUNC_5(VAR_3 + 1);
        VAR_4 = FUNC_3(VAR_5, 1, VAR_3, VAR_2);
        FUNC_1(VAR_2);
        VAR_5[VAR_4] = 0;

        FUNC_6 (&VAR_0, VAR_5, (unsigned int) VAR_4);
        FUNC_4(VAR_5);
}
