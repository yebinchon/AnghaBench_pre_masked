
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ uri; scalar_t__ uri_builder; } ;
typedef TYPE_1__ nsWineURI ;
typedef int HRESULT ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int ,int ,scalar_t__*) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static BOOL FUNC_4(nsWineURI *VAR_2)
{
    HRESULT VAR_3;

    FUNC_3(VAR_2->uri || VAR_2->uri_builder);

    if(!VAR_2->uri) {
        VAR_3 = FUNC_1(VAR_2->uri_builder, 0, 0, &VAR_2->uri);
        if(FUNC_0(VAR_3)) {
            FUNC_2("CreateUriSimple failed: %08x\n", VAR_3);
            return VAR_0;
        }
    }

    return VAR_1;
}
