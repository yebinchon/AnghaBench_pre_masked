
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* ptr; int len; } ;
typedef TYPE_1__ xmlstr_t ;
struct assembly_version {unsigned int major; unsigned int minor; unsigned int build; unsigned int revision; } ;
typedef char WCHAR ;
typedef int UNICODE_STRING ;
typedef int BOOL ;


 int FUNC_0 (char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__ const*) ;

__attribute__((used)) static BOOL FUNC_2(const xmlstr_t *VAR_2, struct assembly_version *VAR_3)
{
    unsigned int VAR_4[4];
    unsigned int VAR_5;
    const WCHAR *VAR_6;
    UNICODE_STRING VAR_7;


    VAR_4[0] = VAR_4[1] = VAR_4[2] = VAR_4[3] = VAR_5 = 0;
    for (VAR_6 = VAR_2->ptr; VAR_6 < VAR_2->ptr + VAR_2->len; VAR_6++)
    {
        if (*VAR_6 >= '0' && *VAR_6 <= '9')
        {
            VAR_4[VAR_5] = VAR_4[VAR_5] * 10 + *VAR_6 - '0';
            if (VAR_4[VAR_5] >= 0x10000) goto error;
        }
        else if (*VAR_6 == '.')
        {
            if (++VAR_5 >= 4) goto error;
        }
        else goto error;
    }
    VAR_3->major = VAR_4[0];
    VAR_3->minor = VAR_4[1];
    VAR_3->build = VAR_4[2];
    VAR_3->revision = VAR_4[3];
    return VAR_1;

error:
    VAR_7 = FUNC_1(VAR_2);
    FUNC_0( "Wrong version definition in manifest file (%wZ)\n", &VAR_7 );
    return VAR_0;
}
