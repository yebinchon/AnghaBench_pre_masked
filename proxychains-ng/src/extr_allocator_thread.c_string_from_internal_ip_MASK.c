
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int ip_type4 ;
struct TYPE_4__ {size_t counter; TYPE_1__** list; } ;
struct TYPE_3__ {char* string; } ;


 int FUNC_0 () ;
 size_t FUNC_1 (int ) ;
 TYPE_2__* VAR_0 ;

char *FUNC_2(ip_type4 VAR_1) {
 FUNC_0();
 char *VAR_2 = ((void*)0);
 uint32_t VAR_3 = FUNC_1(VAR_1);
 if(VAR_3 < VAR_0->counter)
  VAR_2 = VAR_0->list[VAR_3]->string;
 return VAR_2;
}
