
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int install_sec; int hinf; } ;
typedef int INT ;
typedef int INFCONTEXT ;
typedef int HRESULT ;
typedef TYPE_1__ ADVInfo ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int *,int,int*) ;

__attribute__((used)) static HRESULT FUNC_3(const ADVInfo *VAR_3)
{
    INT VAR_4;
    INFCONTEXT VAR_5;
    HRESULT VAR_6 = VAR_2;

    if (!FUNC_1(VAR_3->hinf, VAR_3->install_sec,
                             VAR_0, &VAR_5))
        return VAR_2;

    if (!FUNC_2(&VAR_5, 1, &VAR_4))
        return VAR_2;

    if (VAR_4 == 1)
        VAR_6 = FUNC_0(0, ((void*)0)) ? VAR_2 : VAR_1;

    return VAR_6;
}
