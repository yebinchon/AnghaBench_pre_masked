
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {long (* callback_ex ) (TYPE_1__*,int,char const*,size_t,int,long,long,size_t*) ;long (* callback ) (TYPE_1__*,int,char const*,int,long,long) ;} ;
typedef TYPE_1__ BIO ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 size_t VAR_2 ;
 long FUNC_1 (TYPE_1__*,int,char const*,size_t,int,long,long,size_t*) ;
 long FUNC_2 (TYPE_1__*,int,char const*,int,long,long) ;

__attribute__((used)) static long FUNC_3(BIO *VAR_3, int VAR_4, const char *VAR_5, size_t VAR_6,
                              int VAR_7, long VAR_8, long VAR_9, size_t *VAR_10)
{
    long VAR_11;
    int VAR_12;

    if (VAR_3->callback_ex != ((void*)0))
        return VAR_3->callback_ex(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);


    VAR_12 = VAR_4 & ~VAR_1;





    if (FUNC_0(VAR_12)) {

        if (VAR_6 > VAR_2)
            return -1;

        VAR_7 = (int)VAR_6;
    }

    if (VAR_9 > 0 && (VAR_4 & VAR_1) && VAR_12 != VAR_0) {
        if (*VAR_10 > VAR_2)
            return -1;
        VAR_9 = *VAR_10;
    }

    VAR_11 = VAR_3->callback(VAR_3, VAR_4, VAR_5, VAR_7, VAR_8, VAR_9);

    if (VAR_11 > 0 && (VAR_4 & VAR_1) && VAR_12 != VAR_0) {
        *VAR_10 = (size_t)VAR_11;
        VAR_11 = 1;
    }

    return VAR_11;
}
