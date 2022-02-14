
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chunk {int flags; int action; int data; } ;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct chunk *VAR_1)
{
    if (!VAR_1)
        return;
    if (VAR_1->flags & VAR_0)
        return;

    switch (VAR_1->action) {
    case 132:
    case 137:
    case 130:
    case 129:
    case 128:
    case 135:
    case 134:

        break;
    case 133:
    case 131:
        FUNC_0(VAR_1->data);
        break;
    case 138:
        FUNC_1(VAR_1->data);
        break;
    case 136:
        FUNC_2(VAR_1->data);
        break;
    }
}
