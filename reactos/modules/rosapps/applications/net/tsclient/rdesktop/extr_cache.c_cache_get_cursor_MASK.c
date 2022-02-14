
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint16 ;
struct TYPE_4__ {int ** cursorcache; } ;
struct TYPE_5__ {TYPE_1__ cache; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef int * HCURSOR ;


 size_t FUNC_0 (int **) ;
 int FUNC_1 (char*,size_t) ;

HCURSOR
FUNC_2(RDPCLIENT * VAR_0, uint16 VAR_1)
{
 HCURSOR VAR_2;

 if (VAR_1 < FUNC_0(VAR_0->cache.cursorcache))
 {
  VAR_2 = VAR_0->cache.cursorcache[VAR_1];
  if (VAR_2 != ((void*)0))
   return VAR_2;
 }

 FUNC_1("get cursor %d\n", VAR_1);
 return ((void*)0);
}
