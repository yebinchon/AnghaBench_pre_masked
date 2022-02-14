
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {int dwStyle; } ;
struct TYPE_7__ {void* y; void* x; } ;
typedef TYPE_1__ POINT ;
typedef int LRESULT ;
typedef void* INT ;
typedef TYPE_2__ HEADER_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__ const*,TYPE_1__*,scalar_t__*,void**) ;
 int FUNC_1 (TYPE_2__ const*,int ,void*,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static LRESULT
FUNC_2 (const HEADER_INFO *VAR_6, INT VAR_7, INT VAR_8)
{
    POINT VAR_9;
    UINT VAR_10;
    INT VAR_11;

    VAR_9.x = VAR_7;
    VAR_9.y = VAR_8;
    FUNC_0 (VAR_6, &VAR_9, &VAR_10, &VAR_11);

    if ((VAR_6->dwStyle & VAR_2) && (VAR_10 == VAR_5))
        FUNC_1(VAR_6, VAR_1, VAR_11, ((void*)0));
    else if ((VAR_10 == VAR_3) || (VAR_10 == VAR_4))
        FUNC_1(VAR_6, VAR_0, VAR_11, ((void*)0));

    return 0;
}
