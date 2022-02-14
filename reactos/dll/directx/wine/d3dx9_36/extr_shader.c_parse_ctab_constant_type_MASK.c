
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* DefaultValue; scalar_t__ Class; int Rows; int Columns; int Elements; int StructMembers; char const* Name; int RegisterSet; int RegisterIndex; int Bytes; scalar_t__ RegisterCount; int Type; } ;
struct ctab_constant {struct ctab_constant* constants; TYPE_1__ desc; } ;
typedef int WORD ;
typedef int UINT ;
struct TYPE_7__ {int TypeInfo; int Name; } ;
struct TYPE_6__ {scalar_t__ Class; int Rows; int Columns; int Elements; int StructMembers; int StructMemberInfo; int Type; } ;
typedef TYPE_2__* LPD3DXSHADER_TYPEINFO ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef TYPE_2__ D3DXSHADER_TYPEINFO ;
typedef TYPE_4__ D3DXSHADER_STRUCTMEMBERINFO ;
typedef int BOOL ;




 int VAR_0 ;

 scalar_t__ VAR_1 ;





 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 () ;
 int VAR_5 ;
 struct ctab_constant* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,struct ctab_constant*) ;
 int FUNC_5 (char*,char const*,int,int,...) ;
 int VAR_6 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct ctab_constant*) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int,int) ;

__attribute__((used)) static HRESULT FUNC_12(const char *VAR_7, DWORD VAR_8, struct ctab_constant *VAR_9,
        BOOL VAR_10, WORD VAR_11, WORD VAR_12, DWORD *VAR_13, DWORD VAR_14, UINT VAR_15)
{
    const D3DXSHADER_TYPEINFO *VAR_16 = (LPD3DXSHADER_TYPEINFO)(VAR_7 + VAR_8);
    const D3DXSHADER_STRUCTMEMBERINFO *VAR_17 = ((void*)0);
    HRESULT VAR_18 = VAR_2;
    UINT VAR_19, VAR_20 = 0;
    WORD VAR_21 = 0;

    VAR_9->desc.DefaultValue = VAR_13 ? VAR_7 + *VAR_13 : ((void*)0);
    VAR_9->desc.Class = VAR_16->Class;
    VAR_9->desc.Type = VAR_16->Type;
    VAR_9->desc.Rows = VAR_16->Rows;
    VAR_9->desc.Columns = VAR_16->Columns;
    VAR_9->desc.Elements = VAR_10 ? 1 : VAR_16->Elements;
    VAR_9->desc.StructMembers = VAR_16->StructMembers;
    VAR_9->desc.Name = VAR_7 + VAR_14;
    VAR_9->desc.RegisterSet = VAR_15;
    VAR_9->desc.RegisterIndex = VAR_11;

    FUNC_5("name %s, elements %u, index %u, defaultvalue %p, regset %s\n", VAR_9->desc.Name,
            VAR_9->desc.Elements, VAR_11, VAR_9->desc.DefaultValue,
            FUNC_7(VAR_15));
    FUNC_5("class %s, type %s, rows %d, columns %d, elements %d, struct_members %d\n",
            FUNC_6(VAR_16->Class), FUNC_8(VAR_16->Type),
            VAR_16->Rows, VAR_16->Columns, VAR_16->Elements, VAR_16->StructMembers);

    if (VAR_16->Elements > 1 && !VAR_10)
    {
        VAR_20 = VAR_16->Elements;
    }
    else if ((VAR_16->Class == VAR_1) && VAR_16->StructMembers)
    {
        VAR_17 = (D3DXSHADER_STRUCTMEMBERINFO*)(VAR_7 + VAR_16->StructMemberInfo);
        VAR_20 = VAR_16->StructMembers;
    }

    if (VAR_20)
    {
        VAR_9->constants = FUNC_3(FUNC_2(), VAR_5, sizeof(*VAR_9->constants) * VAR_20);
        if (!VAR_9->constants)
        {
             FUNC_0("Out of memory\n");
             VAR_18 = VAR_3;
             goto error;
        }

        for (VAR_19 = 0; VAR_19 < VAR_20; ++VAR_19)
        {
            VAR_18 = FUNC_12(VAR_7, VAR_17 ? VAR_17[VAR_19].TypeInfo : VAR_8,
                    &VAR_9->constants[VAR_19], VAR_17 == ((void*)0), VAR_11 + VAR_21, VAR_12, VAR_13,
                    VAR_17 ? VAR_17[VAR_19].Name : VAR_14, VAR_15);
            if (VAR_18 != VAR_2)
                goto error;

            VAR_21 += VAR_9->constants[VAR_19].desc.RegisterCount;
        }
    }
    else
    {
        WORD VAR_22 = VAR_16->Columns * VAR_16->Rows;
        BOOL VAR_23 = VAR_4;

        VAR_21 = VAR_16->Columns * VAR_16->Rows;

        switch (VAR_15)
        {
            case 131:
                VAR_23 = VAR_16->Class != 133 && VAR_16->Class != 132
                        && VAR_16->Class != 134 && VAR_16->Class != 135;
                break;

            case 130:
            case 129:
                switch (VAR_16->Class)
                {
                    case 132:
                        VAR_21 = 1;

                    case 133:
                        VAR_22 = VAR_16->Rows * 4;
                        break;

                    case 134:
                        VAR_22 = VAR_16->Rows * 4;
                        VAR_21 = VAR_16->Rows;
                        break;

                    case 135:
                        VAR_22 = VAR_16->Columns * 4;
                        VAR_21 = VAR_16->Columns;
                        break;

                    default:
                        VAR_23 = VAR_6;
                        break;
                }
                break;

            case 128:
                VAR_21 = 1;
                VAR_23 = VAR_16->Class != VAR_0;
                break;

            default:
                VAR_23 = VAR_6;
                break;
        }

        if (VAR_23)
        {
            FUNC_1("Unhandled register set %s, type class %s\n", FUNC_7(VAR_15),
                    FUNC_6(VAR_16->Class));
        }


        if (VAR_13) *VAR_13 += VAR_22 * 4;
    }

    VAR_9->desc.RegisterCount = FUNC_10(0, FUNC_11(VAR_12 - VAR_11, VAR_21));
    VAR_9->desc.Bytes = 4 * VAR_9->desc.Elements * VAR_16->Rows * VAR_16->Columns;

    return VAR_2;

error:
    if (VAR_9->constants)
    {
        for (VAR_19 = 0; VAR_19 < VAR_20; ++VAR_19)
        {
            FUNC_9(&VAR_9->constants[VAR_19]);
        }
        FUNC_4(FUNC_2(), 0, VAR_9->constants);
        VAR_9->constants = ((void*)0);
    }

    return VAR_18;
}
