
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; scalar_t__ ptr; scalar_t__ init; } ;
typedef int FILE ;
typedef TYPE_1__ BIO ;


 int VAR_0 ;
 int FUNC_0 (char const*,int,int,scalar_t__) ;
 int FUNC_1 (char const*,int,int,int *) ;

__attribute__((used)) static int FUNC_2(BIO *VAR_1, const char *VAR_2, int VAR_3)
{
    int VAR_4 = 0;

    if (VAR_1->init && (VAR_2 != ((void*)0))) {
        if (VAR_1->flags & VAR_0)
            VAR_4 = FUNC_0(VAR_2, (int)VAR_3, 1, VAR_1->ptr);
        else
            VAR_4 = FUNC_1(VAR_2, (int)VAR_3, 1, (FILE *)VAR_1->ptr);
        if (VAR_4)
            VAR_4 = VAR_3;






    }
    return VAR_4;
}
