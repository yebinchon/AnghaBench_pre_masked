
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IMoniker ;
typedef int IEnumMoniker ;
typedef int ICreateDevEnum ;
typedef int GUID ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *,void**) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int const*,int **,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int,int **,int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static BOOL FUNC_7(const GUID *VAR_6, IMoniker *VAR_7)
{
    ICreateDevEnum *VAR_8;
    IEnumMoniker *VAR_9;
    IMoniker *VAR_10;
    BOOL VAR_11 = VAR_2;

    FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_3, (void **)&VAR_8);
    FUNC_1(VAR_8, VAR_6, &VAR_9, 0);
    while (!VAR_11 && FUNC_3(VAR_9, 1, &VAR_10, ((void*)0)) == VAR_4)
    {
        if (FUNC_5(VAR_10, VAR_7) == VAR_4)
            VAR_11 = VAR_5;

        FUNC_6(VAR_10);
    }

    FUNC_4(VAR_9);
    FUNC_2(VAR_8);
    return VAR_11;
}
