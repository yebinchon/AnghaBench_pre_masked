
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* library_name; int library; int entry; int refs; } ;
typedef TYPE_1__ OpenDll ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ) ;
 int VAR_0 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(OpenDll *VAR_1, BOOL VAR_2)
{
    if (!FUNC_4(&VAR_1->refs) && VAR_2)
    {
        FUNC_0(&VAR_0);
        FUNC_7(&VAR_1->entry);
        FUNC_5(&VAR_0);

        FUNC_6("freeing %p\n", VAR_1->library);
        FUNC_1(VAR_1->library);

        FUNC_3(FUNC_2(), 0, VAR_1->library_name);
        FUNC_3(FUNC_2(), 0, VAR_1);
    }
}
