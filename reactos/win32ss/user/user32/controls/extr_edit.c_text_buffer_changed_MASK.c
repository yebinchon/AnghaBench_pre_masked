
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {int * logAttr; scalar_t__ text_length; } ;
typedef TYPE_1__ EDITSTATE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static inline void FUNC_3(EDITSTATE *VAR_0)
{
    VAR_0->text_length = (UINT)-1;

    FUNC_2( FUNC_1(), 0, VAR_0->logAttr );
    VAR_0->logAttr = ((void*)0);
    FUNC_0(VAR_0);
}
