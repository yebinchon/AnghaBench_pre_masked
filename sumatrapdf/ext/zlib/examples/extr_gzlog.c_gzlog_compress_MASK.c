
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;
struct log {scalar_t__ last; scalar_t__ first; size_t stored; int path; int end; int fd; int id; } ;
typedef struct log gzlog ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_1 (unsigned char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned char*) ;
 scalar_t__ FUNC_4 (struct log*) ;
 int FUNC_5 (struct log*,unsigned char*,size_t) ;
 scalar_t__ FUNC_6 (struct log*,int ) ;
 scalar_t__ FUNC_7 (struct log*) ;
 int FUNC_8 (struct log*) ;
 scalar_t__ FUNC_9 (int ,scalar_t__,int ) ;
 unsigned char* FUNC_10 (size_t) ;
 int FUNC_11 (int ,int,int) ;
 size_t FUNC_12 (int ,...) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,char*) ;
 scalar_t__ FUNC_15 (int,...) ;

int FUNC_16(gzlog *VAR_8)
{
    int VAR_9, VAR_10;
    uint VAR_11;
    size_t VAR_12, VAR_13;
    unsigned char *VAR_14, VAR_15[5];
    struct log *VAR_16 = VAR_8;


    if (VAR_16 == ((void*)0) || FUNC_13(VAR_16->id, VAR_2))
        return -3;




    if (FUNC_4(VAR_16) && FUNC_7(VAR_16))
        return -1;


    VAR_12 = ((size_t)(VAR_16->last - VAR_16->first) & ~(((size_t)1 << 10) - 1)) +
          VAR_16->stored;
    if ((VAR_14 = FUNC_10(VAR_12)) == ((void*)0))
        return -2;


    do {

        if (FUNC_9(VAR_16->fd, VAR_16->first - 1, VAR_7) < 0)
            break;
        VAR_13 = 0;
        while (VAR_13 < VAR_12) {
            if (FUNC_12(VAR_16->fd, VAR_15, 5) != 5)
                break;
            VAR_11 = FUNC_1(VAR_15 + 1);
            if (VAR_13 + VAR_11 > VAR_12 ||
                FUNC_12(VAR_16->fd, (char *)VAR_14 + VAR_13, VAR_11) != VAR_11)
                break;
            VAR_13 += VAR_11;
        }
        if (FUNC_9(VAR_16->fd, 0, VAR_6) != VAR_16->last + 4 + VAR_16->stored)
            break;
        FUNC_8(VAR_16);


        FUNC_14(VAR_16->end, ".add");
        VAR_9 = FUNC_11(VAR_16->path, VAR_5 | VAR_3 | VAR_4, 0644);
        if (VAR_9 < 0)
            break;
        VAR_10 = (size_t)FUNC_15(VAR_9, VAR_14, VAR_12) != VAR_12;
        if (VAR_10 | FUNC_2(VAR_9))
            break;
        FUNC_8(VAR_16);


        FUNC_14(VAR_16->end, ".temp");
        VAR_9 = FUNC_11(VAR_16->path, VAR_5 | VAR_3 | VAR_4, 0644);
        if (VAR_9 < 0)
            break;
        VAR_13 = VAR_1 > VAR_12 ? VAR_12 : VAR_1;
        VAR_10 = (size_t)FUNC_15(VAR_9, (char *)VAR_14 + VAR_12 - VAR_13, VAR_13) != VAR_13;
        if (VAR_10 | FUNC_2(VAR_9))
            break;
        FUNC_8(VAR_16);


        VAR_16->last = VAR_16->first;
        VAR_16->stored = 0;
        if (FUNC_6(VAR_16, VAR_0))
            break;
        FUNC_0(7);


        VAR_10 = FUNC_5(VAR_16, VAR_14, VAR_12);
        FUNC_3(VAR_14);
        return VAR_10;
    } while (0);


    FUNC_3(VAR_14);
    return -1;
}
