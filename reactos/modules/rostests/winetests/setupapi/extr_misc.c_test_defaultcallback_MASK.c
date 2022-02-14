
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct default_callback_context {struct default_callback_context* message; int * progress; int * owner; struct default_callback_context* magic; } ;
typedef int * HWND ;
typedef struct default_callback_context* DWORD ;


 struct default_callback_context* FUNC_0 (int *) ;
 struct default_callback_context* FUNC_1 (int *,int *,struct default_callback_context*,int ,int *) ;
 int FUNC_2 (struct default_callback_context*) ;
 struct default_callback_context* VAR_0 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,char*,struct default_callback_context*,...) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    struct default_callback_context *VAR_1;
    static const DWORD VAR_2 = 0x43515053;
    HWND VAR_3, VAR_4;

    VAR_3 = (HWND)0x123;
    VAR_4 = (HWND)0x456;
    VAR_1 = FUNC_1(VAR_3, VAR_4, VAR_0, 0, ((void*)0));
    FUNC_4(VAR_1 != ((void*)0), "got %p\n", VAR_1);

    FUNC_4(VAR_1->magic == VAR_2 || FUNC_3(VAR_1->magic != VAR_2) , "got magic 0x%08x\n", VAR_1->magic);
    if (VAR_1->magic == VAR_2)
    {
        FUNC_4(VAR_1->owner == VAR_3, "got %p, expected %p\n", VAR_1->owner, VAR_3);
        FUNC_4(VAR_1->progress == VAR_4, "got %p, expected %p\n", VAR_1->progress, VAR_4);
        FUNC_4(VAR_1->message == VAR_0, "got %d, expected %d\n", VAR_1->message, VAR_0);
        FUNC_2(VAR_1);
    }
    else
    {
        FUNC_5("Skipping tests on old systems.\n");
        FUNC_2(VAR_1);
        return;
    }

    VAR_1 = FUNC_0(VAR_3);
    FUNC_4(VAR_1->magic == VAR_2, "got magic 0x%08x\n", VAR_1->magic);
    FUNC_4(VAR_1->owner == VAR_3, "got %p, expected %p\n", VAR_1->owner, VAR_3);
    FUNC_4(VAR_1->progress == ((void*)0), "got %p, expected %p\n", VAR_1->progress, VAR_4);
    FUNC_4(VAR_1->message == 0, "got %d\n", VAR_1->message);
    FUNC_2(VAR_1);
}
