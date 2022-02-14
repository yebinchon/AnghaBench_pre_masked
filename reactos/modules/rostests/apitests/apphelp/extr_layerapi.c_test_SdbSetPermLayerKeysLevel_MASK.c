
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char const*,int,int *,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char const*,char*) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,char*,int ) ;

__attribute__((used)) static void FUNC_5(BOOL VAR_4, const char* VAR_5)
{
    WCHAR VAR_6[VAR_2+20];
    WCHAR VAR_7[1] = { 0 };

    FUNC_0(VAR_0, 0, VAR_5, -1, VAR_6, VAR_2+20);


    FUNC_2(FUNC_3(((void*)0), ((void*)0), VAR_4) == VAR_1, "Expected SdbSetPermLayerKeys to fail\n");
    FUNC_2(FUNC_3(((void*)0), VAR_7, VAR_4) == VAR_1, "Expected SdbSetPermLayerKeys to fail\n");
    FUNC_2(FUNC_3(VAR_7, VAR_7, VAR_4) == VAR_1, "Expected SdbSetPermLayerKeys to fail\n");
    FUNC_2(FUNC_3(VAR_6, ((void*)0), VAR_4) == VAR_3, "Expected SdbSetPermLayerKeys to succeed\n");
    FUNC_2(FUNC_3(VAR_6, VAR_7, VAR_4) == VAR_3, "Expected SdbSetPermLayerKeys to fail\n");


    FUNC_2(FUNC_4(VAR_6, "TEST1", VAR_4), "Expected SdbSetPermLayerKeys to succeed\n");
    FUNC_1(VAR_4, VAR_5, "TEST1");

    FUNC_2(FUNC_4(VAR_6, "TEST1 TEST2", VAR_4), "Expected SdbSetPermLayerKeys to succeed\n");
    FUNC_1(VAR_4, VAR_5, "TEST1 TEST2");


    FUNC_2(FUNC_4(VAR_6, "!#$% TEST1 TEST2", VAR_4), "Expected SdbSetPermLayerKeys to succeed\n");
    FUNC_1(VAR_4, VAR_5, "!#$% TEST1 TEST2");

    FUNC_2(FUNC_4(VAR_6, "!#$% TEST1     TEST2", VAR_4), "Expected SdbSetPermLayerKeys to succeed\n");
    FUNC_1(VAR_4, VAR_5, "!#$% TEST1     TEST2");

    FUNC_2(FUNC_3(VAR_6, ((void*)0), VAR_4) == VAR_3, "Expected SdbSetPermLayerKeys to succeed\n");
    FUNC_1(VAR_4, VAR_5, ((void*)0));

    FUNC_2(FUNC_4(VAR_6, " ", VAR_4), "Expected SdbSetPermLayerKeys to succeed\n");
    FUNC_1(VAR_4, VAR_5, " ");

    FUNC_2(FUNC_3(VAR_6, ((void*)0), VAR_4) == VAR_3, "Expected SdbSetPermLayerKeys to fail\n");
    FUNC_1(VAR_4, VAR_5, ((void*)0));
}
