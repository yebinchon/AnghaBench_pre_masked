
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* HANDLE ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int,void**,int ,int ) ;
 void* VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static void *FUNC_3(void *VAR_4)
{
    FUNC_1("terminal");
    HANDLE VAR_5 = VAR_4;
    HANDLE VAR_6[2] = {VAR_5, VAR_3};
    while (1) {
        DWORD VAR_7 = FUNC_0(2, VAR_6, VAR_0, VAR_1);
        if (VAR_7 != VAR_2)
            break;
        FUNC_2(VAR_5);
    }
    return ((void*)0);
}
