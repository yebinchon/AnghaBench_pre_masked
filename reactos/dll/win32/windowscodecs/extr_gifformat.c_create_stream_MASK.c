
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IStream ;
typedef int HRESULT ;
typedef int HGLOBAL ;


 int FUNC_0 (int ,int ,int **) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (void*,void const*,int) ;

__attribute__((used)) static IStream *FUNC_6(const void *VAR_2, int VAR_3)
{
    HRESULT VAR_4;
    IStream *VAR_5;
    HGLOBAL VAR_6;
    void *VAR_7;

    VAR_6 = FUNC_2(VAR_0, VAR_3);
    if (!VAR_6) return ((void*)0);

    VAR_7 = FUNC_3(VAR_6);
    FUNC_5(VAR_7, VAR_2, VAR_3);
    FUNC_4(VAR_6);

    VAR_4 = FUNC_0(VAR_6, VAR_1, &VAR_5);
    return FUNC_1(VAR_4) ? ((void*)0) : VAR_5;
}
