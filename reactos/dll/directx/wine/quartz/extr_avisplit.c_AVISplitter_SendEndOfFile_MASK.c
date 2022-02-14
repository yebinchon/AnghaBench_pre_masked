
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ppPins; } ;
struct TYPE_5__ {TYPE_1__ Parser; } ;
typedef int IPin ;
typedef int HRESULT ;
typedef int DWORD ;
typedef TYPE_2__ AVISplitterImpl ;


 int FUNC_0 (int ,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static HRESULT FUNC_5(AVISplitterImpl *VAR_1, DWORD VAR_2)
{
    IPin* VAR_3 = ((void*)0);
    HRESULT VAR_4;

    FUNC_4("End of file reached\n");

    VAR_4 = FUNC_0(VAR_1->Parser.ppPins[VAR_2+1], &VAR_3);
    if (FUNC_3(VAR_4))
    {
        VAR_4 = FUNC_1(VAR_3);
        FUNC_2(VAR_3);
    }
    FUNC_4("--> %x\n", VAR_4);


    return VAR_0;
}
