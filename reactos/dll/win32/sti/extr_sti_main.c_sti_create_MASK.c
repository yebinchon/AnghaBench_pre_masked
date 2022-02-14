
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REFIID ;
typedef int PSTIW ;
typedef int PSTIA ;
typedef int LPVOID ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int,int *,int *) ;
 int FUNC_5 (int ,int,int *,int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static HRESULT FUNC_7( REFIID VAR_7, IUnknown *VAR_8, LPVOID *VAR_9 )
{
    if (VAR_8 != ((void*)0) && !FUNC_3(VAR_7, &VAR_4))
        return VAR_0;

    if (FUNC_2(VAR_7, &VAR_4))
        return FUNC_5(FUNC_1(), VAR_6 | VAR_5, (PSTIW*) VAR_9, VAR_8);
    else if (FUNC_2(VAR_7, &VAR_3))
        return FUNC_5(FUNC_1(), VAR_6 | VAR_5, (PSTIW*) VAR_9, ((void*)0));
    else if (FUNC_2(VAR_7, &VAR_2))
        return FUNC_4(FUNC_1(), VAR_6, (PSTIA*) VAR_9, ((void*)0));
    else
    {
        FUNC_0("no interface %s\n", FUNC_6(VAR_7));
        return VAR_1;
    }
}
