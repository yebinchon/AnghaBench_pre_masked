
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expected; int flags; } ;
typedef int IUri ;
typedef scalar_t__ HRESULT ;
typedef size_t DWORD ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int,char*,scalar_t__,...) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int ,int **) ;

__attribute__((used)) static void FUNC_3(void) {
    DWORD VAR_2;

    for(VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); ++VAR_2) {
        HRESULT VAR_3;
        IUri *VAR_4 = (void*) 0xdeadbeef;

        VAR_3 = FUNC_2(VAR_0, ((void*)0), VAR_1[VAR_2].flags, 0, &VAR_4);
        FUNC_1(VAR_3 == VAR_1[VAR_2].expected, "Error: CreateUriWithFragment returned 0x%08x, expected 0x%08x. flags=0x%08x.\n",
            VAR_3, VAR_1[VAR_2].expected, VAR_1[VAR_2].flags);
        FUNC_1(VAR_4 == ((void*)0), "Error: Expected uri to be NULL, but was %p instead.\n", VAR_4);
    }
}
