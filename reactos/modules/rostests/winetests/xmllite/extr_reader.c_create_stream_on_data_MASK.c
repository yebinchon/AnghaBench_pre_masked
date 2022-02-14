
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IStream ;
typedef scalar_t__ HRESULT ;
typedef int HGLOBAL ;


 scalar_t__ FUNC_0 (int ,int ,int **) ;
 int VAR_0 ;
 int FUNC_1 (int ,unsigned int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (void*,void const*,unsigned int) ;
 int FUNC_5 (int,char*,...) ;

__attribute__((used)) static IStream *FUNC_6(const void *VAR_3, unsigned int VAR_4)
{
    IStream *VAR_5 = ((void*)0);
    HGLOBAL VAR_6;
    void *VAR_7;
    HRESULT VAR_8;

    VAR_6 = FUNC_1(VAR_0, VAR_4);
    VAR_7 = FUNC_2(VAR_6);

    FUNC_4(VAR_7, VAR_3, VAR_4);

    VAR_8 = FUNC_0(VAR_6, VAR_2, &VAR_5);
    FUNC_5(VAR_8 == VAR_1, "Expected S_OK, got %08x\n", VAR_8);
    FUNC_5(VAR_5 != ((void*)0), "Expected non-NULL stream\n");

    FUNC_3(VAR_6);

    return VAR_5;
}
