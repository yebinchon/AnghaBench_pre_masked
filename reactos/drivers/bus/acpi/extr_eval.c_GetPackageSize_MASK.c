
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ULONG ;
typedef size_t UINT32 ;
struct TYPE_10__ {size_t Count; TYPE_3__* Elements; } ;
struct TYPE_11__ {TYPE_4__ Package; } ;
struct TYPE_8__ {int Pointer; int Length; } ;
struct TYPE_7__ {int Value; } ;
struct TYPE_9__ {int Type; TYPE_2__ String; TYPE_1__ Integer; } ;
typedef int* PULONG ;
typedef int NTSTATUS ;
typedef TYPE_5__ ACPI_OBJECT ;
typedef int ACPI_METHOD_ARGUMENT ;




 int FUNC_0 (char*,int,int,int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static
NTSTATUS
FUNC_2(ACPI_OBJECT *VAR_2,
               PULONG VAR_3,
               PULONG VAR_4)
{
    ULONG VAR_5, VAR_6, VAR_7;
    UINT32 VAR_8;

    VAR_7 = 0;
    for (VAR_8 = 0; VAR_8 < VAR_2->Package.Count; VAR_8++)
    {
        switch (VAR_2->Package.Elements[VAR_8].Type)
        {
            case 129:
                VAR_5 = sizeof(ACPI_METHOD_ARGUMENT);
                FUNC_0("Integer %lu -> %lu: %lu\n", sizeof(ULONG), VAR_5, VAR_2->Package.Elements[VAR_8].Integer.Value);
                VAR_7 += VAR_5;
                break;

            case 128:
                VAR_6 = VAR_2->Package.Elements[VAR_8].String.Length + 1;
                VAR_5 = sizeof(ACPI_METHOD_ARGUMENT);
                if (VAR_6 > sizeof(ULONG))
                    VAR_5 += VAR_6 - sizeof(ULONG);
                FUNC_0("String %lu -> %lu: '%s'\n", VAR_6, VAR_5, VAR_2->Package.Elements[VAR_8].String.Pointer);
                VAR_7 += VAR_5;
                break;

            default:
                FUNC_1("Unsupported element type %lu\n", VAR_2->Package.Elements[VAR_8].Type);
                return VAR_1;
        }
    }

    *VAR_3 = VAR_2->Package.Count;
    *VAR_4 = VAR_7;

    return VAR_0;
}
