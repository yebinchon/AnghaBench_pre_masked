
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* message_id; int domain; int assoc_context; } ;
typedef int MemoryContext ;
typedef TYPE_1__ ErrorData ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_3(const char *VAR_4,...)
{
 ErrorData *VAR_5 = &VAR_0[VAR_1];
 MemoryContext VAR_6;

 VAR_3++;
 FUNC_0();
 VAR_6 = FUNC_2(VAR_5->assoc_context);

 VAR_5->message_id = VAR_4;
 FUNC_1(VAR_5->domain, VAR_2, 0, 0);

 FUNC_2(VAR_6);
 VAR_3--;
 return 0;
}
