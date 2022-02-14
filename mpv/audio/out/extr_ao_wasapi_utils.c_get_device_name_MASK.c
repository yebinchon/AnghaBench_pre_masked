
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct TYPE_5__ {int pwszVal; } ;
typedef TYPE_1__ PROPVARIANT ;
typedef int IPropertyStore ;
typedef int IMMDevice ;
typedef int HRESULT ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int **) ;
 int FUNC_3 (int *,int *,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 int FUNC_7 (int ) ;
 int VAR_1 ;
 char* FUNC_8 (void*,int ) ;
 int FUNC_9 (struct mp_log*,char*,int ) ;
 char* FUNC_10 (void*,char*) ;

__attribute__((used)) static char* FUNC_11(struct mp_log *VAR_2, void *VAR_3, IMMDevice *VAR_4)
{
    char *VAR_5 = ((void*)0);
    IPropertyStore *VAR_6 = ((void*)0);
    PROPVARIANT VAR_7;
    FUNC_5(&VAR_7);

    HRESULT VAR_8 = FUNC_2(VAR_4, VAR_0, &VAR_6);
    FUNC_0(VAR_8);

    VAR_8 = FUNC_3(VAR_6, &VAR_1,
                                 &VAR_7);
    FUNC_0(VAR_8);

    VAR_5 = FUNC_8(VAR_3, VAR_7.pwszVal);

exit_label:
    if (FUNC_1(VAR_8))
        FUNC_9(VAR_2, "Failed getting device name: %s\n", FUNC_7(VAR_8));
    FUNC_4(&VAR_7);
    FUNC_6(VAR_6);
    return VAR_5 ? VAR_5 : FUNC_10(VAR_3, "");
}
