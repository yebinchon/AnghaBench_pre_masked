
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t WORD ;


 int FUNC_0 (char*,...) ;
 int * VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(const char* VAR_1, WORD *VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6 = 0;
    FUNC_0("%s:",VAR_1);
    for (VAR_5 = VAR_3; VAR_5 < VAR_4 && VAR_6 < 200; VAR_5++)
    {
        FUNC_0(" %s",VAR_0[VAR_2[VAR_5]]);
        VAR_6 += FUNC_1(VAR_0[VAR_2[VAR_5]])+1;
    }
    if (VAR_5 != VAR_4)
        FUNC_0("...");
    FUNC_0("\n");
}
