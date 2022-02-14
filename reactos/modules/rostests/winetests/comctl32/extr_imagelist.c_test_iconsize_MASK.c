
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INT ;
typedef int HIMAGELIST ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int,int,int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int*,int*) ;

__attribute__((used)) static void FUNC_4(void)
{
    HIMAGELIST VAR_1;
    INT VAR_2, VAR_3;
    BOOL VAR_4;

    VAR_1 = FUNC_1(16, 16, VAR_0, 0, 3);

    VAR_4 = FUNC_3(VAR_1, ((void*)0), ((void*)0));
    FUNC_0(!VAR_4, "got %d\n", VAR_4);


    VAR_2 = 0x1abe11ed;
    VAR_4 = FUNC_3(VAR_1, &VAR_2, ((void*)0));
    FUNC_0(!VAR_4, "got %d\n", VAR_4);
    FUNC_0(VAR_2 == 0x1abe11ed, "got %d\n", VAR_2);

    VAR_3 = 0x1abe11ed;
    VAR_4 = FUNC_3(VAR_1, ((void*)0), &VAR_3);
    FUNC_0(!VAR_4, "got %d\n", VAR_4);
    FUNC_0(VAR_3 == 0x1abe11ed, "got %d\n", VAR_3);

    FUNC_2(VAR_1);

    VAR_4 = FUNC_3((HIMAGELIST)0xdeadbeef, &VAR_2, &VAR_3);
    FUNC_0(!VAR_4, "got %d\n", VAR_4);
}
