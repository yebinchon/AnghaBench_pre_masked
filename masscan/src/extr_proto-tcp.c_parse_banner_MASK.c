
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_length; } ;
struct TCP_Control_Block {TYPE_1__ banout; int banner1_state; } ;
struct TCP_ConnectionTable {int banner1; } ;
struct InteractiveData {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,unsigned char const*,size_t,TYPE_1__*,struct InteractiveData*) ;

__attribute__((used)) static size_t
FUNC_2(
    struct TCP_ConnectionTable *VAR_0,
    struct TCP_Control_Block *VAR_1,
    const unsigned char *VAR_2,
    size_t VAR_3,
    struct InteractiveData *VAR_4)
{
    FUNC_0(VAR_1->banout.max_length);

    FUNC_1(
                                    VAR_0->banner1,
                                    &VAR_1->banner1_state,
                                    VAR_2,
                                    VAR_3,
                                    &VAR_1->banout,
                                    VAR_4);
    return VAR_3;
}
