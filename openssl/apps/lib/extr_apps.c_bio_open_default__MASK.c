
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 int * FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ,char*,char const*,int ,...) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int * FUNC_4 (int) ;
 int * FUNC_5 (int) ;
 int VAR_1 ;
 int FUNC_6 (char,int) ;
 int FUNC_7 (char) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static BIO *FUNC_10(const char *VAR_2, char VAR_3, int VAR_4,
                              int VAR_5)
{
    BIO *VAR_6;

    if (VAR_2 == ((void*)0) || FUNC_8(VAR_2, "-") == 0) {
        VAR_6 = VAR_3 == 'r' ? FUNC_4(VAR_4) : FUNC_5(VAR_4);
        if (VAR_5) {
            FUNC_2();
            return VAR_6;
        }
        if (VAR_6 != ((void*)0))
            return VAR_6;
        FUNC_1(VAR_0,
                   "Can't open %s, %s\n",
                   VAR_3 == 'r' ? "stdin" : "stdout", FUNC_9(VAR_1));
    } else {
        VAR_6 = FUNC_0(VAR_2, FUNC_6(VAR_3, VAR_4));
        if (VAR_5) {
            FUNC_2();
            return VAR_6;
        }
        if (VAR_6 != ((void*)0))
            return VAR_6;
        FUNC_1(VAR_0,
                   "Can't open %s for %s, %s\n",
                   VAR_2, FUNC_7(VAR_3), FUNC_9(VAR_1));
    }
    FUNC_3(VAR_0);
    return ((void*)0);
}
