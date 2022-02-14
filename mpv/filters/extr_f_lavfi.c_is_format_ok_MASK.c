
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_frame {scalar_t__ type; int data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct mp_frame VAR_2, struct mp_frame VAR_3)
{
    if (VAR_2.type == VAR_3.type && VAR_2.type == VAR_1)
        return FUNC_1(VAR_2.data, VAR_3.data);
    if (VAR_2.type == VAR_3.type && VAR_2.type == VAR_0)
        return FUNC_0(VAR_2.data, VAR_3.data);
    return 0;
}
