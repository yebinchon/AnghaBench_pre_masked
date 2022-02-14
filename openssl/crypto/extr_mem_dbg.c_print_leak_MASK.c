
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tm {char* tm_hour; int tm_sec; int tm_min; } ;
typedef int buf ;
struct TYPE_6__ {char* order; size_t array_siz; int array; int num; int addr; int threadid; int line; int file; int time; } ;
struct TYPE_5__ {int bytes; int chunks; int print_cb_arg; int (* print_cb ) (char*,size_t,int ) ;} ;
typedef TYPE_1__ MEM_LEAK ;
typedef TYPE_2__ MEM ;


 int FUNC_0 (char*,size_t,char*,char*,int ,int ) ;
 char* FUNC_1 (unsigned char const*,int) ;
 int FUNC_2 (char*) ;
 char** FUNC_3 (int ,size_t) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (char**) ;
 struct tm* FUNC_6 (int *) ;
 int VAR_0 ;
 int FUNC_7 (char*,size_t,int ) ;

__attribute__((used)) static void FUNC_8(const MEM *VAR_1, MEM_LEAK *VAR_2)
{
    char VAR_3[1024];
    char *VAR_4 = VAR_3, *VAR_5;
    size_t VAR_6 = sizeof(VAR_3);
    int VAR_7;
    struct tm *VAR_8 = ((void*)0);

    VAR_8 = FUNC_6(&VAR_1->time);
    VAR_7 = FUNC_0(VAR_4, VAR_6, "[%02d:%02d:%02d] ",
                     VAR_8->tm_hour, VAR_8->tm_min, VAR_8->tm_sec);
    if (VAR_7 <= 0) {
        VAR_4[0] = '\0';
        return;
    }
    VAR_4 += VAR_7;
    VAR_6 -= VAR_7;

    VAR_7 = FUNC_0(VAR_4, VAR_6, "%5lu file=%s, line=%d, ",
                     VAR_1->order, VAR_1->file, VAR_1->line);
    if (VAR_7 <= 0)
        return;
    VAR_4 += VAR_7;
    VAR_6 -= VAR_7;

    VAR_5 = FUNC_1((const unsigned char *)&VAR_1->threadid,
                             sizeof(VAR_1->threadid));
    VAR_7 = FUNC_0(VAR_4, VAR_6, "thread=%s, number=%d, address=%p\n", VAR_5,
                     VAR_1->num, VAR_1->addr);
    FUNC_2(VAR_5);
    if (VAR_7 <= 0)
        return;
    VAR_4 += VAR_7;
    VAR_6 -= VAR_7;

    VAR_2->print_cb(VAR_3, (size_t)(VAR_4 - VAR_3), VAR_2->print_cb_arg);
    VAR_2->chunks++;
    VAR_2->bytes += VAR_1->num;


    {
        size_t VAR_9;
        char **VAR_10 = FUNC_3(VAR_1->array, VAR_1->array_siz);

        for (VAR_9 = 0; VAR_9 < VAR_1->array_siz; VAR_9++)
            FUNC_4(VAR_0, "##> %s\n", VAR_10[VAR_9]);
        FUNC_5(VAR_10);
    }

}
