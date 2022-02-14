
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ingest {int url; int name; } ;
struct TYPE_3__ {size_t num; struct ingest* array; } ;


 int FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (TYPE_1__) ;

__attribute__((used)) static void FUNC_2(void)
{
 for (size_t VAR_1 = 0; VAR_1 < VAR_0.num; VAR_1++) {
  struct ingest *VAR_2 = VAR_0.array + VAR_1;
  FUNC_0(VAR_2->name);
  FUNC_0(VAR_2->url);
 }

 FUNC_1(VAR_0);
}
