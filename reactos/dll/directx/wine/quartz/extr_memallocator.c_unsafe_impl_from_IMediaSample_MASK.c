
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * lpVtbl; } ;
typedef int StdMediaSample2 ;
typedef TYPE_1__ IMediaSample2 ;
typedef int IMediaSample ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static inline StdMediaSample2 *FUNC_2(IMediaSample * VAR_1)
{
    IMediaSample2 *VAR_2 = (IMediaSample2 *)VAR_1;

    if (!VAR_1)
        return ((void*)0);
    FUNC_0(VAR_2->lpVtbl == &VAR_0);
    return FUNC_1(VAR_2);
}
