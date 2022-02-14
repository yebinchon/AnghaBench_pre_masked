
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmUnitInfo {scalar_t__ length; char* path; } ;
struct chmPmglHeader {int block_next; int * free_space; } ;
struct chmFile {size_t block_len; int index_head; scalar_t__ dir_offset; } ;
typedef char WCHAR ;
typedef size_t UInt64 ;
typedef int UChar ;
typedef int Int32 ;
typedef int (* CHM_ENUMERATOR ) (struct chmFile*,struct chmUnitInfo*,void*) ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,size_t) ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 size_t FUNC_3 (struct chmFile*,int *,scalar_t__,size_t) ;
 int FUNC_4 (int **,struct chmUnitInfo*) ;
 int FUNC_5 (int **,unsigned int*,struct chmPmglHeader*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char const*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct chmFile*,struct chmUnitInfo*,void*) ;

BOOL FUNC_11(struct chmFile *VAR_9,
                       const WCHAR *VAR_10,
                       int VAR_11,
                       CHM_ENUMERATOR VAR_12,
                       void *VAR_13)
{




    Int32 VAR_14;


    UChar *VAR_15 = FUNC_1(FUNC_0(), 0, VAR_9->block_len);
    struct chmPmglHeader VAR_16;
    UChar *VAR_17;
    UChar *VAR_18;
    unsigned int VAR_19;


    BOOL VAR_20 = VAR_6;


    struct chmUnitInfo VAR_21;
    int VAR_22;
    UInt64 VAR_23;


    WCHAR VAR_24[VAR_5+1];
    int VAR_25;
    WCHAR VAR_26[VAR_5];
    int VAR_27;


    VAR_14 = VAR_9->index_head;


    FUNC_8(VAR_24, VAR_10, VAR_5);
    VAR_25 = FUNC_9(VAR_24);
    if (VAR_25 != 0)
    {
        if (VAR_24[VAR_25-1] != '/')
        {
            VAR_24[VAR_25] = '/';
            VAR_24[VAR_25+1] = '\0';
            ++VAR_25;
        }
    }
    VAR_26[0] = '\0';
    VAR_27 = -1;


    while (VAR_14 != -1)
    {


        if (FUNC_3(VAR_9,
                             VAR_15,
                             VAR_9->dir_offset + (UInt64)VAR_14*VAR_9->block_len,
                             VAR_9->block_len) != VAR_9->block_len)
        {
            FUNC_2(FUNC_0(), 0, VAR_15);
            return VAR_6;
        }


        VAR_18 = VAR_15;
        VAR_19 = VAR_8;
        if (! FUNC_5(&VAR_18, &VAR_19, &VAR_16))
        {
            FUNC_2(FUNC_0(), 0, VAR_15);
            return VAR_6;
        }
        VAR_17 = VAR_15 + VAR_9->block_len - (VAR_16.free_space);


        while (VAR_18 < VAR_17)
        {
            if (! FUNC_4(&VAR_18, &VAR_21))
            {
                FUNC_2(FUNC_0(), 0, VAR_15);
                return VAR_6;
            }


            if (! VAR_20)
            {
                if (VAR_21.length == 0 && FUNC_6(VAR_21.path, VAR_24, VAR_25) == 0)
                    VAR_20 = VAR_7;
                else
                    continue;

                if (VAR_21.path[VAR_25] == '\0')
                    continue;
            }


            else
            {
                if (FUNC_6(VAR_21.path, VAR_24, VAR_25) != 0)
                {
                    FUNC_2(FUNC_0(), 0, VAR_15);
                    return VAR_7;
                }
            }


            if (VAR_27 != -1)
            {
                if (FUNC_6(VAR_21.path, VAR_26, VAR_27) == 0)
                    continue;
            }
            FUNC_7(VAR_26, VAR_21.path);
            VAR_27 = FUNC_9(VAR_26);


            VAR_23 = FUNC_9(VAR_21.path)-1;


            if (VAR_21.path[VAR_23] == '/' && !(VAR_11 & VAR_0))
                continue;


            if (VAR_21.path[VAR_23] != '/' && !(VAR_11 & VAR_1))
                continue;


            if (VAR_21.path[0] == '/')
            {


                if (VAR_21.path[1] == '#' || VAR_21.path[1] == '$')
                    VAR_22 = VAR_4;
                else
                    VAR_22 = VAR_3;
            }
            else
                VAR_22 = VAR_2;
            if (! (VAR_11 & VAR_22))
                continue;


            {
                int VAR_28 = (*VAR_12)(VAR_9, &VAR_21, VAR_13);
                switch (VAR_28)
                {
                    case 129:
                        FUNC_2(FUNC_0(), 0, VAR_15);
                        return VAR_6;
                    case 130:
                        break;
                    case 128:
                        FUNC_2(FUNC_0(), 0, VAR_15);
                        return VAR_7;
                    default:
                        break;
                }
            }
        }


        VAR_14 = VAR_16.block_next;
    }

    FUNC_2(FUNC_0(), 0, VAR_15);
    return VAR_7;
}
