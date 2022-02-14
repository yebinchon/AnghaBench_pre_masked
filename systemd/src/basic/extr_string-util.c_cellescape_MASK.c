
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (size_t*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const,char*) ;
 int FUNC_3 (char*,char*,int) ;
 scalar_t__ FUNC_4 (char*,int) ;

char *FUNC_5(char *VAR_0, size_t VAR_1, const char *VAR_2) {
        size_t VAR_3 = 0, VAR_4[4] = {}, VAR_5 = 0, VAR_6;

        FUNC_1(VAR_1 > 0);

        for (;;) {
                char VAR_7[4];
                int VAR_8;

                if (*VAR_2 == 0)
                        goto done;

                VAR_8 = FUNC_2(*VAR_2, VAR_7);
                if (VAR_3 + VAR_8 + 1 > VAR_1)

                        break;


                FUNC_3(VAR_0 + VAR_3, VAR_7, VAR_8);
                VAR_3 += VAR_8;


                VAR_4[VAR_5] = VAR_8;
                VAR_5 = (VAR_5 + 1) % 4;

                VAR_2++;
        }



        for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4); VAR_6++) {

                if (VAR_3 + 4 <= VAR_1)
                        break;

                VAR_5 = VAR_5 == 0 ? 3 : VAR_5 - 1;
                if (VAR_4[VAR_5] == 0)
                        break;

                FUNC_1(VAR_3 >= VAR_4[VAR_5]);
                VAR_3 -= VAR_4[VAR_5];
        }

        if (VAR_3 + 4 <= VAR_1)
                VAR_3 += FUNC_4(VAR_0 + VAR_3, 0);
        else if (VAR_3 + 3 <= VAR_1) {
                VAR_0[VAR_3++] = '.';
                VAR_0[VAR_3++] = '.';
        } else if (VAR_3 + 2 <= VAR_1)
                VAR_0[VAR_3++] = '.';
        else
                FUNC_1(VAR_3 + 1 <= VAR_1);

 done:
        VAR_0[VAR_3] = '\0';
        return VAR_0;
}
