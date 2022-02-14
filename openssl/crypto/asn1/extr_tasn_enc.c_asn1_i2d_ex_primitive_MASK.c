
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int utype; } ;
typedef int ASN1_VALUE ;
typedef TYPE_1__ ASN1_ITEM ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (unsigned char**) ;
 int FUNC_2 (unsigned char**,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int const**,unsigned char*,int*,TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_4(const ASN1_VALUE **VAR_3, unsigned char **VAR_4,
                                 const ASN1_ITEM *VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8;
    int VAR_9;
    int VAR_10;
    int VAR_11 = 0;

    VAR_9 = VAR_5->utype;





    VAR_8 = FUNC_3(VAR_3, ((void*)0), &VAR_9, VAR_5);






    if ((VAR_9 == VAR_1) || (VAR_9 == VAR_2) ||
        (VAR_9 == VAR_0))
        VAR_10 = 0;
    else
        VAR_10 = 1;



    if (VAR_8 == -1)
        return 0;


    if (VAR_8 == -2) {
        VAR_11 = 2;
        VAR_8 = 0;
    }


    if (VAR_6 == -1)
        VAR_6 = VAR_9;


    if (VAR_4) {
        if (VAR_10)
            FUNC_2(VAR_4, VAR_11, VAR_8, VAR_6, VAR_7);
        FUNC_3(VAR_3, *VAR_4, &VAR_9, VAR_5);
        if (VAR_11)
            FUNC_1(VAR_4);
        else
            *VAR_4 += VAR_8;
    }

    if (VAR_10)
        return FUNC_0(VAR_11, VAR_8, VAR_6);
    return VAR_8;
}
