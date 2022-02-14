
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dev_t ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (char const*,unsigned int*) ;
 char* FUNC_4 (char const*,size_t) ;
 size_t FUNC_5 (char const*,int ) ;

int FUNC_6(const char *VAR_3, dev_t *VAR_4) {
        const char *VAR_5;
        unsigned VAR_6, VAR_7;
        size_t VAR_8;
        int VAR_9;

        VAR_8 = FUNC_5(VAR_3, VAR_0);
        if (VAR_8 == 0)
                return -VAR_1;
        if (VAR_3[VAR_8] != ':')
                return -VAR_1;

        VAR_5 = FUNC_4(VAR_3, VAR_8);
        VAR_9 = FUNC_3(VAR_5, &VAR_6);
        if (VAR_9 < 0)
                return VAR_9;

        VAR_9 = FUNC_3(VAR_3 + VAR_8 + 1, &VAR_7);
        if (VAR_9 < 0)
                return VAR_9;

        if (!FUNC_0(VAR_6) || !FUNC_1(VAR_7))
                return -VAR_2;

        *VAR_4 = FUNC_2(VAR_6, VAR_7);
        return 0;
}
