
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct tm {int tm_year; } ;
struct TYPE_5__ {unsigned char* data; scalar_t__ type; scalar_t__ length; int flags; } ;
typedef TYPE_1__ ASN1_TIME ;
typedef int ASN1_STRING ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int FUNC_4 (struct tm*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (unsigned char*,char const*,scalar_t__) ;
 scalar_t__ FUNC_7 (char const*) ;

int FUNC_8(ASN1_TIME *VAR_3, const char *VAR_4)
{
    ASN1_TIME VAR_5;
    struct tm VAR_6;
    int VAR_7 = 0;

    VAR_5.length = FUNC_7(VAR_4);
    VAR_5.data = (unsigned char *)VAR_4;
    VAR_5.flags = VAR_0;

    VAR_5.type = VAR_2;

    if (!FUNC_1(&VAR_5)) {
        VAR_5.type = VAR_1;
        if (!FUNC_1(&VAR_5))
            goto out;
    }
    if (VAR_3 != ((void*)0) && VAR_5.type == VAR_1) {
        if (!FUNC_4(&VAR_6, &VAR_5))
            goto out;
        if (FUNC_5(VAR_6.tm_year)) {
            VAR_5.length -= 2;





            VAR_5.data = FUNC_3(VAR_5.length + 1);
            if (VAR_5.data == ((void*)0))
                goto out;
            FUNC_6(VAR_5.data, VAR_4 + 2, VAR_5.length);
            VAR_5.type = VAR_2;
        }
    }

    if (VAR_3 == ((void*)0) || FUNC_0((ASN1_STRING *)VAR_3, (ASN1_STRING *)&VAR_5))
        VAR_7 = 1;

    if (VAR_5.data != (unsigned char *)VAR_4)
        FUNC_2(VAR_5.data);
out:
    return VAR_7;
}
