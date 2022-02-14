
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t avail; void* firstfree; int * buildCxt; } ;
typedef TYPE_1__ IspellDict ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_1 (size_t) ;
 void* FUNC_2 (size_t) ;

__attribute__((used)) static void *
FUNC_3(IspellDict *VAR_2, size_t VAR_3)
{
 void *VAR_4;


 FUNC_0(VAR_2->buildCxt != ((void*)0));


 if (VAR_3 > VAR_1)
  return FUNC_2(VAR_3);


 VAR_3 = FUNC_1(VAR_3);


 if (VAR_3 > VAR_2->avail)
 {
  VAR_2->firstfree = FUNC_2(VAR_0);
  VAR_2->avail = VAR_0;
 }

 VAR_4 = (void *) VAR_2->firstfree;
 VAR_2->firstfree += VAR_3;
 VAR_2->avail -= VAR_3;

 return VAR_4;
}
