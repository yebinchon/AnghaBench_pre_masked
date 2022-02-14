
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum auth_scheme { ____Placeholder_auth_scheme } auth_scheme ;
struct TYPE_2__ {scalar_t__ scheme; } ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum auth_scheme FUNC_0( DWORD VAR_3 )
{
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) if (VAR_3 == VAR_1[VAR_4].scheme) return VAR_4;
    return VAR_0;
}
