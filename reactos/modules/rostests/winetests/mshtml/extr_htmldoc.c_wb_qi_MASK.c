
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; } ;
struct TYPE_17__ {int member_0; int member_1; int member_2; TYPE_1__ member_3; } ;
typedef TYPE_2__ const* REFIID ;
typedef TYPE_2__ IID ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ const VAR_2 ;
 TYPE_2__ const VAR_3 ;
 TYPE_2__ const VAR_4 ;
 TYPE_2__ const VAR_5 ;
 TYPE_2__ const VAR_6 ;
 TYPE_2__ const VAR_7 ;
 TYPE_2__ const VAR_8 ;
 TYPE_2__ const VAR_9 ;
 scalar_t__ FUNC_0 (TYPE_2__ const*,TYPE_2__ const*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__ const*) ;

__attribute__((used)) static HRESULT FUNC_4(REFIID VAR_16, void **VAR_17)
{
    static const IID VAR_18 = {0x1af32b6c, 0xa3ba,0x48b9,{0xb2,0x4e,0x8a,0xa9,0xc4,0x1f,0x6e,0xcd}};
    static const IID VAR_19 = {0x486f6159,0x9f3f,0x4827,{0x82,0xd4,0x28,0x3c,0xef,0x39,0x77,0x33}};

    *VAR_17 = ((void*)0);

    if(FUNC_0(&VAR_4, VAR_16) || FUNC_0(&VAR_5, VAR_16)
            || FUNC_0(&VAR_7, VAR_16) || FUNC_0(&VAR_6, VAR_16)) {
        *VAR_17 = &VAR_11;
        return VAR_10;
    }

    if(FUNC_0(VAR_16, &VAR_3))
        return VAR_1;

    if(FUNC_0(VAR_16, &VAR_2)) {
        *VAR_17 = &VAR_0;
        return VAR_10;
    }

    if(FUNC_0(VAR_16, &VAR_8)) {
        *VAR_17 = &VAR_12;
        return VAR_10;
    }

    if(FUNC_0(VAR_16, &VAR_9)) {

        *VAR_17 = VAR_15 ? (void*)&VAR_14 : (void*)&VAR_13;
        return VAR_10;
    }

    if(FUNC_0(VAR_16, &VAR_18)) {
        FUNC_2("QI(IID_IWebBrowserPriv2IE7)\n");
        return VAR_1;
    }

    if(FUNC_0(VAR_16, &VAR_19)) {
        FUNC_2("QI(IID_IWebBrowserPriv2IE8XP)\n");
        return VAR_1;
    }

    FUNC_1(0, "unexpected call %s\n", FUNC_3(VAR_16));
    return VAR_1;
}
