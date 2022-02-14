
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int install_sec; int hinf; } ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ ADVInfo ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static HRESULT FUNC_4(ADVInfo *VAR_10)
{
    HRESULT VAR_11;

    VAR_11 = FUNC_2(VAR_10);
    if (VAR_11 != VAR_5)
        return VAR_11;

    VAR_11 = FUNC_3(VAR_10->hinf, VAR_10->install_sec, VAR_4,
                                VAR_9, VAR_10);
    if (VAR_11 != VAR_5)
        return VAR_11;

    FUNC_0(((void*)0));
    VAR_11 = FUNC_3(VAR_10->hinf, VAR_10->install_sec,
                                VAR_2, VAR_8, ((void*)0));
    FUNC_1();
    if (VAR_11 != VAR_5)
        return VAR_11;

    VAR_11 = FUNC_3(VAR_10->hinf, VAR_10->install_sec,
                                VAR_1, VAR_7, VAR_10);
    if (VAR_11 != VAR_5)
        return VAR_11;

    VAR_11 = FUNC_3(VAR_10->hinf, VAR_10->install_sec, VAR_3,
                                VAR_9, VAR_10);
    if (VAR_11 != VAR_5)
        return VAR_11;

    VAR_11 = FUNC_3(VAR_10->hinf, VAR_10->install_sec,
                                VAR_0, VAR_6, VAR_10);
    if (VAR_11 != VAR_5)
        return VAR_11;

    return VAR_11;
}
