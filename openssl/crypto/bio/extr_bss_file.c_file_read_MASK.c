
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; scalar_t__ ptr; scalar_t__ init; } ;
typedef int FILE ;
typedef TYPE_1__ BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*,int,int,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (char*,int,int,int *) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(BIO *VAR_4, char *VAR_5, int VAR_6)
{
    int VAR_7 = 0;

    if (VAR_4->init && (VAR_5 != ((void*)0))) {
        if (VAR_4->flags & VAR_0)
            VAR_7 = FUNC_3(VAR_5, 1, (int)VAR_6, VAR_4->ptr);
        else
            VAR_7 = FUNC_5(VAR_5, 1, (int)VAR_6, (FILE *)VAR_4->ptr);
        if (VAR_7 == 0
            && (VAR_4->flags & VAR_0
                ? FUNC_2((FILE *)VAR_4->ptr) : FUNC_4((FILE *)VAR_4->ptr))) {
            FUNC_1(VAR_2, FUNC_6(),
                           "calling fread()");
            FUNC_0(VAR_1, VAR_3);
            VAR_7 = -1;
        }
    }
    return VAR_7;
}
