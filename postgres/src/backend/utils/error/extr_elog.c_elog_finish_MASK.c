
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* message_id; int domain; scalar_t__ funcname; int backtrace; int assoc_context; int lineno; int filename; int saved_errno; } ;
typedef int MemoryContext ;
typedef TYPE_1__ ErrorData ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_4 (int,int ,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (TYPE_1__*,int) ;

void
FUNC_7(int VAR_5, const char *VAR_6,...)
{
 ErrorData *VAR_7 = &VAR_1[VAR_2];
 MemoryContext VAR_8;

 FUNC_0();




 VAR_2--;
 VAR_0 = VAR_7->saved_errno;
 if (!FUNC_4(VAR_5, VAR_7->filename, VAR_7->lineno, VAR_7->funcname, ((void*)0)))
  return;




 VAR_4++;
 VAR_8 = FUNC_2(VAR_7->assoc_context);

 if (!VAR_7->backtrace &&
  VAR_7->funcname &&
  FUNC_5(VAR_7->funcname))
  FUNC_6(VAR_7, 2);

 VAR_7->message_id = VAR_6;
 FUNC_1(VAR_7->domain, VAR_3, 0, 0);

 FUNC_2(VAR_8);
 VAR_4--;




 FUNC_3(0);
}
