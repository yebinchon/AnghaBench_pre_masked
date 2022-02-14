
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 unsigned int const VAR_0 ;
 unsigned int const VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned int const) ;
 unsigned int FUNC_2 (unsigned char**) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int *,unsigned int const,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (unsigned char*,int,int,int *) ;
 scalar_t__ FUNC_6 (int *,int,int ) ;

__attribute__((used)) static unsigned long long FUNC_7(FILE* VAR_5) {
    unsigned char VAR_6[VAR_2];
    unsigned long long VAR_7 = 0;
    FUNC_0(VAR_2 == VAR_3);
    for (;;) {
        if (!FUNC_5(VAR_6, 1, VAR_2, VAR_5)) {
            if (FUNC_4(VAR_5)) return VAR_7;
            return 0;
        }
        { const unsigned int VAR_8 = FUNC_2(&VAR_6);
            if ( VAR_8 == VAR_0 ||
                    VAR_8 == VAR_1 ||
                    FUNC_1(VAR_8)) {

                if (FUNC_6(VAR_5, -VAR_2, VAR_4) != 0) {
                    return 0;
                }
                break;
            }
            VAR_7 += VAR_2 + VAR_8;

            if (FUNC_3(VAR_5, VAR_8, VAR_4) != 0) {
                return 0;
            }
        }
    }
    return VAR_7;
}
