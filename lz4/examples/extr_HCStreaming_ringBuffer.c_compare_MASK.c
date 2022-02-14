
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int b1 ;
typedef int b0 ;
typedef int FILE ;


 size_t FUNC_0 (char*,int,int,int *) ;
 scalar_t__ FUNC_1 (char*,char*,size_t const) ;

size_t FUNC_2(FILE* VAR_0, FILE* VAR_1)
{
    size_t VAR_2 = 1;

    for (;;) {
        char VAR_3[65536];
        char VAR_4[65536];
        const size_t VAR_5 = FUNC_0(VAR_3, 1, sizeof(VAR_3), VAR_0);
        const size_t VAR_6 = FUNC_0(VAR_4, 1, sizeof(VAR_4), VAR_1);

        if ((VAR_5==0) && (VAR_6==0)) return 0;

        if (VAR_5 != VAR_6) {
            size_t VAR_7 = VAR_5;
            if (VAR_6<VAR_5) VAR_7 = VAR_6;
            VAR_2 += VAR_7;
            break;
        }

        if (FUNC_1(VAR_3, VAR_4, VAR_5)) {
            unsigned VAR_8 = 0;
            while ((VAR_8 < VAR_5) && (VAR_3[VAR_8]==VAR_4[VAR_8])) VAR_8++;
            VAR_2 += VAR_8;
            break;
        }

        VAR_2 += sizeof(VAR_3);
    }

    return VAR_2;
}
