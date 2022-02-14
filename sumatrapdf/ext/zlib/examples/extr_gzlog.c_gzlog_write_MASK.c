
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log {int last; int first; int stored; int path; int end; int id; } ;
typedef struct log gzlog ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct log*) ;
 scalar_t__ FUNC_3 (struct log*,void*,size_t) ;
 scalar_t__ FUNC_4 (struct log*) ;
 scalar_t__ FUNC_5 (struct log*,int ) ;
 scalar_t__ FUNC_6 (struct log*) ;
 int FUNC_7 (struct log*) ;
 int FUNC_8 (int ,int,int) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,char*) ;
 scalar_t__ FUNC_11 (int,void*,size_t) ;

int FUNC_12(gzlog *VAR_6, void *VAR_7, size_t VAR_8)
{
    int VAR_9, VAR_10;
    struct log *VAR_11 = VAR_6;


    if (VAR_11 == ((void*)0) || FUNC_9(VAR_11->id, VAR_1))
        return -3;
    if (VAR_7 == ((void*)0) || VAR_8 <= 0)
        return 0;




    if (FUNC_4(VAR_11) && FUNC_6(VAR_11))
        return -1;


    FUNC_10(VAR_11->end, ".add");
    VAR_9 = FUNC_8(VAR_11->path, VAR_4 | VAR_2 | VAR_3, 0644);
    if (VAR_9 < 0)
        return -1;
    VAR_10 = (size_t)FUNC_11(VAR_9, VAR_7, VAR_8) != VAR_8;
    if (VAR_10 | FUNC_1(VAR_9))
        return -1;
    FUNC_7(VAR_11);


    if (FUNC_5(VAR_11, VAR_0))
        return -1;
    FUNC_0(8);


    if (FUNC_3(VAR_11, VAR_7, VAR_8))
        return -1;


    if (((VAR_11->last - VAR_11->first) >> 10) + (VAR_11->stored >> 10) < VAR_5)
        return 0;


    return FUNC_2(VAR_11);
}
