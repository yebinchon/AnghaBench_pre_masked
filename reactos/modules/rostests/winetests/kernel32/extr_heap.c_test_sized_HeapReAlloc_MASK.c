
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int FUNC_0 () ;
 int VAR_0 ;
 char* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,char*) ;
 char* FUNC_3 (int ,int ,char*,int) ;
 int FUNC_4 (int,char*) ;

__attribute__((used)) static void FUNC_5(int VAR_1, int VAR_2)
{
    BOOL VAR_3;
    char *VAR_4 = FUNC_1(FUNC_0(), VAR_0, VAR_1);
    FUNC_4(VAR_4 != ((void*)0), "allocate failed\n");
    FUNC_4(VAR_4[0] == 0, "buffer not zeroed\n");
    VAR_4 = FUNC_3(FUNC_0(), VAR_0, VAR_4, VAR_2);
    FUNC_4(VAR_4 != ((void*)0), "reallocate failed\n");
    FUNC_4(VAR_4[VAR_2-1] == 0, "buffer not zeroed\n");
    VAR_3 = FUNC_2(FUNC_0(), 0, VAR_4);
    FUNC_4(VAR_3, "free failed\n");
}
