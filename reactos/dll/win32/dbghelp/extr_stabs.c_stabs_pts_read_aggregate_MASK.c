
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symt_udt {int dummy; } ;
struct symt {int dummy; } ;
struct ParseTypedefData {char* ptr; int idx; int buf; int module; } ;
typedef scalar_t__ DWORD64 ;
typedef int DWORD ;


 int FUNC_0 (struct ParseTypedefData*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ParseTypedefData*) ;
 int FUNC_2 (struct ParseTypedefData*) ;
 int FUNC_3 (struct ParseTypedefData*,long*) ;
 int FUNC_4 (struct ParseTypedefData*,int *,struct symt**) ;
 int FUNC_5 (float**) ;
 int FUNC_6 (char*,int ) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (int ,struct symt_udt*,char*,struct symt*,long,long) ;
 int FUNC_10 (int ,struct symt*,int ,scalar_t__*) ;
 int FUNC_11 (struct symt*) ;
 int FUNC_12 (int ,struct symt_udt*,long) ;

__attribute__((used)) static inline int FUNC_13(struct ParseTypedefData* VAR_2,
                                           struct symt_udt* VAR_3)
{
    long VAR_4, VAR_5;
    struct symt* VAR_6;
    struct symt* VAR_7 = ((void*)0);
    int VAR_8;
    int VAR_9;

    FUNC_0(VAR_2, FUNC_3(VAR_2, &VAR_4) == -1);

    VAR_9 = FUNC_12(VAR_2->module, VAR_3, VAR_4);
    if (*VAR_2->ptr == '!')
    {
        long VAR_10;

        VAR_2->ptr++;
        FUNC_0(VAR_2, FUNC_3(VAR_2, &VAR_10) == -1);
        FUNC_0(VAR_2, *VAR_2->ptr++ != ',');
        while (--VAR_10 >= 0)
        {
            VAR_2->ptr += 2;
            FUNC_0(VAR_2, FUNC_3(VAR_2, &VAR_5) == -1);
            FUNC_0(VAR_2, *VAR_2->ptr++ != ',');

            FUNC_0(VAR_2, FUNC_4(VAR_2, ((void*)0), &VAR_6) == -1);

            if (VAR_9 && VAR_6)
            {
                char VAR_11[256];
                DWORD64 VAR_12;

                FUNC_8(VAR_11, "__inherited_class_");
                FUNC_6(VAR_11, FUNC_11(VAR_6));







                FUNC_10(VAR_2->module, VAR_6, VAR_0, &VAR_12);
                FUNC_9(VAR_2->module, VAR_3, VAR_11, VAR_6, VAR_5, (DWORD)VAR_12 * 8);
            }
            FUNC_0(VAR_2, *VAR_2->ptr++ != ';');
        }

    }






    while (*VAR_2->ptr != ';')
    {

 VAR_8 = VAR_2->idx;

        if (VAR_2->ptr[0] == '$' && VAR_2->ptr[1] == 'v')
        {
            long VAR_13;

            if (VAR_2->ptr[2] == 'f')
            {

                VAR_2->ptr += 3;
                FUNC_5(&VAR_2->ptr);
                FUNC_0(VAR_2, *VAR_2->ptr++ != ':');
                FUNC_0(VAR_2, FUNC_4(VAR_2, ((void*)0), &VAR_7) == -1);
                FUNC_0(VAR_2, *VAR_2->ptr++ != ',');
                FUNC_0(VAR_2, FUNC_3(VAR_2, &VAR_13) == -1);
                FUNC_0(VAR_2, *VAR_2->ptr++ != ';');
                VAR_2->idx = VAR_8;
                continue;
            }
            else if (VAR_2->ptr[2] == 'b')
            {
                VAR_2->ptr += 3;
                FUNC_0(VAR_2, FUNC_4(VAR_2, ((void*)0), &VAR_7) == -1);
                FUNC_0(VAR_2, *VAR_2->ptr++ != ':');
                FUNC_0(VAR_2, FUNC_4(VAR_2, ((void*)0), &VAR_7) == -1);
                FUNC_0(VAR_2, *VAR_2->ptr++ != ',');
                FUNC_0(VAR_2, FUNC_3(VAR_2, &VAR_13) == -1);
                FUNC_0(VAR_2, *VAR_2->ptr++ != ';');
                VAR_2->idx = VAR_8;
                continue;
            }
        }

 FUNC_0(VAR_2, FUNC_1(VAR_2) == -1);



        if (*VAR_2->ptr == ':')
        {
            VAR_2->ptr++;
            FUNC_2(VAR_2);
            VAR_2->idx = VAR_8;
            continue;
        }
        else
        {

            if (*VAR_2->ptr == '/') VAR_2->ptr += 2;
        }
 FUNC_0(VAR_2, FUNC_4(VAR_2, ((void*)0), &VAR_6) == -1);

        switch (*VAR_2->ptr++)
        {
        case ',':
            FUNC_0(VAR_2, FUNC_3(VAR_2, &VAR_5) == -1);
            FUNC_0(VAR_2, *VAR_2->ptr++ != ',');
            FUNC_0(VAR_2, FUNC_3(VAR_2, &VAR_4) == -1);
            FUNC_0(VAR_2, *VAR_2->ptr++ != ';');

            if (VAR_9) FUNC_9(VAR_2->module, VAR_3, VAR_2->buf + VAR_8, VAR_6, VAR_5, VAR_4);
            break;
        case ':':
            {
                const char* VAR_14;

                FUNC_0(VAR_2, !(VAR_14 = FUNC_7(VAR_2->ptr, ';')));
                VAR_2->ptr = VAR_14 + 1;
            }
            break;
        default:
            FUNC_0(VAR_2, VAR_1);
        }
 VAR_2->idx = VAR_8;
    }
    FUNC_0(VAR_2, *VAR_2->ptr++ != ';');
    if (*VAR_2->ptr == '~')
    {
        VAR_2->ptr++;
        FUNC_0(VAR_2, *VAR_2->ptr++ != '%');
        FUNC_0(VAR_2, FUNC_4(VAR_2, ((void*)0), &VAR_7) == -1);
        FUNC_0(VAR_2, *VAR_2->ptr++ != ';');
    }
    return 0;
}
