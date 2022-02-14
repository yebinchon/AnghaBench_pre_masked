
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_7__ {void* pwszVal; void* pszVal; } ;
struct TYPE_8__ {scalar_t__ vt; TYPE_1__ u; } ;
typedef TYPE_2__ PROPVARIANT ;
typedef scalar_t__ HRESULT ;


 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_2__*,int ,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (void*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,char*,scalar_t__) ;
 int FUNC_8 (void*,int ) ;
 int FUNC_9 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_10 (void*) ;

__attribute__((used)) static void FUNC_11(void)
{
    PROPVARIANT VAR_7, VAR_8;
    HRESULT VAR_9;

    FUNC_3(&VAR_7);

    VAR_8.vt = VAR_3;
    VAR_9 = FUNC_1(&VAR_7, &VAR_8, 0, VAR_2);
    FUNC_7(VAR_9 == VAR_0, "hr=%x\n", VAR_9);
    FUNC_7(VAR_7.vt == VAR_2, "got %d\n", VAR_7.vt);
    FUNC_7(!FUNC_4(VAR_7.u.pwszVal, VAR_4), "got %s\n", FUNC_10(VAR_7.u.pwszVal));
    FUNC_2(&VAR_7);
    FUNC_2(&VAR_8);

    VAR_8.vt = VAR_1;
    VAR_8.u.pszVal = FUNC_0(FUNC_9(VAR_5)+1);
    FUNC_8(VAR_8.u.pszVal, VAR_5);
    VAR_9 = FUNC_1(&VAR_7, &VAR_8, 0, VAR_2);
    FUNC_7(VAR_9 == VAR_0, "hr=%x\n", VAR_9);
    FUNC_7(VAR_7.vt == VAR_2, "got %d\n", VAR_7.vt);
    FUNC_7(!FUNC_4(VAR_7.u.pwszVal, VAR_6), "got %s\n", FUNC_10(VAR_7.u.pwszVal));
    FUNC_2(&VAR_7);
    FUNC_2(&VAR_8);

    VAR_8.vt = VAR_2;
    VAR_8.u.pwszVal = FUNC_0( (FUNC_6(VAR_6)+1) * sizeof(WCHAR));
    FUNC_5(VAR_8.u.pwszVal, VAR_6);
    VAR_9 = FUNC_1(&VAR_7, &VAR_8, 0, VAR_2);
    FUNC_7(VAR_9 == VAR_0, "hr=%x\n", VAR_9);
    FUNC_7(VAR_7.vt == VAR_2, "got %d\n", VAR_7.vt);
    FUNC_7(!FUNC_4(VAR_7.u.pwszVal, VAR_6), "got %s\n", FUNC_10(VAR_7.u.pwszVal));
    FUNC_2(&VAR_7);
    FUNC_2(&VAR_8);
}
