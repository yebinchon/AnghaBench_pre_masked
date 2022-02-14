
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int startup ;
struct TYPE_7__ {int hProcess; } ;
struct TYPE_6__ {int cb; } ;
typedef TYPE_1__ STARTUPINFOA ;
typedef TYPE_2__ PROCESS_INFORMATION ;
typedef int LRESULT ;
typedef int IUnknown ;
typedef int HRESULT ;


 int FUNC_0 (int *,char*,int *,int *,int ,int ,int *,int *,TYPE_1__*,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,int *,int ,void**) ;
 int VAR_6 ;
 int FUNC_4 (int) ;
 int VAR_7 ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (char*,char*,char const*,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(const char *VAR_8)
{
    PROCESS_INFORMATION VAR_9;
    STARTUPINFOA VAR_10;
    char VAR_11[VAR_4];
    IUnknown *VAR_12;
    HRESULT VAR_13;
    LRESULT VAR_14;

    VAR_14 = FUNC_2(((void*)0), 0, 0);
    FUNC_6(VAR_14 == VAR_1, "got %lx\n", VAR_14);

    VAR_13 = FUNC_3(0, &VAR_3, 0, (void**)&VAR_12);
    FUNC_6(VAR_13 == VAR_0, "got %x\n", VAR_13);
    VAR_13 = FUNC_3(0x10000, &VAR_3, 0, (void**)&VAR_12);
    FUNC_6(VAR_13 == VAR_0, "got %x\n", VAR_13);

    FUNC_6(VAR_6 == 1, "Object_ref = %d\n", VAR_6);
    VAR_14 = FUNC_2(&VAR_3, 0, &VAR_5);
    FUNC_6(FUNC_4(VAR_14), "got %lx\n", VAR_14);
    FUNC_6(VAR_6 > 1, "Object_ref = %d\n", VAR_6);

    VAR_13 = FUNC_3(VAR_14, &VAR_3, 0, (void**)&VAR_12);
    FUNC_6(VAR_13 == VAR_7, "hres = %x\n", VAR_13);
    FUNC_6(VAR_12 == &VAR_5, "unk != &Object\n");
    FUNC_1(VAR_12);
    FUNC_6(VAR_6 == 1, "Object_ref = %d\n", VAR_6);

    VAR_14 = FUNC_2(&VAR_3, 0, &VAR_5);
    FUNC_6(FUNC_4(VAR_14), "got %lx\n", VAR_14);
    FUNC_6(VAR_6 > 1, "Object_ref = %d\n", VAR_6);

    FUNC_7(VAR_11, "\"%s\" main ObjectFromLresult %lx", VAR_8, VAR_14);
    FUNC_5(&VAR_10, 0, sizeof(VAR_10));
    VAR_10.cb = sizeof(VAR_10);
    FUNC_0(((void*)0), VAR_11, ((void*)0), ((void*)0), VAR_2, 0, ((void*)0), ((void*)0), &VAR_10, &VAR_9);
    FUNC_8(VAR_9.hProcess);
    FUNC_6(VAR_6 == 1, "Object_ref = %d\n", VAR_6);
}
