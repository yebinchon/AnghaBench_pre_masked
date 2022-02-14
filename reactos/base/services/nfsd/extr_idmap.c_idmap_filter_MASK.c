
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idmap_lookup {int type; size_t klass; size_t attr; int value; } ;
struct idmap_config {int * attributes; int * classes; } ;
typedef int UINT_PTR ;
typedef int UINT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,size_t,char*,int ,int ,int ) ;


 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(
    struct idmap_config *VAR_3,
    const struct idmap_lookup *VAR_4,
    char *VAR_5,
    size_t VAR_6)
{
    UINT_PTR VAR_7;
    int VAR_8 = VAR_2;

    switch (VAR_4->type) {
    case 129:
        VAR_7 = (UINT_PTR)VAR_4->value;
        if (FUNC_0(FUNC_1(VAR_5, VAR_6,
                "(&(objectClass=%s)(%s=%u))",
                VAR_3->classes[VAR_4->klass],
                VAR_3->attributes[VAR_4->attr], (UINT)VAR_7))) {
            VAR_8 = VAR_0;
            FUNC_2("ldap filter buffer overflow: '%s=%u'\n",
                VAR_3->attributes[VAR_4->attr], (UINT)VAR_7);
        }
        break;

    case 128:
        if (FUNC_0(FUNC_1(VAR_5, VAR_6,
                "(&(objectClass=%s)(%s=%s))",
                VAR_3->classes[VAR_4->klass],
                VAR_3->attributes[VAR_4->attr], VAR_4->value))) {
            VAR_8 = VAR_0;
            FUNC_2("ldap filter buffer overflow: '%s=%s'\n",
                VAR_3->attributes[VAR_4->attr], VAR_4->value);
        }
        break;

    default:
        VAR_8 = VAR_1;
        break;
    }
    return VAR_8;
}
