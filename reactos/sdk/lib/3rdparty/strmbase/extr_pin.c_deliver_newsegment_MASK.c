
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rate; int tStop; int tStart; } ;
typedef TYPE_1__ newsegmentargs ;
typedef TYPE_1__* LPVOID ;
typedef int IPin ;
typedef int HRESULT ;


 int FUNC_0 (int *,int ,int ,int ) ;

__attribute__((used)) static HRESULT FUNC_1(IPin *VAR_0, LPVOID VAR_1)
{
    newsegmentargs *VAR_2 = VAR_1;
    return FUNC_0(VAR_0, VAR_2->tStart, VAR_2->tStop, VAR_2->rate);
}
