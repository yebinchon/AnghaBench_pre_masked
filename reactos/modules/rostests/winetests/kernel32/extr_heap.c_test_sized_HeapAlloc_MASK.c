
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int FUNC_0 () ;
 int VAR_0 ;
 char* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int,char*) ;

__attribute__((used)) static void FUNC_4(int VAR_1)
{
    BOOL VAR_2;
    char *VAR_3 = FUNC_1(FUNC_0(), VAR_0, VAR_1);
    FUNC_3(VAR_3 != ((void*)0), "allocate failed\n");
    FUNC_3(VAR_3[0] == 0, "buffer not zeroed\n");
    VAR_2 = FUNC_2(FUNC_0(), 0, VAR_3);
    FUNC_3(VAR_2, "free failed\n");
}
