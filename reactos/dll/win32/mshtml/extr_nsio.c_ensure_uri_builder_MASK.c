
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int uri_builder; int uri; int is_mutable; } ;
typedef TYPE_1__ nsWineURI ;
typedef int HRESULT ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static BOOL FUNC_5(nsWineURI *VAR_2)
{
    if(!VAR_2->is_mutable) {
        FUNC_2("Not mutable URI\n");
        return VAR_0;
    }

    if(!VAR_2->uri_builder) {
        HRESULT VAR_3;

        if(!FUNC_3(VAR_2))
            return VAR_0;

        VAR_3 = FUNC_0(VAR_2->uri, 0, 0, &VAR_2->uri_builder);
        if(FUNC_1(VAR_3)) {
            FUNC_2("CreateIUriBuilder failed: %08x\n", VAR_3);
            return VAR_0;
        }
    }

    FUNC_4(VAR_2);
    return VAR_1;
}
