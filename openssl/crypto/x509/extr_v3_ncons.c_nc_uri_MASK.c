
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; scalar_t__ data; } ;
typedef TYPE_1__ ASN1_IA5STRING ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char const*,int) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(ASN1_IA5STRING *VAR_3, ASN1_IA5STRING *VAR_4)
{
    const char *VAR_5 = (char *)VAR_4->data;
    const char *VAR_6 = (char *)VAR_3->data;
    const char *VAR_7 = FUNC_1(VAR_6, ':');
    int VAR_8;


    if (VAR_7 == ((void*)0) || VAR_7[1] != '/' || VAR_7[2] != '/')
        return VAR_1;
    VAR_6 = VAR_7 + 3;





    VAR_7 = FUNC_1(VAR_6, ':');

    if (VAR_7 == ((void*)0))
        VAR_7 = FUNC_1(VAR_6, '/');

    if (VAR_7 == ((void*)0))
        VAR_8 = FUNC_2(VAR_6);
    else
        VAR_8 = VAR_7 - VAR_6;

    if (VAR_8 == 0)
        return VAR_1;


    if (*VAR_5 == '.') {
        if (VAR_8 > VAR_4->length) {
            VAR_7 = VAR_6 + VAR_8 - VAR_4->length;
            if (FUNC_0(VAR_7, VAR_5, VAR_4->length) == 0)
                return VAR_2;
        }
        return VAR_0;
    }

    if ((VAR_4->length != (int)VAR_8)
        || FUNC_0(VAR_6, VAR_5, VAR_8))
        return VAR_0;

    return VAR_2;

}
