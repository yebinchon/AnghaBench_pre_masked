
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;
typedef int INT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *,int,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int *,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(MSIHANDLE VAR_8, INT VAR_9, INT VAR_10, const char *VAR_11)
{
    MSIHANDLE VAR_12;
    UINT VAR_13;

    VAR_13 = FUNC_1(VAR_8, ((void*)0), 5, &VAR_12);
    FUNC_4(VAR_13 == VAR_0, "Expected ERROR_SUCCESS, got %u\n", VAR_13);

    VAR_13 = FUNC_3(VAR_12, VAR_3, VAR_7, 0, ((void*)0), VAR_11);
    FUNC_4(VAR_13 == VAR_0, "Expected ERROR_SUCCESS, got %u\n", VAR_13);

    VAR_13 = FUNC_3(VAR_12, VAR_2, VAR_7, 0, ((void*)0),
                                   "{004757CA-5092-49C2-AD20-28E1CE0DF5F2}");
    FUNC_4(VAR_13 == VAR_0, "Expected ERROR_SUCCESS, got %u\n", VAR_13);

    VAR_13 = FUNC_3(VAR_12, VAR_1, VAR_6, VAR_9, ((void*)0), ((void*)0));
    FUNC_4(VAR_13 == VAR_0, "Expected ERROR_SUCCESS, got %u\n", VAR_13);

    VAR_13 = FUNC_3(VAR_12, VAR_5, VAR_6, VAR_10, ((void*)0), ((void*)0));
    FUNC_4(VAR_13 == VAR_0, "Expected ERROR_SUCCESS, got %u\n", VAR_13);

    VAR_13 = FUNC_3(VAR_12, VAR_4, VAR_7, 0, ((void*)0), "MSITEST");
    FUNC_4(VAR_13 == VAR_0, "Expected ERROR_SUCCESS, got %u\n", VAR_13);


    VAR_13 = FUNC_2(VAR_12);
    FUNC_4(VAR_13 == VAR_0, "Expected ERROR_SUCCESS, got %u\n", VAR_13);

    FUNC_0(VAR_12);
}
