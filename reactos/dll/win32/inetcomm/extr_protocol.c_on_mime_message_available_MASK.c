
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int * member_0; } ;
struct TYPE_14__ {int sink; int stream; scalar_t__ location; } ;
struct TYPE_12__ {int pwszVal; } ;
struct TYPE_13__ {TYPE_1__ u; void* vt; } ;
typedef TYPE_2__ PROPVARIANT ;
typedef TYPE_3__ MimeHtmlProtocol ;
typedef int IMimeMessage ;
typedef int IMimeBody ;
typedef scalar_t__ HRESULT ;
typedef int HBODY ;
typedef TYPE_4__ FINDBODY ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int *,int ,int *) ;
 scalar_t__ FUNC_4 (int *,char*,int ,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int *,int ,int *,void**) ;
 scalar_t__ FUNC_6 (int *,TYPE_4__*,int *) ;
 scalar_t__ FUNC_7 (int *,TYPE_4__*,int *) ;
 scalar_t__ FUNC_8 (int *,int ,char*,int ,TYPE_2__*) ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 void* VAR_11 ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__,int ) ;
 scalar_t__ FUNC_14 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_15(MimeHtmlProtocol *VAR_12, IMimeMessage *VAR_13)
{
    FINDBODY VAR_14 = {((void*)0)};
    IMimeBody *VAR_15;
    PROPVARIANT VAR_16;
    HBODY VAR_17;
    HRESULT VAR_18;

    VAR_18 = FUNC_6(VAR_13, &VAR_14, &VAR_17);
    if(FUNC_0(VAR_18))
        return FUNC_14(VAR_12, VAR_18);

    if(VAR_12->location) {
        BOOL VAR_19 = VAR_6;
        do {
            VAR_18 = FUNC_7(VAR_13, &VAR_14, &VAR_17);
            if(FUNC_0(VAR_18)) {
                FUNC_11("location %s not found\n", FUNC_12(VAR_12->location));
                return FUNC_14(VAR_12, VAR_18);
            }

            VAR_16.vt = VAR_11;
            VAR_18 = FUNC_8(VAR_13, VAR_17, "content-location", 0, &VAR_16);
            if(VAR_18 == VAR_9)
                continue;
            if(FUNC_0(VAR_18))
                return FUNC_14(VAR_12, VAR_18);

            VAR_19 = !FUNC_13(VAR_12->location, VAR_16.u.pwszVal);
            FUNC_9(&VAR_16);
        }while(!VAR_19);
    }else {
        VAR_18 = FUNC_7(VAR_13, &VAR_14, &VAR_17);
        if(FUNC_0(VAR_18)) {
            FUNC_11("location %s not found\n", FUNC_12(VAR_12->location));
            return FUNC_14(VAR_12, VAR_18);
        }
    }

    VAR_18 = FUNC_5(VAR_13, VAR_17, &VAR_8, (void**)&VAR_15);
    if(FUNC_0(VAR_18))
        return FUNC_14(VAR_12, VAR_18);

    VAR_16.vt = VAR_11;
    VAR_18 = FUNC_4(VAR_15, "content-type", 0, &VAR_16);
    if(FUNC_10(VAR_18)) {
        VAR_18 = FUNC_2(VAR_12->sink, VAR_0, VAR_16.u.pwszVal);
        FUNC_9(&VAR_16);
    }



    VAR_18 = FUNC_3(VAR_15, VAR_7, &VAR_12->stream);
    if(FUNC_0(VAR_18))
        return FUNC_14(VAR_12, VAR_18);

    FUNC_1(VAR_12->sink, VAR_3
                                     | VAR_4
                                     | VAR_5
                                     | VAR_2
                                     | VAR_1, 0, 0);

    return FUNC_14(VAR_12, VAR_10);
}
