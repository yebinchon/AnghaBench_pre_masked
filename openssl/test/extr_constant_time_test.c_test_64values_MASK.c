
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 scalar_t__ FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_2 (int *,char*,scalar_t__,scalar_t__,int) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static int FUNC_4(int VAR_2)
{
    uint64_t VAR_3 = VAR_1[VAR_2];
    int VAR_4, VAR_5 = 1;

    for (VAR_4 = VAR_2 + 1; VAR_4 < (int)FUNC_0(VAR_1); VAR_4++) {
        uint64_t VAR_6 = VAR_1[VAR_4];

        if (!FUNC_2(&VAR_0, "constant_time_lt_64",
                               VAR_3, VAR_6, VAR_3 < VAR_6)
                || !FUNC_3(VAR_3, VAR_6)) {
            FUNC_1("test_64values failed i=%d j=%d", VAR_2, VAR_4);
            VAR_5 = 0;
        }
    }
    return VAR_5;
}
