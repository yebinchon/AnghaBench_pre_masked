
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int user; void* (* malloc ) (int ,size_t) ;} ;
struct TYPE_8__ {TYPE_1__ alloc; } ;
typedef TYPE_2__ fz_context ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,size_t,int*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 void* FUNC_3 (int ,size_t) ;

__attribute__((used)) static void *
FUNC_4(fz_context *VAR_1, size_t VAR_2)
{
 void *VAR_3;
 int VAR_4 = 0;

 FUNC_0(VAR_1, VAR_0);
 do {
  VAR_3 = VAR_1->alloc.malloc(VAR_1->alloc.user, VAR_2);
  if (VAR_3 != ((void*)0))
  {
   FUNC_2(VAR_1, VAR_0);
   return VAR_3;
  }
 } while (FUNC_1(VAR_1, VAR_2, &VAR_4));
 FUNC_2(VAR_1, VAR_0);

 return ((void*)0);
}
