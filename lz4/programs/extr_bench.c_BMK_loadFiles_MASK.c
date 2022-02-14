
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t U64 ;
typedef int FILE ;


 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int,char*,...) ;
 size_t FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char const*,char*) ;
 size_t FUNC_7 (char*,int,size_t,int *) ;

__attribute__((used)) static void FUNC_8(void* VAR_0, size_t VAR_1,
                          size_t* VAR_2,
                          const char** VAR_3, unsigned VAR_4)
{
    size_t VAR_5 = 0, VAR_6 = 0;
    unsigned VAR_7;
    for (VAR_7=0; VAR_7<VAR_4; VAR_7++) {
        FILE* VAR_8;
        U64 VAR_9 = FUNC_3(VAR_3[VAR_7]);
        if (FUNC_4(VAR_3[VAR_7])) {
            FUNC_0(2, "Ignoring %s directory...       \n", VAR_3[VAR_7]);
            VAR_2[VAR_7] = 0;
            continue;
        }
        VAR_8 = FUNC_6(VAR_3[VAR_7], "rb");
        if (VAR_8==((void*)0)) FUNC_2(10, "impossible to open file %s", VAR_3[VAR_7]);
        FUNC_1(2, "Loading %s...       \r", VAR_3[VAR_7]);
        if (VAR_9 > VAR_1-VAR_5) {
            VAR_9 = VAR_1-VAR_5;
            VAR_4=VAR_7;
        }
        { size_t const VAR_10 = FUNC_7(((char*)VAR_0)+VAR_5, 1, (size_t)VAR_9, VAR_8);
          if (VAR_10 != (size_t)VAR_9) FUNC_2(11, "could not read %s", VAR_3[VAR_7]);
          VAR_5 += VAR_10; }
        VAR_2[VAR_7] = (size_t)VAR_9;
        VAR_6 += (size_t)VAR_9;
        FUNC_5(VAR_8);
    }

    if (VAR_6 == 0) FUNC_2(12, "no data to bench");
}
