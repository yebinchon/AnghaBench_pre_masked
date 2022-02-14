
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int domain; int assoc_context; } ;
typedef int MemoryContext ;
typedef TYPE_1__ ErrorData ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;

int
FUNC_3(const char *VAR_4,...)
{
 ErrorData *VAR_5 = &VAR_1[VAR_2];
 MemoryContext VAR_6;

 VAR_3++;
 FUNC_0();
 VAR_6 = FUNC_2(VAR_5->assoc_context);

 FUNC_1(VAR_5->domain, VAR_0, 0, 0);

 FUNC_2(VAR_6);
 VAR_3--;
 return 0;
}
