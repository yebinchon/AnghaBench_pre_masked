
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; scalar_t__ data; int size; int type; } ;
typedef TYPE_1__ reg_save_value ;
typedef int HKEY ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(HKEY VAR_0, reg_save_value *VAR_1)
{
    if (VAR_1->data)
    {
        FUNC_3(VAR_0, VAR_1->name, 0, VAR_1->type, VAR_1->data, VAR_1->size);
        FUNC_1(FUNC_0(), 0, VAR_1->data);
    }
    else
        FUNC_2(VAR_0, VAR_1->name);
}
