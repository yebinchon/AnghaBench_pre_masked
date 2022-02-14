
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct LSAPI_key_value_pair {int valLen; int pValue; int keyLen; int pKey; } ;
typedef int (* LSAPI_CB_EnvHandler ) (int ,int ,int ,int ,void*) ;


 int FUNC_0 (int ,int ,int ,int ,void*) ;

__attribute__((used)) static int FUNC_1( struct LSAPI_key_value_pair * VAR_0,
            int VAR_1, LSAPI_CB_EnvHandler VAR_2, void * VAR_3 )
{
    struct LSAPI_key_value_pair * VAR_4 = VAR_0 + VAR_1;
    int VAR_5;
    if ( !VAR_0 || !VAR_2 )
        return -1;
    while( VAR_0 < VAR_4 )
    {
        VAR_5 = (*VAR_2)( VAR_0->pKey, VAR_0->keyLen,
                    VAR_0->pValue, VAR_0->valLen, VAR_3 );
        if ( VAR_5 <= 0 )
            return VAR_5;
        ++VAR_0;
    }
    return VAR_1;
}
