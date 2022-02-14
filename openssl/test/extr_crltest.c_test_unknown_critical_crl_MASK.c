
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_CRL ;


 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_5 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(int VAR_5)
{
    X509_CRL *VAR_6 = FUNC_0(VAR_4[VAR_5]);
    int VAR_7;

    VAR_7 = FUNC_2(VAR_6)
        && FUNC_1(FUNC_5(VAR_2, VAR_3,
                              FUNC_4(VAR_6, ((void*)0)),
                              VAR_1),
                       VAR_0);
    FUNC_3(VAR_6);
    return VAR_7;
}
