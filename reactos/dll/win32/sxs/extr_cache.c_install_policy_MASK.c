
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct assembly {int version; int token; int name; int arch; } ;
typedef int WCHAR ;
typedef int HRESULT ;
typedef int BOOL ;


 int FUNC_0 (int const*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int VAR_2 ;
 int FUNC_5 (char*,int ) ;
 int * FUNC_6 (int ,int ,int ,int ) ;

__attribute__((used)) static HRESULT FUNC_7( const WCHAR *VAR_3, struct assembly *VAR_4 )
{
    WCHAR *VAR_5;
    BOOL VAR_6;



    VAR_5 = FUNC_6( VAR_4->arch, VAR_4->name, VAR_4->token, VAR_4->version );
    if (!VAR_5) return VAR_0;

    VAR_6 = FUNC_0( VAR_3, VAR_5, VAR_1 );
    FUNC_4( FUNC_2(), 0, VAR_5 );
    if (!VAR_6)
    {
        HRESULT VAR_7 = FUNC_3( FUNC_1() );
        FUNC_5("failed to copy policy manifest file 0x%08x\n", VAR_7);
        return VAR_7;
    }
    return VAR_2;
}
