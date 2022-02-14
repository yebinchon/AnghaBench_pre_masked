
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* pszVal; } ;
struct TYPE_8__ {TYPE_1__ u; void* vt; } ;
typedef TYPE_2__ PROPVARIANT ;
typedef int IMimeMessage ;
typedef int IMimeBody ;
typedef scalar_t__ HRESULT ;


 void* FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,char*,int ,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,char*,int ,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int *,int ,int *,void**) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_7 (int *,int **) ;
 char* FUNC_8 (int ) ;
 int VAR_3 ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int FUNC_11 (int,char*,scalar_t__) ;
 int FUNC_12 (void*,char const*) ;
 scalar_t__ FUNC_13 (char const*) ;

__attribute__((used)) static void FUNC_14(void)
{
    static const char VAR_6[] = "wine topic";
    HRESULT VAR_7;
    IMimeMessage *VAR_8;
    IMimeBody *VAR_9;
    PROPVARIANT VAR_10;

    VAR_7 = FUNC_7(((void*)0), &VAR_8);
    FUNC_11(VAR_7 == VAR_4, "ret %08x\n", VAR_7);

    FUNC_10(&VAR_10);

    VAR_7 = FUNC_5(VAR_8, VAR_0, &VAR_1, (void**)&VAR_9);
    FUNC_11(VAR_7 == VAR_4, "ret %08x\n", VAR_7);

    VAR_7 = FUNC_1(VAR_9, "Subject");
    FUNC_11(VAR_7 == VAR_2, "ret %08x\n", VAR_7);

    VAR_7 = FUNC_1(VAR_9, FUNC_8(VAR_3));
    FUNC_11(VAR_7 == VAR_2, "ret %08x\n", VAR_7);

    VAR_10.vt = VAR_5;
    VAR_10.u.pszVal = FUNC_0(FUNC_13(VAR_6)+1);
    FUNC_12(VAR_10.u.pszVal, VAR_6);
    VAR_7 = FUNC_4(VAR_9, "Subject", 0, &VAR_10);
    FUNC_11(VAR_7 == VAR_4, "ret %08x\n", VAR_7);
    FUNC_9(&VAR_10);

    VAR_7 = FUNC_1(VAR_9, "Subject");
    FUNC_11(VAR_7 == VAR_4, "ret %08x\n", VAR_7);

    VAR_7 = FUNC_2(VAR_9, "Subject", 0, &VAR_10);
    FUNC_11(VAR_7 == VAR_2, "ret %08x\n", VAR_7);

    VAR_10.vt = VAR_5;
    VAR_10.u.pszVal = FUNC_0(FUNC_13(VAR_6)+1);
    FUNC_12(VAR_10.u.pszVal, VAR_6);
    VAR_7 = FUNC_4(VAR_9, FUNC_8(VAR_3), 0, &VAR_10);
    FUNC_11(VAR_7 == VAR_4, "ret %08x\n", VAR_7);
    FUNC_9(&VAR_10);

    VAR_7 = FUNC_1(VAR_9, FUNC_8(VAR_3));
    FUNC_11(VAR_7 == VAR_4, "ret %08x\n", VAR_7);

    VAR_7 = FUNC_2(VAR_9, FUNC_8(VAR_3), 0, &VAR_10);
    FUNC_11(VAR_7 == VAR_2, "ret %08x\n", VAR_7);

    FUNC_3(VAR_9);
    FUNC_6(VAR_8);
}
