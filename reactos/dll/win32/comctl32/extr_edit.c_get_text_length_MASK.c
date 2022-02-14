
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {scalar_t__ text_length; int text; } ;
typedef TYPE_1__ EDITSTATE ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline UINT FUNC_1(EDITSTATE *VAR_0)
{
    if(VAR_0->text_length == (UINT)-1)
        VAR_0->text_length = FUNC_0(VAR_0->text);
    return VAR_0->text_length;
}
