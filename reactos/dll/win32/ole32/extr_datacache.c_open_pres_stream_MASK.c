
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int IStream ;
typedef int IStorage ;
typedef int HRESULT ;


 int* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int const*,int *,int,int ,int **) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static HRESULT FUNC_1( IStorage *VAR_6, int VAR_7, IStream **VAR_8 )
{
    WCHAR VAR_9[] = {2,'O','l','e','P','r','e','s',
                    '0' + (VAR_7 / 100) % 10,
                    '0' + (VAR_7 / 10) % 10,
                    '0' + VAR_7 % 10, 0};
    const WCHAR *VAR_10 = VAR_9;

    if (VAR_7 == VAR_5) return VAR_1;
    if (VAR_7 == VAR_4) VAR_10 = VAR_0;

    return FUNC_0( VAR_6, VAR_10, ((void*)0), VAR_2 | VAR_3, 0, VAR_8 );
}
