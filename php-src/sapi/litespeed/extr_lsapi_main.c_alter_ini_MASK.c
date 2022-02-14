
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_string ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char const*,char*,int) ;
 int FUNC_1 (int *,char*,int,int,int) ;
 int * FUNC_2 (char const*,int,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4( const char * VAR_7, int VAR_8, const char * VAR_9, int VAR_10,
                void * VAR_11 )
{
    zend_string * VAR_12;

    int VAR_13 = VAR_3;
    int VAR_14 = VAR_2;
    if ( '\001' == *VAR_7 ) {
        ++VAR_7;
        if ( *VAR_7 == 4 ) {
            VAR_13 = VAR_4;






            if(!VAR_6)
            {
                VAR_14 = VAR_0;
            }
        }
        else
        {
            VAR_14 = VAR_1;
        }
        ++VAR_7;
        --VAR_8;
        if (( VAR_8 == 7 )&&( FUNC_0( VAR_7, "engine", 6 )== 0 ))
        {
            if ( *VAR_9 == '0' )
                VAR_5 = 0;
        }
        else
        {
            --VAR_8;
            VAR_12 = FUNC_2(VAR_7, VAR_8, 1);
            FUNC_1(VAR_12,
                             (char *)VAR_9, VAR_10,
                             VAR_13, VAR_14);
            FUNC_3(VAR_12, 1);
        }
    }
    return 1;
}
