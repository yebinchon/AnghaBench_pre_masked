
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlstr_t ;
typedef int xmlbuf_t ;
typedef int WCHAR ;
typedef int UNICODE_STRING ;
typedef int BOOL ;


 int FUNC_0 (char*,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int const*,int const*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static BOOL FUNC_5(xmlbuf_t *VAR_1, const WCHAR *VAR_2, const WCHAR *VAR_3)
{
    xmlstr_t VAR_4;
    UNICODE_STRING VAR_5;
    if (!FUNC_1(VAR_1, &VAR_4)) return VAR_0;
    if (!FUNC_3(&VAR_4, VAR_2, VAR_3))
    {
        VAR_5 = FUNC_4(&VAR_4);
        FUNC_0( "unexpected element %wZ\n", &VAR_5 );
        return VAR_0;
    }
    return FUNC_2(VAR_1);
}
