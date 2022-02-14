
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8 ;
struct TYPE_7__ {int size; int * data; } ;
struct TYPE_5__ {TYPE_3__* textcache; } ;
struct TYPE_6__ {TYPE_1__ cache; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef TYPE_3__ DATABLOB ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int *,void*,int) ;

void
FUNC_3(RDPCLIENT * VAR_0, uint8 VAR_1, void *VAR_2, int VAR_3)
{
 DATABLOB *VAR_4;
 void * VAR_5 = FUNC_1(VAR_3);

 if(VAR_5 == ((void*)0))
  return;

 VAR_4 = &VAR_0->cache.textcache[VAR_1];
 if (VAR_4->data != ((void*)0))
  FUNC_0(VAR_4->data);
 VAR_4->data = VAR_5;
 VAR_4->size = VAR_3;
 FUNC_2(VAR_4->data, VAR_2, VAR_3);
}
