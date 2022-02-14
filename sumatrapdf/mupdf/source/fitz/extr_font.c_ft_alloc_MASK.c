
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_3__ {scalar_t__ user; } ;
typedef TYPE_1__* FT_Memory ;


 void* FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,long) ;

__attribute__((used)) static void *FUNC_2(FT_Memory VAR_0, long VAR_1)
{
 fz_context *VAR_2 = (fz_context *) VAR_0->user;
 return FUNC_0(FUNC_1(VAR_2, VAR_1), "ft_alloc");
}
