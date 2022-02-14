
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*,char*,unsigned char) ;
 int FUNC_2 (char const*,size_t) ;
 int FUNC_3 (char const,int *) ;

int FUNC_4(const char *VAR_1, char *VAR_2, size_t VAR_3) {
        size_t VAR_4, VAR_5;

        if (!VAR_1 || !VAR_2)
                return -VAR_0;

        for (VAR_4 = 0, VAR_5 = 0; VAR_1[VAR_4] != '\0'; VAR_4++) {
                int VAR_6;

                VAR_6 = FUNC_2(VAR_1 + VAR_4, (size_t) -1);
                if (VAR_6 > 1) {

                        if (VAR_3-VAR_5 < (size_t)VAR_6)
                                return -VAR_0;

                        FUNC_0(&VAR_2[VAR_5], &VAR_1[VAR_4], VAR_6);
                        VAR_5 += VAR_6;
                        VAR_4 += (VAR_6-1);

                } else if (VAR_1[VAR_4] == '\\' || !FUNC_3(VAR_1[VAR_4], ((void*)0))) {

                        if (VAR_3-VAR_5 < 4)
                                return -VAR_0;

                        FUNC_1(&VAR_2[VAR_5], "\\x%02x", (unsigned char) VAR_1[VAR_4]);
                        VAR_5 += 4;

                } else {
                        if (VAR_3-VAR_5 < 1)
                                return -VAR_0;

                        VAR_2[VAR_5] = VAR_1[VAR_4];
                        VAR_5++;
                }
        }

        if (VAR_3-VAR_5 < 1)
                return -VAR_0;

        VAR_2[VAR_5] = '\0';
        return 0;
}
