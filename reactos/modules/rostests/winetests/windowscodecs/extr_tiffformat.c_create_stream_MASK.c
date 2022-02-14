
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IStream ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ HGLOBAL ;


 scalar_t__ FUNC_0 (scalar_t__,int ,int **) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (void*,void const*,int) ;
 int FUNC_5 (int,char*,...) ;

__attribute__((used)) static IStream *FUNC_6(const void *VAR_3, int VAR_4)
{
    HRESULT VAR_5;
    IStream *VAR_6;
    HGLOBAL VAR_7;
    void *VAR_8;

    VAR_7 = FUNC_1(VAR_0, VAR_4);
    FUNC_5(VAR_7 != 0, "GlobalAlloc failed\n");
    if (!VAR_7) return ((void*)0);

    VAR_8 = FUNC_2(VAR_7);
    FUNC_4(VAR_8, VAR_3, VAR_4);
    FUNC_3(VAR_7);

    VAR_5 = FUNC_0(VAR_7, VAR_2, &VAR_6);
    FUNC_5(VAR_5 == VAR_1, "CreateStreamOnHGlobal failed, hr=%x\n", VAR_5);

    return VAR_6;
}
