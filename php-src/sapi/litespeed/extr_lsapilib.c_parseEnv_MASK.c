
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct LSAPI_key_value_pair {char* pKey; char* pValue; int keyLen; int valLen; } ;


 scalar_t__ FUNC_0 (char*,char*,int) ;

__attribute__((used)) static int FUNC_1( struct LSAPI_key_value_pair * VAR_0, int VAR_1,
            char **VAR_2, char * VAR_3 )
{
    struct LSAPI_key_value_pair * VAR_4;
        int VAR_5 = 0, VAR_6 = 0;
    if ( VAR_1 > 8192 )
        return -1;
    VAR_4 = VAR_0 + VAR_1;
    while( VAR_0 != VAR_4 )
    {
        if ( VAR_3 - *VAR_2 < 4 )
            return -1;
        VAR_5 = *((unsigned char *)((*VAR_2)++));
        VAR_5 = (VAR_5 << 8) + *((unsigned char *)((*VAR_2)++));
        VAR_6 = *((unsigned char *)((*VAR_2)++));
        VAR_6 = (VAR_6 << 8) + *((unsigned char *)((*VAR_2)++));
        if ( *VAR_2 + VAR_5 + VAR_6 > VAR_3 )
            return -1;
        if (( !VAR_5 )||( !VAR_6 ))
            return -1;

        VAR_0->pKey = *VAR_2;
        *VAR_2 += VAR_5;
        VAR_0->pValue = *VAR_2;
        *VAR_2 += VAR_6;

        VAR_0->keyLen = VAR_5 - 1;
        VAR_0->valLen = VAR_6 - 1;
        ++VAR_0;
    }
    if ( FUNC_0( *VAR_2, "\0\0\0\0", 4 ) != 0 )
        return -1;
    *VAR_2 += 4;
    return 0;
}
