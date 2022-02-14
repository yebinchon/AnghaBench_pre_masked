
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int memsize; char* mem; scalar_t__ mempos; int memfree; } ;
typedef int LPVOID ;
typedef int HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,int,int*,int *) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (char*,...) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(HANDLE VAR_4)
{
    FUNC_3 ("BatchFile2Mem ()\n");

    VAR_3->memsize = FUNC_0(VAR_4, ((void*)0));
    VAR_3->mem = (char *)FUNC_4(VAR_3->memsize+1);


    if (VAR_3->mem != ((void*)0))
    {
        FUNC_3 ("BatchFile2Mem memory %08x - %08x\n",VAR_3->mem,VAR_3->memsize);
        FUNC_2 (VAR_4, 0, ((void*)0), VAR_1);
        FUNC_1(VAR_4, (LPVOID)VAR_3->mem, VAR_3->memsize, &VAR_3->memsize, ((void*)0));
        VAR_3->mem[VAR_3->memsize]='\0';
        VAR_3->memfree=VAR_2;
    }
    else
    {
        VAR_3->memsize=0;
        VAR_3->memfree=VAR_0;
    }
    VAR_3->mempos = 0;
}
