
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; int * data; } ;
typedef TYPE_1__ ASN1_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (unsigned char**,int ,int,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 unsigned char* FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (unsigned char*,int *,int) ;

int FUNC_5(const ASN1_OBJECT *VAR_4, unsigned char **VAR_5)
{
    unsigned char *VAR_6, *VAR_7 = ((void*)0);
    int VAR_8;

    if ((VAR_4 == ((void*)0)) || (VAR_4->data == ((void*)0)))
        return 0;

    VAR_8 = FUNC_0(0, VAR_4->length, VAR_2);
    if (VAR_5 == ((void*)0) || VAR_8 == -1)
        return VAR_8;

    if (*VAR_5 == ((void*)0)) {
        if ((VAR_6 = VAR_7 = FUNC_3(VAR_8)) == ((void*)0)) {
            FUNC_2(VAR_0, VAR_1);
            return 0;
        }
    } else {
        VAR_6 = *VAR_5;
    }

    FUNC_1(&VAR_6, 0, VAR_4->length, VAR_2, VAR_3);
    FUNC_4(VAR_6, VAR_4->data, VAR_4->length);





    *VAR_5 = VAR_7 != ((void*)0) ? VAR_7 : VAR_6 + VAR_4->length;
    return VAR_8;
}
