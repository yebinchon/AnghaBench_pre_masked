
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int install_sec; int hinf; int * working_dir; } ;
typedef int * PVOID ;
typedef int HRESULT ;
typedef int BOOL ;
typedef TYPE_1__ ADVInfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int * FUNC_2 (int *,int ,int ,int ,int *) ;
 int FUNC_3 (int *,int ,int ,int,int *,int *,int ,int *,int *,int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static HRESULT FUNC_5(const ADVInfo *VAR_9)
{
    BOOL VAR_10;
    HRESULT VAR_11;
    PVOID VAR_12;

    VAR_12 = FUNC_2(((void*)0), VAR_1, 0, 0, ((void*)0));
    if (!VAR_12)
        return FUNC_0(FUNC_1());

    VAR_10 = FUNC_3(((void*)0), VAR_9->hinf, VAR_9->install_sec,
                                      VAR_2, ((void*)0), VAR_9->working_dir,
                                      VAR_6, VAR_8,
                                      VAR_12, ((void*)0), ((void*)0));
    if (!VAR_10)
    {
        VAR_11 = FUNC_0(FUNC_1());
        FUNC_4(VAR_12);

        return VAR_11;
    }

    FUNC_4(VAR_12);

    VAR_10 = FUNC_3(((void*)0), VAR_9->hinf, VAR_9->install_sec,
                                      VAR_3 | VAR_4 | VAR_5,
                                      VAR_0, ((void*)0), 0,
                                      ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    if (!VAR_10)
        return FUNC_0(FUNC_1());

    return VAR_7;
}
