
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int streamCG ;
struct TYPE_3__ {int * cgroups; } ;
typedef TYPE_1__ stream ;
typedef scalar_t__ sds ;


 int * FUNC_0 (int *,unsigned char*,int ) ;
 int * VAR_0 ;
 int FUNC_1 (scalar_t__) ;

streamCG *FUNC_2(stream *VAR_1, sds VAR_2) {
    if (VAR_1->cgroups == ((void*)0)) return ((void*)0);
    streamCG *VAR_3 = FUNC_0(VAR_1->cgroups,(unsigned char*)VAR_2,
                           FUNC_1(VAR_2));
    return (VAR_3 == VAR_0) ? ((void*)0) : VAR_3;
}
