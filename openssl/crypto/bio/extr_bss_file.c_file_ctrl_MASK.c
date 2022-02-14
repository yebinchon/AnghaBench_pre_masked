
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int p ;
struct TYPE_5__ {int flags; int shutdown; int init; int * ptr; } ;
typedef int FILE ;
typedef TYPE_1__ BIO ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int ,char*,...) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,long,int ) ;
 int FUNC_8 (int *,char) ;
 long FUNC_9 (int *) ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int,int ) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *,long,int ) ;
 long FUNC_17 (int *) ;
 int FUNC_18 () ;
 int FUNC_19 (int) ;
 int * FUNC_20 (void*,char*) ;
 int FUNC_21 (int,int ) ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;

__attribute__((used)) static long FUNC_22(BIO *VAR_20, int VAR_21, long VAR_22, void *VAR_23)
{
    long VAR_24 = 1;
    FILE *VAR_25 = (FILE *)VAR_20->ptr;
    FILE **VAR_26;
    char VAR_27[4];
    int VAR_28;

    switch (VAR_21) {
    case 132:
    case 135:
        if (VAR_20->flags & VAR_1)
            VAR_24 = (long)FUNC_7(VAR_20->ptr, VAR_22, 0);
        else
            VAR_24 = (long)FUNC_16(VAR_25, VAR_22, 0);
        break;
    case 142:
        if (VAR_20->flags & VAR_1)
            VAR_24 = (long)FUNC_5(VAR_25);
        else
            VAR_24 = (long)FUNC_12(VAR_25);
        break;
    case 131:
    case 139:
        if (VAR_20->flags & VAR_1)
            VAR_24 = FUNC_9(VAR_20->ptr);
        else
            VAR_24 = FUNC_17(VAR_25);
        break;
    case 128:
        FUNC_14(VAR_20);
        VAR_20->shutdown = (int)VAR_22 & VAR_0;
        VAR_20->ptr = VAR_23;
        VAR_20->init = 1;
        {
        }
        break;
    case 129:
        FUNC_14(VAR_20);
        VAR_20->shutdown = (int)VAR_22 & VAR_0;
        if (VAR_22 & VAR_2) {
            if (VAR_22 & VAR_3)
                FUNC_4(VAR_27, "a+", sizeof(VAR_27));
            else
                FUNC_4(VAR_27, "a", sizeof(VAR_27));
        } else if ((VAR_22 & VAR_3) && (VAR_22 & VAR_5))
            FUNC_4(VAR_27, "r+", sizeof(VAR_27));
        else if (VAR_22 & VAR_5)
            FUNC_4(VAR_27, "w", sizeof(VAR_27));
        else if (VAR_22 & VAR_3)
            FUNC_4(VAR_27, "r", sizeof(VAR_27));
        else {
            FUNC_1(VAR_6, VAR_7);
            VAR_24 = 0;
            break;
        }
        VAR_25 = FUNC_20(VAR_23, VAR_27);
        if (VAR_25 == ((void*)0)) {
            FUNC_2(VAR_9, FUNC_18(),
                           "calling fopen(%s, %s)",
                           VAR_23, VAR_27);
            FUNC_1(VAR_6, VAR_10);
            VAR_24 = 0;
            break;
        }
        VAR_20->ptr = VAR_25;
        VAR_20->init = 1;

        FUNC_0(VAR_20, VAR_1);
        break;
    case 130:

        if (VAR_23 != ((void*)0)) {
            VAR_26 = (FILE **)VAR_23;
            *VAR_26 = (FILE *)VAR_20->ptr;
        }
        break;
    case 140:
        VAR_24 = (long)VAR_20->shutdown;
        break;
    case 134:
        VAR_20->shutdown = (int)VAR_22;
        break;
    case 141:
        VAR_28 = VAR_20->flags & VAR_1
                ? FUNC_6(VAR_20->ptr) : FUNC_13((FILE *)VAR_20->ptr);
        if (VAR_28 == VAR_8) {
            FUNC_2(VAR_9, FUNC_18(),
                           "calling fflush()");
            FUNC_1(VAR_6, VAR_10);
            VAR_24 = 0;
        }
        break;
    case 143:
        VAR_24 = 1;
        break;

    case 133:
    case 138:
    case 136:
    case 137:
    default:
        VAR_24 = 0;
        break;
    }
    return VAR_24;
}
