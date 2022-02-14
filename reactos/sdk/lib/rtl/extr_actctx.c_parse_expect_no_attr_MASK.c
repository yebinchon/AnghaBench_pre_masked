
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlstr_t ;
typedef int xmlbuf_t ;
typedef int UNICODE_STRING ;
typedef int BOOL ;


 int FUNC_0 (char*,int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *,int *,int*,int*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static BOOL FUNC_3(xmlbuf_t* VAR_0, BOOL* VAR_1)
{
    xmlstr_t VAR_2, VAR_3;
    UNICODE_STRING VAR_4, VAR_5;
    BOOL VAR_6;

    while (FUNC_1(VAR_0, &VAR_2, &VAR_3, &VAR_6, VAR_1))
    {
        VAR_4 = FUNC_2(&VAR_2);
        VAR_5 = FUNC_2(&VAR_3);
        FUNC_0( "unexpected attr %wZ=%wZ\n", &VAR_4,
             &VAR_5);
    }
    return !VAR_6;
}
