
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_data {size_t size; int data; int name; } ;
typedef size_t UINT ;
typedef int IStream ;
typedef int IStorage ;
typedef int HRESULT ;
typedef size_t DWORD ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int,int ,int ,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,size_t,size_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static void FUNC_5( IStorage *VAR_2, const struct table_data *VAR_3, UINT VAR_4 )
{
    IStream *VAR_5;
    DWORD VAR_6, VAR_7;
    HRESULT VAR_8;

    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
    {
        VAR_8 = FUNC_1( VAR_2, VAR_3[VAR_6].name, VAR_1|VAR_0, 0, 0, &VAR_5 );
        if (FUNC_0( VAR_8 ))
        {
            FUNC_4( 0, "failed to create stream 0x%08x\n", VAR_8 );
            continue;
        }

        VAR_8 = FUNC_3( VAR_5, VAR_3[VAR_6].data, VAR_3[VAR_6].size, &VAR_7 );
        if (FUNC_0( VAR_8 ) || VAR_7 != VAR_3[VAR_6].size)
            FUNC_4( 0, "failed to write stream\n" );
        FUNC_2( VAR_5 );
    }
}
