
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int attlen; scalar_t__ attbyval; } ;
typedef TYPE_1__ SpGistTypeDesc ;
typedef int Datum ;


 int * FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (void*,int *,unsigned int) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, SpGistTypeDesc *VAR_1, Datum VAR_2)
{
 unsigned int VAR_3;

 if (VAR_1->attbyval)
 {
  FUNC_2(VAR_0, &VAR_2, sizeof(Datum));
 }
 else
 {
  VAR_3 = (VAR_1->attlen > 0) ? VAR_1->attlen : FUNC_1(VAR_2);
  FUNC_2(VAR_0, FUNC_0(VAR_2), VAR_3);
 }
}
