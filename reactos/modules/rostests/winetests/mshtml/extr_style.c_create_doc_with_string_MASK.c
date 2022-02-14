
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SIZE_T ;
typedef int IStream ;
typedef int IPersistStreamInit ;
typedef int IHTMLDocument2 ;
typedef int HGLOBAL ;


 int FUNC_0 (int ,int ,int **) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *,void**) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int * FUNC_6 () ;
 int VAR_3 ;
 int FUNC_7 (int ,char const*,int ) ;
 int * VAR_4 ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static IHTMLDocument2 *FUNC_9(const char *VAR_5)
{
    IPersistStreamInit *VAR_6;
    IStream *VAR_7;
    IHTMLDocument2 *VAR_8;
    HGLOBAL VAR_9;
    SIZE_T VAR_10;

    VAR_4 = VAR_8 = FUNC_6();
    if(!VAR_8)
        return ((void*)0);

    VAR_3 = VAR_0;
    VAR_10 = FUNC_8(VAR_5);
    VAR_9 = FUNC_1(0, VAR_10);
    FUNC_7(VAR_9, VAR_5, VAR_10);
    FUNC_0(VAR_9, VAR_2, &VAR_7);

    FUNC_2(VAR_8, &VAR_1, (void**)&VAR_6);

    FUNC_3(VAR_6, VAR_7);
    FUNC_4(VAR_6);
    FUNC_5(VAR_7);

    return VAR_8;
}
