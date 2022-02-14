
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NTSTATUS ;
typedef int IFInfo ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,char*,int *) ;

NTSTATUS FUNC_4(HANDLE VAR_0,
                             char *VAR_1,
                             DWORD VAR_2,
                             IFInfo *VAR_3) {
    NTSTATUS VAR_4 =
        VAR_1 ?
        FUNC_3( VAR_0, VAR_1, VAR_3 ) :
        FUNC_2( VAR_0, VAR_2, VAR_3 );

    if (!FUNC_1(VAR_4)) {
        FUNC_0("getIPAddrEntryForIf returning %lx\n", VAR_4);
    }

    return VAR_4;
}
