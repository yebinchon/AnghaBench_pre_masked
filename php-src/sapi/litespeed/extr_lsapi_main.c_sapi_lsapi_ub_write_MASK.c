
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,size_t) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int,char const*,int) ;

__attribute__((used)) static size_t FUNC_3(const char *VAR_1, size_t VAR_2)
{
    int VAR_3;
    int VAR_4;
    if ( VAR_0 ) {
        VAR_3 = FUNC_0( VAR_1, VAR_2 );
        if ( VAR_3 < VAR_2 ) {
            FUNC_1();
            return VAR_2 - VAR_3;
        }
    } else {
        VAR_4 = VAR_2;
        while( VAR_4 > 0 ) {
            VAR_3 = FUNC_2( 1, VAR_1, VAR_4 );
            if ( VAR_3 <= 0 ) {
                FUNC_1();
                return VAR_2 - VAR_4;
            }
            VAR_1 += VAR_3;
            VAR_4 -= VAR_3;
        }
    }
    return VAR_2;
}
