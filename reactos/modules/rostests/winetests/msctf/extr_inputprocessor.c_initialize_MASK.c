
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HRESULT ;
typedef int HKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int ,int *,void**) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char*,int ,int,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static HRESULT FUNC_6(void)
{
    HRESULT VAR_15;
    HKEY VAR_16;

    FUNC_1(((void*)0));

    if (FUNC_3(VAR_6, "Software\\Microsoft\\CTF\\TIP", 0,
                      VAR_10|VAR_11, &VAR_16) != VAR_4)
    {
        FUNC_5("Not enough permission to register input processor\n");
        return VAR_5;
    }
    FUNC_2(VAR_16);

    VAR_15 = FUNC_0 (&VAR_2, ((void*)0),
          VAR_0, &VAR_8, (void**)&VAR_13);
    if (FUNC_4(VAR_15))
        VAR_15 = FUNC_0 (&VAR_1, ((void*)0),
          VAR_0, &VAR_7, (void**)&VAR_12);
    if (FUNC_4(VAR_15))
        VAR_15 = FUNC_0 (&VAR_3, ((void*)0),
          VAR_0, &VAR_9, (void**)&VAR_14);
    return VAR_15;
}
