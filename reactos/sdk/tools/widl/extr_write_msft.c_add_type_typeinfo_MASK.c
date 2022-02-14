
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* name; } ;
typedef TYPE_1__ type_t ;
typedef int msft_typelib_t ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (char*,int,char*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(msft_typelib_t *VAR_0, type_t *VAR_1)
{
    switch (FUNC_6(VAR_1)) {
    case 131:
        FUNC_2(VAR_0, VAR_1);
        break;
    case 129:
        FUNC_3(VAR_0, VAR_1);
        break;
    case 132:
        FUNC_1(VAR_0, VAR_1);
        break;
    case 128:
        FUNC_4(VAR_0, VAR_1);
        break;
    case 133:
        FUNC_0(VAR_0, VAR_1);
        break;
    case 134:
    case 130:
    case 135:
        break;
    default:
        FUNC_5("add_entry: unhandled type 0x%x for %s\n",
              FUNC_6(VAR_1), VAR_1->name);
        break;
    }
}
