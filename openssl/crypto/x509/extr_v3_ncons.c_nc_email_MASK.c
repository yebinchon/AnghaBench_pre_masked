
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; scalar_t__ data; } ;
typedef TYPE_1__ ASN1_IA5STRING ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 char* FUNC_1 (char const*,char) ;
 scalar_t__ FUNC_2 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_3(ASN1_IA5STRING *VAR_3, ASN1_IA5STRING *VAR_4)
{
    const char *VAR_5 = (char *)VAR_4->data;
    const char *VAR_6 = (char *)VAR_3->data;

    const char *VAR_7 = FUNC_1(VAR_5, '@');
    const char *VAR_8 = FUNC_1(VAR_6, '@');
    if (!VAR_8)
        return VAR_1;

    if (!VAR_7 && (*VAR_5 == '.')) {
        if (VAR_3->length > VAR_4->length) {
            VAR_6 += VAR_3->length - VAR_4->length;
            if (FUNC_0(VAR_5, VAR_6) == 0)
                return VAR_2;
        }
        return VAR_0;
    }



    if (VAR_7) {
        if (VAR_7 != VAR_5) {
            if ((VAR_7 - VAR_5) != (VAR_8 - VAR_6))
                return VAR_0;

            if (FUNC_2(VAR_5, VAR_6, VAR_8 - VAR_6))
                return VAR_0;
        }

        VAR_5 = VAR_7 + 1;
    }
    VAR_6 = VAR_8 + 1;

    if (FUNC_0(VAR_5, VAR_6))
        return VAR_0;

    return VAR_2;

}
