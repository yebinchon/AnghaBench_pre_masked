
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* pszVal; } ;
struct TYPE_8__ {TYPE_1__ u; } ;
struct TYPE_9__ {TYPE_2__ value; } ;
typedef TYPE_3__ header_t ;
struct TYPE_10__ {int encoding; } ;
typedef TYPE_4__ MimeBody ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(MimeBody *VAR_4, header_t *VAR_5)
{
    const char *VAR_6 = VAR_5->value.u.pszVal;

    if(!FUNC_1(VAR_6, "base64", -1))
        VAR_4->encoding = VAR_2;
    else if(!FUNC_1(VAR_6, "quoted-printable", -1))
        VAR_4->encoding = VAR_3;
    else if(!FUNC_1(VAR_6, "7bit", -1))
        VAR_4->encoding = VAR_0;
    else if(!FUNC_1(VAR_6, "8bit", -1))
        VAR_4->encoding = VAR_1;
    else
        FUNC_0("unknown encoding %s\n", FUNC_2(VAR_6));
}
