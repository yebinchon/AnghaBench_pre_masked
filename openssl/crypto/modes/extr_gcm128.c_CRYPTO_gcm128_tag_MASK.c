
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int c; } ;
struct TYPE_6__ {TYPE_1__ Xi; } ;
typedef TYPE_2__ GCM128_CONTEXT ;


 int FUNC_0 (TYPE_2__*,int *,int ) ;
 int FUNC_1 (unsigned char*,int ,size_t) ;

void FUNC_2(GCM128_CONTEXT *VAR_0, unsigned char *VAR_1, size_t VAR_2)
{
    FUNC_0(VAR_0, ((void*)0), 0);
    FUNC_1(VAR_1, VAR_0->Xi.c,
           VAR_2 <= sizeof(VAR_0->Xi.c) ? VAR_2 : sizeof(VAR_0->Xi.c));
}
