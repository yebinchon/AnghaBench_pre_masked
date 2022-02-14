
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ dtdmode; int nodetype; } ;
typedef TYPE_1__ xmlreader ;
typedef int strval ;
typedef char WCHAR ;
typedef int HRESULT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (TYPE_1__*,char const*) ;
 char* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int ,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_10(xmlreader *VAR_10)
{
    static const WCHAR VAR_11[] = {'<','!','D','O','C','T','Y','P','E',0};
    strval VAR_12;
    WCHAR *VAR_13;
    HRESULT VAR_14;


    if (FUNC_2(VAR_10, VAR_11)) return VAR_2;
    FUNC_7(VAR_10);


    if (VAR_10->dtdmode == VAR_0) return VAR_7;

    FUNC_8(VAR_10, 9);
    if (!FUNC_9(VAR_10)) return VAR_8;


    VAR_14 = FUNC_5(VAR_10, &VAR_12);
    if (FUNC_0(VAR_14)) return VAR_6;

    FUNC_9(VAR_10);

    VAR_14 = FUNC_4(VAR_10);
    if (FUNC_0(VAR_14)) return VAR_14;

    FUNC_9(VAR_10);

    VAR_13 = FUNC_3(VAR_10);
    if (*VAR_13 != '>')
    {
        FUNC_1("internal subset parsing not implemented\n");
        return VAR_1;
    }


    FUNC_8(VAR_10, 1);

    VAR_10->nodetype = VAR_9;
    FUNC_6(VAR_10, VAR_4, &VAR_12);
    FUNC_6(VAR_10, VAR_5, &VAR_12);

    return VAR_3;
}
