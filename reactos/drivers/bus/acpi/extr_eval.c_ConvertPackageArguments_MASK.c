
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_10__ {size_t Count; TYPE_3__* Elements; } ;
struct TYPE_11__ {TYPE_4__ Package; } ;
struct TYPE_8__ {int Length; int Pointer; } ;
struct TYPE_7__ {int Value; } ;
struct TYPE_9__ {int Type; TYPE_2__ String; TYPE_1__ Integer; } ;
typedef int NTSTATUS ;
typedef TYPE_5__ ACPI_OBJECT ;
typedef int ACPI_METHOD_ARGUMENT ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;


 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static
NTSTATUS
FUNC_5(ACPI_METHOD_ARGUMENT *VAR_2,
                        ACPI_OBJECT *VAR_3)
{
    ACPI_METHOD_ARGUMENT *VAR_4;
    UINT32 VAR_5;

    VAR_4 = VAR_2;
    for (VAR_5 = 0; VAR_5 < VAR_3->Package.Count; VAR_5++)
    {
        switch (VAR_3->Package.Elements[VAR_5].Type)
        {
            case 129:
                FUNC_3("Integer %lu\n", sizeof(ACPI_METHOD_ARGUMENT));
                FUNC_1(VAR_4, VAR_3->Package.Elements[VAR_5].Integer.Value);
                break;

            case 128:
                FUNC_3("String %lu\n", VAR_3->Package.Elements[VAR_5].String.Length);
                FUNC_2(VAR_4, VAR_3->Package.Elements[VAR_5].String.Pointer);
                break;

            default:
                FUNC_4("Unsupported element type %lu\n", VAR_3->Package.Elements[VAR_5].Type);
                return VAR_1;
        }

        VAR_4 = FUNC_0(VAR_4);
    }

    return VAR_0;
}
