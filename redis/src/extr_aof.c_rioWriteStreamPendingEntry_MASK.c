
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int delivery_count; int delivery_time; } ;
typedef TYPE_1__ streamNACK ;
typedef int streamID ;
struct TYPE_6__ {char* name; } ;
typedef TYPE_2__ streamConsumer ;
typedef int robj ;
typedef int rio ;


 scalar_t__ FUNC_0 (int *,char,int) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,char const*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (unsigned char*,int *) ;

int FUNC_7(rio *VAR_0, robj *VAR_1, const char *VAR_2, size_t VAR_3, streamConsumer *VAR_4, unsigned char *VAR_5, streamNACK *VAR_6) {


    streamID VAR_7;
    FUNC_6(VAR_5,&VAR_7);
    if (FUNC_0(VAR_0,'*',12) == 0) return 0;
    if (FUNC_4(VAR_0,"XCLAIM",6) == 0) return 0;
    if (FUNC_2(VAR_0,VAR_1) == 0) return 0;
    if (FUNC_4(VAR_0,VAR_2,VAR_3) == 0) return 0;
    if (FUNC_4(VAR_0,VAR_4->name,FUNC_5(VAR_4->name)) == 0) return 0;
    if (FUNC_4(VAR_0,"0",1) == 0) return 0;
    if (FUNC_3(VAR_0,&VAR_7) == 0) return 0;
    if (FUNC_4(VAR_0,"TIME",4) == 0) return 0;
    if (FUNC_1(VAR_0,VAR_6->delivery_time) == 0) return 0;
    if (FUNC_4(VAR_0,"RETRYCOUNT",10) == 0) return 0;
    if (FUNC_1(VAR_0,VAR_6->delivery_count) == 0) return 0;
    if (FUNC_4(VAR_0,"JUSTID",6) == 0) return 0;
    if (FUNC_4(VAR_0,"FORCE",5) == 0) return 0;
    return 1;
}
