
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IStorage ;
typedef int HRESULT ;
typedef int GUID ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*,int *,int ,int ) ;

__attribute__((used)) static HRESULT FUNC_6( IStorage *VAR_2, const GUID *VAR_3 )
{
    static const WCHAR VAR_4[] = { '_','T','a','b','l','e','s',0 };
    HRESULT VAR_5;

    VAR_5 = FUNC_2( VAR_2, VAR_3 );
    if (FUNC_0( VAR_5 ))
    {
        FUNC_3("failed to set class id 0x%08x\n", VAR_5);
        return VAR_5;
    }


    VAR_5 = FUNC_5( VAR_2, VAR_4, ((void*)0), 0, VAR_1 );
    if (FUNC_0( VAR_5 ))
    {
        FUNC_3("failed to create _Tables stream 0x%08x\n", VAR_5);
        return VAR_5;
    }

    VAR_5 = FUNC_4( VAR_2 );
    if (FUNC_0( VAR_5 ))
    {
        FUNC_3("failed to initialize string table 0x%08x\n", VAR_5);
        return VAR_5;
    }

    VAR_5 = FUNC_1( VAR_2, 0 );
    if (FUNC_0( VAR_5 ))
    {
        FUNC_3("failed to commit changes 0x%08x\n", VAR_5);
        return VAR_5;
    }

    return VAR_0;
}
