
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* name; int (* parser ) (int *,char*,int ,int *,int ,char*,int ,char const*,int **,TYPE_2__*) ;int type; } ;
typedef TYPE_1__ condition_definition ;
struct TYPE_8__ {int * asserts; int * conditions; } ;
typedef TYPE_2__ Unit ;
typedef int Condition ;


 int VAR_0 ;
 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int ,char*,char const*) ;
 char* FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char const*,int ) ;
 int FUNC_5 (int *,char*,int ,int *,int ,char*,int ,char const*,int **,TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(Unit *VAR_3, const char *VAR_4) {
        const char *VAR_5;
        Condition **VAR_6;

        if ((VAR_5 = FUNC_3(VAR_4, "Condition")))
                VAR_6 = &VAR_3->conditions;
        else if ((VAR_5 = FUNC_3(VAR_4, "Assert")))
                VAR_6 = &VAR_3->asserts;
        else
                return FUNC_2(FUNC_1(VAR_0), "Cannot parse \"%s\".", VAR_4);

        for (size_t VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++) {
                const condition_definition *VAR_8 = &VAR_2[VAR_7];

                VAR_5 = FUNC_3(VAR_4, VAR_8->name);
                if (!VAR_5)
                        continue;
                VAR_5 += FUNC_4(VAR_5, VAR_1);
                if (*VAR_5 != '=')
                        return FUNC_2(FUNC_1(VAR_0), "Expected \"=\" in \"%s\".", VAR_4);

                VAR_5 += 1 + FUNC_4(VAR_5 + 1, VAR_1);

                return VAR_8->parser(((void*)0), "(stdin)", 0, ((void*)0), 0, VAR_8->name, VAR_8->type, VAR_5, VAR_6, VAR_3);
        }

        return FUNC_2(FUNC_1(VAR_0), "Cannot parse \"%s\".", VAR_4);
}
