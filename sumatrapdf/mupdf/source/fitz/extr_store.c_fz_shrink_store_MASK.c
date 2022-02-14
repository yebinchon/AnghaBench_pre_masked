
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef unsigned int uint64_t ;
struct TYPE_9__ {int size; } ;
typedef TYPE_1__ fz_store ;
struct TYPE_10__ {TYPE_1__* store; } ;
typedef TYPE_2__ fz_context ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ,char*,int) ;
 int FUNC_4 (TYPE_2__*,size_t) ;

int
FUNC_5(fz_context *VAR_1, unsigned int VAR_2)
{
 int VAR_3;
 fz_store *VAR_4;
 size_t VAR_5;

 if (VAR_2 >= 100)
  return 1;

 VAR_4 = VAR_1->store;
 if (VAR_4 == ((void*)0))
  return 0;




 FUNC_0(VAR_1, VAR_0);

 VAR_5 = (size_t)(((uint64_t)VAR_4->size * VAR_2) / 100);
 if (VAR_4->size > VAR_5)
  FUNC_4(VAR_1, VAR_4->size - VAR_5);

 VAR_3 = (VAR_4->size <= VAR_5) ? 1 : 0;
 FUNC_2(VAR_1, VAR_0);




 return VAR_3;
}
