
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int temp ;
struct TYPE_4__ {int nkey; scalar_t__ nbytes; scalar_t__ exptime; struct TYPE_4__* next; } ;
typedef TYPE_1__ item ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_1__** VAR_2 ;
 int * VAR_3 ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,char*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 unsigned int FUNC_6 (char*,int,char*,char*,scalar_t__,scalar_t__) ;
 int FUNC_7 (char*,int ,int) ;

char *FUNC_8(const unsigned int VAR_5, const unsigned int VAR_6, unsigned int *VAR_7) {
    unsigned int VAR_8 = 2 * 1024 * 1024;
    char *VAR_9;
    unsigned int VAR_10;
    item *VAR_11;
    unsigned int VAR_12;
    unsigned int VAR_13 = 0;
    char VAR_14[VAR_1 + 1];
    char VAR_15[512];
    unsigned int VAR_16 = VAR_5;
    VAR_16 |= VAR_0;

    FUNC_4(&VAR_3[VAR_16]);
    VAR_11 = VAR_2[VAR_16];

    VAR_9 = FUNC_2((size_t)VAR_8);
    if (VAR_9 == 0) {
        FUNC_5(&VAR_3[VAR_16]);
        return ((void*)0);
    }
    VAR_10 = 0;

    while (VAR_11 != ((void*)0) && (VAR_6 == 0 || VAR_13 < VAR_6)) {
        FUNC_1(VAR_11->nkey <= VAR_1);
        if (VAR_11->nbytes == 0 && VAR_11->nkey == 0) {
            VAR_11 = VAR_11->next;
            continue;
        }

        FUNC_7(VAR_14, FUNC_0(VAR_11), VAR_11->nkey);
        VAR_14[VAR_11->nkey] = 0x00;
        VAR_12 = FUNC_6(VAR_15, sizeof(VAR_15), "ITEM %s [%d b; %llu s]\r\n",
                       VAR_14, VAR_11->nbytes - 2,
                       VAR_11->exptime == 0 ? 0 :
                       (unsigned long long)VAR_11->exptime + VAR_4);
        if (VAR_10 + VAR_12 + 6 > VAR_8)
            break;
        FUNC_3(VAR_9 + VAR_10, VAR_15, VAR_12);
        VAR_10 += VAR_12;
        VAR_13++;
        VAR_11 = VAR_11->next;
    }

    FUNC_3(VAR_9 + VAR_10, "END\r\n", 6);
    VAR_10 += 5;

    *VAR_7 = VAR_10;
    FUNC_5(&VAR_3[VAR_16]);
    return VAR_9;
}
