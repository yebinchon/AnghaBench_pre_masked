
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WriteIndexInfo ;


 scalar_t__ FUNC_0 (int *,int,unsigned int*,int) ;
 unsigned int FUNC_1 (unsigned int) ;

__attribute__((used)) static int FUNC_2(WriteIndexInfo *VAR_0, int VAR_1,
                                  unsigned int VAR_2, unsigned int VAR_3)
{
    VAR_2 = FUNC_1(VAR_2);
    VAR_3 = FUNC_1(VAR_3);
    return ((FUNC_0(VAR_0, VAR_1, &VAR_2, 4) < 0) ||
            (FUNC_0(VAR_0, VAR_1, &VAR_3, 4) < 0)) ? -1 : 0;
}
