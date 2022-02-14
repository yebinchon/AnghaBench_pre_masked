
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int char_u ;
struct TYPE_3__ {scalar_t__ vc_type; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int * FUNC_0 (TYPE_1__*,int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static const char *
FUNC_2(char_u **VAR_2, const char *VAR_3)
{
    if (VAR_1.vc_type == VAR_0)
 return VAR_3;

    FUNC_1(*VAR_2);
    *VAR_2 = FUNC_0(&VAR_1, (char_u *)VAR_3, ((void*)0));

    return (const char *)*VAR_2;
}
