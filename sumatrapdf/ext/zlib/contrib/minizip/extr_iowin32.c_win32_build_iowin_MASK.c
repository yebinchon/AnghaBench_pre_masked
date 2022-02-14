
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * voidpf ;
struct TYPE_2__ {scalar_t__ error; int * hf; } ;
typedef TYPE_1__ WIN32FILE_IOWIN ;
typedef int * HANDLE ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int * FUNC_1 (int) ;

__attribute__((used)) static voidpf FUNC_2(HANDLE VAR_1)
{
    voidpf VAR_2=((void*)0);

    if ((VAR_1 != ((void*)0)) && (VAR_1 != VAR_0))
    {
        WIN32FILE_IOWIN VAR_3;
        VAR_3.hf = VAR_1;
        VAR_3.error = 0;
        VAR_2 = FUNC_1(sizeof(WIN32FILE_IOWIN));

        if (VAR_2==((void*)0))
            FUNC_0(VAR_1);
        else
            *((WIN32FILE_IOWIN*)VAR_2) = VAR_3;
    }
    return VAR_2;
}
