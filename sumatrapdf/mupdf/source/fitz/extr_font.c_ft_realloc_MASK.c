
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_4__ {scalar_t__ user; } ;
typedef TYPE_1__* FT_Memory ;


 void* FUNC_0 (TYPE_1__*,long) ;
 int FUNC_1 (int *,void*) ;
 void* FUNC_2 (int *,void*,long) ;

__attribute__((used)) static void *FUNC_3(FT_Memory VAR_0, long VAR_1, long VAR_2, void *VAR_3)
{
 fz_context *VAR_4 = (fz_context *) VAR_0->user;
 void *VAR_5 = ((void*)0);
 if (VAR_2 == 0)
 {
  FUNC_1(VAR_4, VAR_3);
  return VAR_5;
 }
 if (VAR_3 == ((void*)0))
  return FUNC_0(VAR_0, VAR_2);
 return FUNC_2(VAR_4, VAR_3, VAR_2);
}
