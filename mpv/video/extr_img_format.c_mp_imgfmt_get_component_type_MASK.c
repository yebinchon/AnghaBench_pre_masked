
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum mp_component_type { ____Placeholder_mp_component_type } mp_component_type ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int) ;

enum mp_component_type FUNC_2(int VAR_6)
{
    if (VAR_6 == VAR_2)
        return VAR_4;

    const AVPixFmtDescriptor *VAR_7 =
        FUNC_0(FUNC_1(VAR_6));

    if (!VAR_7 || (VAR_7->flags & VAR_1))
        return VAR_5;






    return VAR_4;
}
