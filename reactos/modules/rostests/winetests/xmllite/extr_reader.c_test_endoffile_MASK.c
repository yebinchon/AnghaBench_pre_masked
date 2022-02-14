
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ XmlNodeType ;
typedef int IXmlReader ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,void**,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int,char*,scalar_t__) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(void)
{
    IXmlReader *VAR_8;
    XmlNodeType VAR_9;
    HRESULT VAR_10;

    VAR_10 = FUNC_0(&VAR_1, (void **)&VAR_8, ((void*)0));
    FUNC_4(VAR_10 == VAR_3, "S_OK, got %08x\n", VAR_10);

    FUNC_6(VAR_8, VAR_0);

    FUNC_5(VAR_8, "<a/>");

    FUNC_6(VAR_8, VAR_0);

    VAR_9 = VAR_7;
    VAR_10 = FUNC_1(VAR_8, &VAR_9);
    FUNC_4(VAR_10 == VAR_3, "got %#x\n", VAR_10);
    FUNC_4(VAR_9 == VAR_6, "Unexpected type %d\n", VAR_9);

    FUNC_6(VAR_8, VAR_0);

    VAR_9 = VAR_6;
    VAR_10 = FUNC_1(VAR_8, &VAR_9);
    FUNC_4(VAR_10 == VAR_2, "got %#x\n", VAR_10);
    FUNC_4(VAR_9 == VAR_7, "Unexpected type %d\n", VAR_9);

    FUNC_6(VAR_8, VAR_4);

    VAR_10 = FUNC_3(VAR_8, ((void*)0));
    FUNC_4(VAR_10 == VAR_3, "got %08x\n", VAR_10);

    FUNC_6(VAR_8, VAR_0);

    FUNC_2(VAR_8);

    VAR_10 = FUNC_0(&VAR_1, (void **)&VAR_8, ((void*)0));
    FUNC_4(VAR_10 == VAR_3, "S_OK, got %08x\n", VAR_10);

    FUNC_5(VAR_8, "<a/>text");

    VAR_9 = VAR_7;
    VAR_10 = FUNC_1(VAR_8, &VAR_9);
    FUNC_4(VAR_10 == VAR_3, "got %#x\n", VAR_10);
    FUNC_4(VAR_9 == VAR_6, "Unexpected type %d\n", VAR_9);

    FUNC_6(VAR_8, VAR_0);

    VAR_9 = VAR_6;
    VAR_10 = FUNC_1(VAR_8, &VAR_9);
    FUNC_4(VAR_10 == VAR_5, "got %#x\n", VAR_10);
    FUNC_4(VAR_9 == VAR_7, "Unexpected type %d\n", VAR_9);

    FUNC_6(VAR_8, VAR_0);

    VAR_10 = FUNC_3(VAR_8, ((void*)0));
    FUNC_4(VAR_10 == VAR_3, "got %08x\n", VAR_10);

    FUNC_2(VAR_8);
}
