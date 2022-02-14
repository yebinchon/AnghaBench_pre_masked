
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* name; } ;
typedef TYPE_1__ type_t ;
struct sltg_typelib {int dummy; } ;
 int FUNC_0 (struct sltg_typelib*,TYPE_1__*) ;
 int FUNC_1 (struct sltg_typelib*,TYPE_1__*) ;
 int FUNC_2 (struct sltg_typelib*,TYPE_1__*) ;
 int FUNC_3 (struct sltg_typelib*,TYPE_1__*) ;
 int FUNC_4 (struct sltg_typelib*,TYPE_1__*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,int,char*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(struct sltg_typelib *VAR_0, type_t *VAR_1)
{
    FUNC_5("add_type_typeinfo: adding %s, type %d\n", VAR_1->name, FUNC_7(VAR_1));

    switch (FUNC_7(VAR_1))
    {
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
        break;
    default:
        FUNC_6("add_type_typeinfo: unhandled type %d for %s\n", FUNC_7(VAR_1), VAR_1->name);
        break;
    }
}
