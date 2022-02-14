
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct IFD_entry {int type; int count; size_t value; scalar_t__ id; } ;
typedef scalar_t__ USHORT ;
typedef int ULONGLONG ;
typedef size_t ULONG ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(char *VAR_0)
{
    USHORT VAR_1, VAR_2;
    struct IFD_entry *VAR_3;
    char *VAR_4 = VAR_0;

    VAR_1 = *(USHORT *)VAR_0;
    *(USHORT *)VAR_0 = FUNC_3(*(USHORT *)VAR_0);
    VAR_0 += sizeof(USHORT);

    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
    {
        VAR_3 = (struct IFD_entry *)VAR_0;

        switch (VAR_3->type)
        {
        case 138:
        case 133:
        case 139:
        case 128:
            if (VAR_3->count > 4)
                VAR_3->value = FUNC_1(VAR_3->value);
            break;

        case 132:
        case 129:
            if (VAR_3->count > 2)
            {
                ULONG VAR_5, VAR_6 = VAR_3->count;
                USHORT *VAR_7 = (USHORT *)(VAR_4 + VAR_3->value);
                if (!VAR_6) VAR_6 = 1;
                for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
                    VAR_7[VAR_5] = FUNC_3(VAR_7[VAR_5]);

                VAR_3->value = FUNC_1(VAR_3->value);
            }
            else
            {
                ULONG VAR_8, VAR_9 = VAR_3->count;
                USHORT *VAR_10 = (USHORT *)&VAR_3->value;
                if (!VAR_9) VAR_9 = 1;
                for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
                    VAR_10[VAR_8] = FUNC_3(VAR_10[VAR_8]);
            }
            break;

        case 135:
        case 131:
        case 136:
            if (VAR_3->count > 1)
            {
                ULONG VAR_11, VAR_12 = VAR_3->count;
                ULONG *VAR_13 = (ULONG *)(VAR_4 + VAR_3->value);
                if (!VAR_12) VAR_12 = 1;
                for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
                    VAR_13[VAR_11] = FUNC_1(VAR_13[VAR_11]);
            }
            VAR_3->value = FUNC_1(VAR_3->value);
            break;

        case 134:
        case 130:
            {
                ULONG VAR_14;
                ULONG *VAR_15 = (ULONG *)(VAR_4 + VAR_3->value);
                for (VAR_14 = 0; VAR_14 < VAR_3->count * 2; VAR_14++)
                    VAR_15[VAR_14] = FUNC_1(VAR_15[VAR_14]);
            }
            VAR_3->value = FUNC_1(VAR_3->value);
            break;

        case 137:
            {
                ULONG VAR_16;
                ULONGLONG *VAR_17 = (ULONGLONG *)(VAR_4 + VAR_3->value);
                for (VAR_16 = 0; VAR_16 < VAR_3->count; VAR_16++)
                    VAR_17[VAR_16] = FUNC_2(VAR_17[VAR_16]);
            }
            VAR_3->value = FUNC_1(VAR_3->value);
            break;

        default:
            FUNC_0(0);
            break;
        }

        VAR_3->id = FUNC_3(VAR_3->id);
        VAR_3->type = FUNC_3(VAR_3->type);
        VAR_3->count = FUNC_1(VAR_3->count);
        VAR_0 += sizeof(*VAR_3);
    }
}
