
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum type_id { ____Placeholder_type_id } type_id ;
typedef int ITypeLib ;
typedef int ITypeInfo ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int **) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (void**,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (int *,int,int,int ,int **) ;
 int VAR_2 ;
 int FUNC_8 (int ) ;
 int * VAR_3 ;
 int ** VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static HRESULT FUNC_9( enum type_id VAR_6, ITypeInfo **VAR_7 )
{
    HRESULT VAR_8;

    if (!VAR_5)
    {
        ITypeLib *VAR_9;

        VAR_8 = FUNC_7( &VAR_0, 1, 2, VAR_1, &VAR_9 );
        if (FUNC_1( VAR_8 ))
        {
            FUNC_0( "LoadRegTypeLib failed: %08x\n", VAR_8 );
            return VAR_8;
        }
        if (FUNC_6( (void **)&VAR_5, VAR_9, ((void*)0) ))
            FUNC_5( VAR_9 );
    }
    if (!VAR_4[VAR_6])
    {
        ITypeInfo *VAR_10;

        VAR_8 = FUNC_4( VAR_5, VAR_3[VAR_6], &VAR_10 );
        if (FUNC_1( VAR_8 ))
        {
            FUNC_0( "GetTypeInfoOfGuid(%s) failed: %08x\n", FUNC_8(VAR_3[VAR_6]), VAR_8 );
            return VAR_8;
        }
        if (FUNC_6( (void **)(VAR_4 + VAR_6), VAR_10, ((void*)0) ))
            FUNC_3( VAR_10 );
    }
    *VAR_7 = VAR_4[VAR_6];
    FUNC_2( *VAR_7 );
    return VAR_2;
}
