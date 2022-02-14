
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ XmlNodeType ;
typedef int WCHAR ;
typedef int IXmlReader ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,void**,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int const**,int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int const*,int const*) ;
 int FUNC_5 (int,char*,scalar_t__) ;
 int FUNC_6 (int *,char const*) ;
 scalar_t__ FUNC_7 (int const*) ;

__attribute__((used)) static void FUNC_8(void)
{
    static const char VAR_7[] = "<a b=\"c\">&#x1f3;&#x103;&gt;</a>";
    static const WCHAR VAR_8[] = {0x01f3,0x0103,'>',0};
    const WCHAR *VAR_9;
    IXmlReader *VAR_10;
    XmlNodeType VAR_11;
    HRESULT VAR_12;

    VAR_12 = FUNC_0(&VAR_0, (void **)&VAR_10, ((void*)0));
    FUNC_5(VAR_12 == VAR_2, "S_OK, got %08x\n", VAR_12);

    FUNC_6(VAR_10, VAR_7);

    VAR_12 = FUNC_2(VAR_10, &VAR_11);
    FUNC_5(VAR_12 == VAR_2, "got %08x\n", VAR_12);
    FUNC_5(VAR_11 == VAR_3, "Unexpected node type %d\n", VAR_11);

    VAR_12 = FUNC_2(VAR_10, &VAR_11);
    FUNC_5(VAR_12 == VAR_2, "got %08x\n", VAR_12);
    FUNC_5(VAR_11 == VAR_6, "Unexpected node type %d\n", VAR_11);

    VAR_12 = FUNC_1(VAR_10, &VAR_9, ((void*)0));
    FUNC_5(VAR_12 == VAR_2, "got %08x\n", VAR_12);
    FUNC_5(!FUNC_4(VAR_9, VAR_8), "Text value : %s\n", FUNC_7(VAR_9));

    VAR_12 = FUNC_2(VAR_10, &VAR_11);
    FUNC_5(VAR_12 == VAR_2, "got %08x\n", VAR_12);
    FUNC_5(VAR_11 == VAR_4, "Unexpected node type %d\n", VAR_11);

    VAR_12 = FUNC_2(VAR_10, &VAR_11);
    FUNC_5(VAR_12 == VAR_1, "got %08x\n", VAR_12);
    FUNC_5(VAR_11 == VAR_5, "Unexpected node type %d\n", VAR_11);

    FUNC_3(VAR_10);
}
