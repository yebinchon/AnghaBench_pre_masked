
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int utmp ;
typedef scalar_t__ uint64_t ;
struct TYPE_4__ {int size; } ;
typedef int ASN1_VALUE ;
typedef TYPE_1__ ASN1_ITEM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__*,int*,unsigned char const**,int) ;
 int FUNC_2 (char*,scalar_t__*,int) ;
 int FUNC_3 (int **,TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_4(ASN1_VALUE **VAR_5, const unsigned char *VAR_6, int VAR_7,
                      int VAR_8, char *VAR_9, const ASN1_ITEM *VAR_10)
{
    uint64_t VAR_11 = 0;
    char *VAR_12;
    int VAR_13 = 0;

    if (*VAR_5 == ((void*)0) && !FUNC_3(VAR_5, VAR_10))
        return 0;

    VAR_12 = (char *)*VAR_5;







    if (VAR_7 == 0)
        goto long_compat;

    if (!FUNC_1(&VAR_11, &VAR_13, &VAR_6, VAR_7))
        return 0;
    if ((VAR_10->size & VAR_4) == 0 && VAR_13) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    if ((VAR_10->size & VAR_4) == VAR_4
            && !VAR_13 && VAR_11 > VAR_3) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }
    if (VAR_13)

        VAR_11 = 0 - VAR_11;

 long_compat:
    FUNC_2(VAR_12, &VAR_11, sizeof(VAR_11));
    return 1;
}
