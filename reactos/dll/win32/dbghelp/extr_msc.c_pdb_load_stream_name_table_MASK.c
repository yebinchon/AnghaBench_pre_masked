
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pdb_stream_name {int dummy; } ;
struct pdb_file_info {int fpoext_stream; TYPE_1__* stream_dict; } ;
struct TYPE_2__ {char* name; int index; } ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int ,int ,unsigned int) ;
 int FUNC_3 (char*,char const*,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct pdb_file_info* VAR_0, const char* VAR_1, unsigned VAR_2)
{
    DWORD* VAR_3;
    DWORD* VAR_4;
    DWORD VAR_5, VAR_6;
    unsigned VAR_7, VAR_8;
    char* VAR_9;

    VAR_3 = (DWORD*)(VAR_1 + VAR_2);
    VAR_6 = *VAR_3++;
    VAR_5 = *VAR_3++;

    VAR_0->stream_dict = FUNC_2(FUNC_1(), 0, (VAR_6 + 1) * sizeof(struct pdb_stream_name) + VAR_2);
    if (!VAR_0->stream_dict) return;
    VAR_9 = (char*)(VAR_0->stream_dict + VAR_6 + 1);
    FUNC_3(VAR_9, VAR_1, VAR_2);


    VAR_4 = VAR_3;
    VAR_3 += *VAR_4++ + 1;
    if (*VAR_3++ != 0)
    {
        FUNC_0("unexpected value\n");
        return;
    }

    for (VAR_7 = VAR_8 = 0; VAR_7 < VAR_5; VAR_7++)
    {
        if (VAR_4[VAR_7 / 32] & (1 << (VAR_7 % 32)))
        {
            if (VAR_8 >= VAR_6) break;
            VAR_0->stream_dict[VAR_8].name = &VAR_9[*VAR_3++];
            VAR_0->stream_dict[VAR_8].index = *VAR_3++;
            VAR_8++;
        }
    }

    VAR_0->stream_dict[VAR_6].name = ((void*)0);
    VAR_0->fpoext_stream = -1;
}
