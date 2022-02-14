
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int streamID ;
struct TYPE_7__ {int last_id; void* consumers; void* pel; } ;
typedef TYPE_1__ streamCG ;
struct TYPE_8__ {int * cgroups; } ;
typedef TYPE_2__ stream ;


 scalar_t__ FUNC_0 (int *,unsigned char*,size_t) ;
 int FUNC_1 (int *,unsigned char*,size_t,TYPE_1__*,int *) ;
 void* FUNC_2 () ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_3 (int) ;

streamCG *FUNC_4(stream *VAR_1, char *VAR_2, size_t VAR_3, streamID *VAR_4) {
    if (VAR_1->cgroups == ((void*)0)) VAR_1->cgroups = FUNC_2();
    if (FUNC_0(VAR_1->cgroups,(unsigned char*)VAR_2,VAR_3) != VAR_0)
        return ((void*)0);

    streamCG *VAR_5 = FUNC_3(sizeof(*VAR_5));
    VAR_5->pel = FUNC_2();
    VAR_5->consumers = FUNC_2();
    VAR_5->last_id = *VAR_4;
    FUNC_1(VAR_1->cgroups,(unsigned char*)VAR_2,VAR_3,VAR_5,((void*)0));
    return VAR_5;
}
