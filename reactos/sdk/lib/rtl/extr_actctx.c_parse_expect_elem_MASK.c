
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
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int const*,int const*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static BOOL FUNC_4(xmlbuf_t* VAR_2, const WCHAR* VAR_3, const WCHAR *VAR_4)
{
    xmlstr_t VAR_5;
    UNICODE_STRING VAR_6;
    if (!FUNC_1(VAR_2, &VAR_5)) return VAR_0;
    if (FUNC_2(&VAR_5, VAR_3, VAR_4)) return VAR_1;
    VAR_6 = FUNC_3(&VAR_5);
    FUNC_0( "unexpected element %wZ\n", &VAR_6 );
    return VAR_0;
}
