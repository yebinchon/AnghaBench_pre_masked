
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Context; } ;
typedef TYPE_1__ HLPFILE ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,char*,int **,int **) ;
 int FUNC_2 (int ,int ,unsigned int) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int *,unsigned int) ;

__attribute__((used)) static BOOL FUNC_5(HLPFILE *VAR_2)
{
    BYTE *VAR_3, *VAR_4;
    unsigned VAR_5;

    if (!FUNC_1(VAR_2, "|CONTEXT", &VAR_3, &VAR_4))
    {FUNC_3("context0\n"); return VAR_0;}

    VAR_5 = VAR_4 - VAR_3;
    VAR_2->Context = FUNC_2(FUNC_0(), 0, VAR_5);
    if (!VAR_2->Context) return VAR_0;
    FUNC_4(VAR_2->Context, VAR_3, VAR_5);

    return VAR_1;
}
