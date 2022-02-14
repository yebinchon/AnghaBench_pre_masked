
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmUnitInfo {int flags; char* path; } ;
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



 unsigned int VAR_5 ;
 size_t FUNC_0 (struct chmFile*,int *,size_t,size_t) ;
 int FUNC_1 (int **,struct chmUnitInfo*) ;
 int FUNC_2 (int **,unsigned int*,size_t,struct chmPmglHeader*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (unsigned int) ;
 size_t FUNC_5 (char*) ;
 int FUNC_6 (struct chmFile*,struct chmUnitInfo*,void*) ;

int FUNC_7(struct chmFile *VAR_6,
                  int VAR_7,
                  CHM_ENUMERATOR VAR_8,
                  void *VAR_9)
{
    Int32 VAR_10;



    UChar *VAR_11 = FUNC_4((unsigned int)VAR_6->block_len);
    struct chmPmglHeader VAR_12;
    UChar *VAR_13;
    UChar *VAR_14;
    unsigned int VAR_15;
    UInt64 VAR_16;


    struct chmUnitInfo VAR_17;
    int VAR_18 = (VAR_7 & 0x7);
    int VAR_19 = (VAR_7 & 0xF8);

    if (VAR_11 == ((void*)0))
        return 0;


    VAR_10 = VAR_6->index_head;


    while (VAR_10 != -1)
    {


        if (FUNC_0(VAR_6,
                             VAR_11,
                             (UInt64)VAR_6->dir_offset + (UInt64)VAR_10*VAR_6->block_len,
                             VAR_6->block_len) != VAR_6->block_len)
        {
            FUNC_3(VAR_11);
            return 0;
        }


        VAR_14 = VAR_11;
        VAR_15 = VAR_5;
        if (! FUNC_2(&VAR_14, &VAR_15, VAR_6->block_len, &VAR_12))
        {
            FUNC_3(VAR_11);
            return 0;
        }
        VAR_13 = VAR_11 + VAR_6->block_len - (VAR_12.free_space);


        while (VAR_14 < VAR_13)
        {
            VAR_17.flags = 0;

            if (! FUNC_1(&VAR_14, &VAR_17))
            {
                FUNC_3(VAR_11);
                return 0;
            }


            VAR_16 = FUNC_5(VAR_17.path)-1;


            if (VAR_17.path[VAR_16] == '/')
                VAR_17.flags |= VAR_0;


            if (VAR_17.path[VAR_16] != '/')
                VAR_17.flags |= VAR_1;


            if (VAR_17.path[0] == '/')
            {


                if (VAR_17.path[1] == '#' || VAR_17.path[1] == '$')
                    VAR_17.flags |= VAR_4;
                else
                    VAR_17.flags |= VAR_3;
            }
            else
                VAR_17.flags |= VAR_2;

            if (! (VAR_18 & VAR_17.flags))
                continue;

            if (VAR_19 && ! (VAR_19 & VAR_17.flags))
                continue;


            {
                int VAR_20 = (*VAR_8)(VAR_6, &VAR_17, VAR_9);
                switch (VAR_20)
                {
                    case 129:
                        FUNC_3(VAR_11);
                        return 0;
                    case 130:
                        break;
                    case 128:
                        FUNC_3(VAR_11);
                        return 1;
                    default:
                        break;
                }
            }
        }


        VAR_10 = VAR_12.block_next;
    }

    FUNC_3(VAR_11);
    return 1;
}
