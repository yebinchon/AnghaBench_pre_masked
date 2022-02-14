
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint16 ;
struct TYPE_5__ {int ** cursorcache; } ;
struct TYPE_6__ {TYPE_1__ cache; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef int * HCURSOR ;


 size_t FUNC_0 (int **) ;
 int FUNC_1 (char*,size_t) ;
 int FUNC_2 (TYPE_2__*,int *) ;

void
FUNC_3(RDPCLIENT * VAR_0, uint16 VAR_1, HCURSOR VAR_2)
{
 HCURSOR VAR_3;

 if (VAR_1 < FUNC_0(VAR_0->cache.cursorcache))
 {
  VAR_3 = VAR_0->cache.cursorcache[VAR_1];
  if (VAR_3 != ((void*)0))
   FUNC_2(VAR_0, VAR_3);

  VAR_0->cache.cursorcache[VAR_1] = VAR_2;
 }
 else
 {
  FUNC_1("put cursor %d\n", VAR_1);
 }
}
