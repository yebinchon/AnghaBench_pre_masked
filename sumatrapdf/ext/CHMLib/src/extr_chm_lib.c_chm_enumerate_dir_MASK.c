
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmUnitInfo {int flags; scalar_t__ length; char* path; } ;
struct chmPmglHeader {int block_next; int * free_space; } ;
struct chmFile {size_t block_len; int index_head; scalar_t__ dir_offset; } ;
typedef size_t UInt64 ;
typedef int UChar ;
typedef int Int32 ;
typedef int (* CHM_ENUMERATOR ) (struct chmFile*,struct chmUnitInfo*,void*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 unsigned int VAR_6 ;
 size_t FUNC_0 (struct chmFile*,int *,size_t,size_t) ;
 int FUNC_1 (int **,struct chmUnitInfo*) ;
 int FUNC_2 (int **,unsigned int*,size_t,struct chmPmglHeader*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (unsigned int) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,char const*,int) ;
 int FUNC_8 (struct chmFile*,struct chmUnitInfo*,void*) ;

int FUNC_9(struct chmFile *VAR_7,
                      const char *VAR_8,
                      int VAR_9,
                      CHM_ENUMERATOR VAR_10,
                      void *VAR_11)
{




    Int32 VAR_12;



    UChar *VAR_13 = FUNC_4((unsigned int)VAR_7->block_len);
    struct chmPmglHeader VAR_14;
    UChar *VAR_15;
    UChar *VAR_16;
    unsigned int VAR_17;


    int VAR_18=0;


    struct chmUnitInfo VAR_19;
    int VAR_20 = (VAR_9 & 0x7);
    int VAR_21 = (VAR_9 & 0xF8);
    UInt64 VAR_22;


    char VAR_23[VAR_5+1];
    int VAR_24;
    char VAR_25[VAR_5+1];
    int VAR_26;

    if (VAR_13 == ((void*)0))
        return 0;


    VAR_12 = VAR_7->index_head;


    FUNC_7(VAR_23, VAR_8, VAR_5);
    VAR_23[VAR_5] = '\0';
    VAR_24 = FUNC_5(VAR_23);
    if (VAR_24 != 0)
    {
        if (VAR_23[VAR_24-1] != '/')
        {
            VAR_23[VAR_24] = '/';
            VAR_23[VAR_24+1] = '\0';
            ++VAR_24;
        }
    }
    VAR_25[0] = '\0';
    VAR_26 = -1;


    while (VAR_12 != -1)
    {


        if (FUNC_0(VAR_7,
                             VAR_13,
                             (UInt64)VAR_7->dir_offset + (UInt64)VAR_12*VAR_7->block_len,
                             VAR_7->block_len) != VAR_7->block_len)
        {
            FUNC_3(VAR_13);
            return 0;
        }


        VAR_16 = VAR_13;
        VAR_17 = VAR_6;
        if (! FUNC_2(&VAR_16, &VAR_17, VAR_7->block_len, &VAR_14))
        {
            FUNC_3(VAR_13);
            return 0;
        }
        VAR_15 = VAR_13 + VAR_7->block_len - (VAR_14.free_space);


        while (VAR_16 < VAR_15)
        {
            VAR_19.flags = 0;

            if (! FUNC_1(&VAR_16, &VAR_19))
            {
                FUNC_3(VAR_13);
                return 0;
            }


            if (! VAR_18)
            {
                if (VAR_19.length == 0 && FUNC_6(VAR_19.path, VAR_23, VAR_24) == 0)
                    VAR_18 = 1;
                else
                    continue;

                if (VAR_19.path[VAR_24] == '\0')
                    continue;
            }


            else
            {
                if (FUNC_6(VAR_19.path, VAR_23, VAR_24) != 0)
                {
                    FUNC_3(VAR_13);
                    return 1;
                }
            }


            if (VAR_26 != -1)
            {
                if (FUNC_6(VAR_19.path, VAR_25, VAR_26) == 0)
                    continue;
            }
            FUNC_7(VAR_25, VAR_19.path, VAR_5);
            VAR_25[VAR_5] = '\0';
            VAR_26 = FUNC_5(VAR_25);


            VAR_22 = FUNC_5(VAR_19.path)-1;


            if (VAR_19.path[VAR_22] == '/')
                VAR_19.flags |= VAR_0;


            if (VAR_19.path[VAR_22] != '/')
                VAR_19.flags |= VAR_1;


            if (VAR_19.path[0] == '/')
            {


                if (VAR_19.path[1] == '#' || VAR_19.path[1] == '$')
                    VAR_19.flags |= VAR_4;
                else
                    VAR_19.flags |= VAR_3;
            }
            else
                VAR_19.flags |= VAR_2;

            if (! (VAR_20 & VAR_19.flags))
                continue;

            if (VAR_21 && ! (VAR_21 & VAR_19.flags))
                continue;


            {
                int VAR_27 = (*VAR_10)(VAR_7, &VAR_19, VAR_11);
                switch (VAR_27)
                {
                    case 129:
                        FUNC_3(VAR_13);
                        return 0;
                    case 130:
                        break;
                    case 128:
                        FUNC_3(VAR_13);
                        return 1;
                    default:
                        break;
                }
            }
        }


        VAR_12 = VAR_14.block_next;
    }

    FUNC_3(VAR_13);
    return 1;
}
