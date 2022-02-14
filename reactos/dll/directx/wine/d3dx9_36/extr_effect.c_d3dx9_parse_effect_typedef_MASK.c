
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_parameter {size_t flags; int class; int element_count; int columns; int rows; int bytes; int member_count; struct d3dx_parameter* semantic; struct d3dx_parameter* name; struct d3dx_parameter* members; scalar_t__ type; } ;
struct d3dx9_base_effect {int dummy; } ;
typedef size_t UINT ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 () ;
 int VAR_2 ;
 void* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,struct d3dx_parameter*) ;
 int FUNC_5 (char*,int) ;
 int VAR_3 ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (struct d3dx_parameter**,char const*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct d3dx_parameter*,int,int ) ;
 int FUNC_11 (struct d3dx_parameter*) ;
 int FUNC_12 (char const**,int*) ;

__attribute__((used)) static HRESULT FUNC_13(struct d3dx9_base_effect *VAR_4, struct d3dx_parameter *VAR_5,
 const char *VAR_6, const char **VAR_7, struct d3dx_parameter *VAR_8, UINT VAR_9)
{
    DWORD VAR_10;
    HRESULT VAR_11;
    UINT VAR_12;

    VAR_5->flags = VAR_9;

    if (!VAR_8)
    {
        FUNC_12(VAR_7, (DWORD *)&VAR_5->type);
        FUNC_5("Type: %s\n", FUNC_9(VAR_5->type));

        FUNC_12(VAR_7, (DWORD *)&VAR_5->class);
        FUNC_5("Class: %s\n", FUNC_8(VAR_5->class));

        FUNC_12(VAR_7, &VAR_10);
        FUNC_5("Type name offset: %#x\n", VAR_10);
        VAR_11 = FUNC_7(&VAR_5->name, VAR_6 + VAR_10);
        if (VAR_11 != VAR_0)
        {
            FUNC_6("Failed to parse name\n");
            goto err_out;
        }

        FUNC_12(VAR_7, &VAR_10);
        FUNC_5("Type semantic offset: %#x\n", VAR_10);
        VAR_11 = FUNC_7(&VAR_5->semantic, VAR_6 + VAR_10);
        if (VAR_11 != VAR_0)
        {
            FUNC_6("Failed to parse semantic\n");
            goto err_out;
        }

        FUNC_12(VAR_7, &VAR_5->element_count);
        FUNC_5("Elements: %u\n", VAR_5->element_count);

        switch (VAR_5->class)
        {
            case 141:
                FUNC_12(VAR_7, &VAR_5->columns);
                FUNC_5("Columns: %u\n", VAR_5->columns);

                FUNC_12(VAR_7, &VAR_5->rows);
                FUNC_5("Rows: %u\n", VAR_5->rows);


                VAR_5->bytes = 4 * VAR_5->rows * VAR_5->columns;
                break;

            case 143:
            case 145:
            case 146:
                FUNC_12(VAR_7, &VAR_5->rows);
                FUNC_5("Rows: %u\n", VAR_5->rows);

                FUNC_12(VAR_7, &VAR_5->columns);
                FUNC_5("Columns: %u\n", VAR_5->columns);


                VAR_5->bytes = 4 * VAR_5->rows * VAR_5->columns;
                break;

            case 142:
                FUNC_12(VAR_7, &VAR_5->member_count);
                FUNC_5("Members: %u\n", VAR_5->member_count);
                break;

            case 144:
                switch (VAR_5->type)
                {
                    case 134:
                    case 140:
                    case 128:
                    case 133:
                    case 132:
                    case 131:
                    case 130:
                    case 129:
                        VAR_5->bytes = sizeof(void *);
                        break;

                    case 139:
                    case 138:
                    case 137:
                    case 136:
                    case 135:
                        VAR_5->bytes = 0;
                        break;

                    default:
                        FUNC_1("Unhandled type %s\n", FUNC_9(VAR_5->type));
                        break;
                }
                break;

            default:
                FUNC_1("Unhandled class %s\n", FUNC_8(VAR_5->class));
                break;
        }
    }
    else
    {

        VAR_5->type = VAR_8->type;
        VAR_5->class = VAR_8->class;
        VAR_5->name = VAR_8->name;
        VAR_5->semantic = VAR_8->semantic;
        VAR_5->element_count = 0;
        VAR_5->member_count = VAR_8->member_count;
        VAR_5->bytes = VAR_8->bytes;
        VAR_5->rows = VAR_8->rows;
        VAR_5->columns = VAR_8->columns;
    }

    if (VAR_5->element_count)
    {
        unsigned int VAR_13 = 0;
        const char *VAR_14 = *VAR_7;

        VAR_5->members = FUNC_3(FUNC_2(), VAR_2, sizeof(*VAR_5->members) * VAR_5->element_count);
        if (!VAR_5->members)
        {
            FUNC_0("Out of memory\n");
            VAR_11 = VAR_1;
            goto err_out;
        }

        for (VAR_12 = 0; VAR_12 < VAR_5->element_count; ++VAR_12)
        {
            *VAR_7 = VAR_14;

            FUNC_11(&VAR_5->members[VAR_12]);
            VAR_11 = FUNC_13(VAR_4, &VAR_5->members[VAR_12], VAR_6, VAR_7, VAR_5, VAR_9);
            if (VAR_11 != VAR_0)
            {
                FUNC_6("Failed to parse member %u\n", VAR_12);
                goto err_out;
            }

            VAR_13 += VAR_5->members[VAR_12].bytes;
        }

        VAR_5->bytes = VAR_13;
    }
    else if (VAR_5->member_count)
    {
        VAR_5->members = FUNC_3(FUNC_2(), VAR_2, sizeof(*VAR_5->members) * VAR_5->member_count);
        if (!VAR_5->members)
        {
            FUNC_0("Out of memory\n");
            VAR_11 = VAR_1;
            goto err_out;
        }

        for (VAR_12 = 0; VAR_12 < VAR_5->member_count; ++VAR_12)
        {
            FUNC_11(&VAR_5->members[VAR_12]);
            VAR_11 = FUNC_13(VAR_4, &VAR_5->members[VAR_12], VAR_6, VAR_7, ((void*)0), VAR_9);
            if (VAR_11 != VAR_0)
            {
                FUNC_6("Failed to parse member %u\n", VAR_12);
                goto err_out;
            }

            VAR_5->bytes += VAR_5->members[VAR_12].bytes;
        }
    }
    return VAR_0;

err_out:

    if (VAR_5->members)
    {
        unsigned int VAR_15 = VAR_5->element_count ? VAR_5->element_count : VAR_5->member_count;

        for (VAR_12 = 0; VAR_12 < VAR_15; ++VAR_12)
            FUNC_10(&VAR_5->members[VAR_12], VAR_5->element_count != 0, VAR_3);
        FUNC_4(FUNC_2(), 0, VAR_5->members);
        VAR_5->members = ((void*)0);
    }

    if (!VAR_8)
    {
        FUNC_4(FUNC_2(), 0, VAR_5->name);
        FUNC_4(FUNC_2(), 0, VAR_5->semantic);
    }
    VAR_5->name = ((void*)0);
    VAR_5->semantic = ((void*)0);

    return VAR_11;
}
