
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned int,unsigned int) ;
 size_t FUNC_1 (int ,char*,size_t*,char const*,size_t*,int *) ;
 int FUNC_2 (size_t const) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(const char* VAR_1, char* VAR_2, int VAR_3, int VAR_4)
{
    size_t VAR_5 = (size_t)VAR_3;
    size_t VAR_6 = (size_t)VAR_4;

    size_t VAR_7 = 0;
    size_t VAR_8 = 0;
    size_t VAR_9 = 0;
    size_t VAR_10 = VAR_6 - VAR_9;

    for (;;) {
        size_t const VAR_11 = FUNC_1(VAR_0, VAR_2+VAR_9, &VAR_10, VAR_1+VAR_7, &VAR_8, ((void*)0));
        FUNC_3(!FUNC_2(VAR_11));

        VAR_7 += VAR_8;
        VAR_8 = VAR_11;

        VAR_9 += VAR_10;
        VAR_10 = VAR_6 - VAR_9;

        if (!VAR_11) break;
    }


    if (VAR_7 != VAR_5) {
        FUNC_0("Error decompressing frame : must read (%u) full frame (%u) \n",
                (unsigned)VAR_7, (unsigned)VAR_5);
        FUNC_4(10);
    }
    return (int)VAR_9;

}
