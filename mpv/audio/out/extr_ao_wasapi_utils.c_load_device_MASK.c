
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;
typedef int LPWSTR ;
typedef int IMMDeviceEnumerator ;
typedef int IMMDevice ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *,void**) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct mp_log*,char*,int ) ;

__attribute__((used)) static bool FUNC_8(struct mp_log *VAR_3,
                           IMMDevice **VAR_4, LPWSTR VAR_5)
{
    IMMDeviceEnumerator *VAR_6 = ((void*)0);
    HRESULT VAR_7 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
                                  &VAR_2,
                                  (void **)&VAR_6);
    FUNC_1(VAR_7);

    VAR_7 = FUNC_3(VAR_6, VAR_5, VAR_4);
    FUNC_1(VAR_7);

exit_label:
    if (FUNC_2(VAR_7))
        FUNC_7(VAR_3, "Error loading selected device: %s\n", FUNC_6(VAR_7));
    FUNC_4(VAR_6);
    return FUNC_5(VAR_7);
}
