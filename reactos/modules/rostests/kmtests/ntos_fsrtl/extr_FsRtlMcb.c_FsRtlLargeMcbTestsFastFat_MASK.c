
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef scalar_t__ ULONG ;
typedef int LONGLONG ;
typedef int LARGE_MCB ;
typedef int BOOLEAN ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,long long,int*,int*,int *,int *,int *) ;
 int FUNC_2 (int *,int*,int*,scalar_t__*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static VOID FUNC_7()
{
    LARGE_MCB VAR_1;
    LONGLONG VAR_2, VAR_3, VAR_4;
    ULONG VAR_5;
    BOOLEAN VAR_6;

    FUNC_0(&VAR_1, VAR_0);

    VAR_2 = -1;
    VAR_4 = -1;
    VAR_6 = FUNC_1(&VAR_1, 8388607LL, &VAR_2, &VAR_4, ((void*)0), ((void*)0), ((void*)0));
    FUNC_4(VAR_6, "FsRtlLookupLargeMcbEntry returned");
    FUNC_5(VAR_2, -1);
    FUNC_5(VAR_4, -1);

    VAR_3 = -1;
    VAR_2 = -1;
    VAR_5 = (ULONG) -1;
    VAR_6 = FUNC_2(&VAR_1, &VAR_3, &VAR_2, &VAR_5);
    FUNC_4(VAR_6, "FsRtlLookupLastLargeMcbEntryAndIndex returned");
    FUNC_5(VAR_3, -1);
    FUNC_5(VAR_2, -1);
    FUNC_6(VAR_5, (ULONG) -1);

    FUNC_3(&VAR_1);
}
