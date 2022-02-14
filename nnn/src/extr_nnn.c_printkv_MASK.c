
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uchar ;
struct TYPE_3__ {char* val; scalar_t__ key; } ;
typedef TYPE_1__ kv ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char,char*) ;

__attribute__((used)) static void FUNC_1(kv *VAR_0, FILE *VAR_1, uchar VAR_2)
{
 uchar VAR_3 = 0;

 for (; VAR_3 < VAR_2 && VAR_0[VAR_3].key; ++VAR_3)
  FUNC_0(VAR_1, " %c: %s\n", (char)VAR_0[VAR_3].key, VAR_0[VAR_3].val);
}
