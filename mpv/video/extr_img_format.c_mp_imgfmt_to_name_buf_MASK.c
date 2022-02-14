
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mp_imgfmt_entry {int fmt; char* name; } ;
struct TYPE_3__ {char* name; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;


 char FUNC_0 (char,char) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 struct mp_imgfmt_entry* VAR_0 ;
 int FUNC_3 (char*,size_t,char*,char const*) ;
 int FUNC_4 (char*) ;

char *FUNC_5(char *VAR_1, size_t VAR_2, int VAR_3)
{
    const char *VAR_4 = ((void*)0);
    const struct mp_imgfmt_entry *VAR_5 = VAR_0;
    for (; VAR_5->fmt; VAR_5++) {
        if (VAR_5->name && VAR_5->fmt == VAR_3) {
            VAR_4 = VAR_5->name;
            break;
        }
    }
    if (!VAR_4) {
        const AVPixFmtDescriptor *VAR_6 = FUNC_1(FUNC_2(VAR_3));
        if (VAR_6)
            VAR_4 = VAR_6->name;
    }
    if (!VAR_4)
        VAR_4 = "unknown";
    FUNC_3(VAR_1, VAR_2, "%s", VAR_4);
    int VAR_7 = FUNC_4(VAR_1);
    if (VAR_7 > 2 && VAR_1[VAR_7 - 2] == FUNC_0('l', 'b') && VAR_1[VAR_7 - 1] == 'e')
        VAR_1[VAR_7 - 2] = '\0';
    return VAR_1;
}
