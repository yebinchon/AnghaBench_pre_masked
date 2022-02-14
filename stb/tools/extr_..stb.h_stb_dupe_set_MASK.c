
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void*** dupes; int * hash_table; } ;
typedef TYPE_1__ stb_dupe ;


 int FUNC_0 (int ) ;

void **FUNC_1(stb_dupe *VAR_0, int VAR_1)
{
   FUNC_0(VAR_0->hash_table == ((void*)0));
   return VAR_0->dupes[VAR_1];
}
