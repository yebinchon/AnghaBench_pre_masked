
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xmlreader ;
typedef scalar_t__ xml_encoding ;
struct TYPE_3__ {char* str; int len; int start; } ;
typedef TYPE_1__ strval ;
typedef char WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char*,int) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static HRESULT FUNC_7(xmlreader *VAR_3, strval *VAR_4)
{
    WCHAR *VAR_5 = FUNC_5(VAR_3), *VAR_6;
    xml_encoding VAR_7;
    int VAR_8;

    if ((*VAR_5 < 'A' || *VAR_5 > 'Z') && (*VAR_5 < 'a' || *VAR_5 > 'z'))
        return VAR_1;

    VAR_4->start = FUNC_4(VAR_3);

    VAR_6 = VAR_5;
    while (FUNC_2(*++VAR_6))
        ;

    VAR_8 = VAR_6 - VAR_5;
    VAR_7 = FUNC_3(VAR_5, VAR_8);
    FUNC_0("encoding name %s\n", FUNC_1(VAR_5, VAR_8));
    VAR_4->str = VAR_5;
    VAR_4->len = VAR_8;

    if (VAR_7 == VAR_2)
        return VAR_1;


    FUNC_6(VAR_3, VAR_8);
    return VAR_0;
}
