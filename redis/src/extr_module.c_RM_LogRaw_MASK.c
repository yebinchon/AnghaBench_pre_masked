
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int va_list ;
typedef int msg ;
struct TYPE_5__ {int verbosity; } ;
struct TYPE_4__ {char* name; } ;
typedef TYPE_1__ RedisModule ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_0 (int,char*) ;
 size_t FUNC_1 (char*,int,char*,char*) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*,int,char const*,int ) ;

void FUNC_4(RedisModule *VAR_6, const char *VAR_7, const char *VAR_8, va_list VAR_9) {
    char VAR_10[VAR_4];
    size_t VAR_11;
    int VAR_12;

    if (!FUNC_2(VAR_7,"debug")) VAR_12 = VAR_0;
    else if (!FUNC_2(VAR_7,"verbose")) VAR_12 = VAR_2;
    else if (!FUNC_2(VAR_7,"notice")) VAR_12 = VAR_1;
    else if (!FUNC_2(VAR_7,"warning")) VAR_12 = VAR_3;
    else VAR_12 = VAR_2;

    if (VAR_12 < VAR_5.verbosity) return;

    VAR_11 = FUNC_1(VAR_10, sizeof(VAR_10),"<%s> ", VAR_6? VAR_6->name: "module");
    FUNC_3(VAR_10 + VAR_11, sizeof(VAR_10) - VAR_11, VAR_8, VAR_9);
    FUNC_0(VAR_12,VAR_10);
}
