
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wasapi_state {int hWake; } ;
struct ao {struct wasapi_state* priv; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
    struct ao *VAR_1 = VAR_0;
    struct wasapi_state *VAR_2 = VAR_1->priv;
    FUNC_0(VAR_2->hWake);
}
