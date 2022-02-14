
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_sampler {int dummy; } ;
struct d3dx_parameter {char* data; scalar_t__ class; int type; int element_count; } ;
typedef int IUnknown ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct d3dx_sampler*) ;

__attribute__((used)) static void FUNC_6(struct d3dx_parameter *VAR_1, BOOL VAR_2)
{
    if (!VAR_1->data)
        return;
    if (VAR_1->class == VAR_0 && !VAR_1->element_count)
    {
        switch (VAR_1->type)
        {
            case 134:
                FUNC_2(FUNC_1(), 0, *(char **)VAR_1->data);
                break;

            case 133:
            case 132:
            case 131:
            case 130:
            case 129:
            case 140:
            case 128:
                if (*(IUnknown **)VAR_1->data) FUNC_3(*(IUnknown **)VAR_1->data);
                break;

            case 139:
            case 138:
            case 137:
            case 136:
            case 135:
                FUNC_5((struct d3dx_sampler *)VAR_1->data);
                break;

            default:
                FUNC_0("Unhandled type %s\n", FUNC_4(VAR_1->type));
                break;
        }
    }
    if (!VAR_2)
        FUNC_2(FUNC_1(), 0, VAR_1->data);
}
