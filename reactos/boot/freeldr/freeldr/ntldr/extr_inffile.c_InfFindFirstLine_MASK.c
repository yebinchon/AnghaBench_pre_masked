
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* FirstSection; } ;
struct TYPE_7__ {struct TYPE_7__* Next; int * FirstLine; int Name; } ;
struct TYPE_6__ {void* Line; void* Section; void* Inf; } ;
typedef void* PVOID ;
typedef TYPE_1__* PINFCONTEXT ;
typedef TYPE_2__* PINFCACHESECTION ;
typedef int * PINFCACHELINE ;
typedef TYPE_3__* PINFCACHE ;
typedef int * PCSTR ;
typedef int * HINF ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_2__*,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int *) ;

BOOLEAN
FUNC_2 (
    HINF VAR_2,
    PCSTR VAR_3,
    PCSTR VAR_4,
    PINFCONTEXT VAR_5)
{
    PINFCACHE VAR_6;
    PINFCACHESECTION VAR_7;
    PINFCACHELINE VAR_8;

    if ((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)) || (VAR_5 == ((void*)0)))
    {

        return VAR_0;
    }

    VAR_6 = (PINFCACHE)VAR_2;


    VAR_7 = VAR_6->FirstSection;
    while (VAR_7 != ((void*)0))
    {



        if (FUNC_1(VAR_7->Name, VAR_3) == 0)
        {
            if (VAR_4 != ((void*)0))
            {
                VAR_8 = FUNC_0(VAR_7, VAR_4);
            }
            else
            {
                VAR_8 = VAR_7->FirstLine;
            }

            if (VAR_8 == ((void*)0))
                return VAR_0;

            VAR_5->Inf = (PVOID)VAR_6;
            VAR_5->Section = (PVOID)VAR_7;
            VAR_5->Line = (PVOID)VAR_8;

            return VAR_1;
        }


        VAR_7 = VAR_7->Next;
    }



    return VAR_0;
}
