
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* message_id; char* message; scalar_t__ domain; int saved_errno; } ;
typedef int MemoryContext ;
typedef TYPE_1__ ErrorData ;


 int FUNC_0 (scalar_t__,int ,int,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

char *
FUNC_4(const char *VAR_4,...)
{
 ErrorData VAR_5;
 ErrorData *VAR_6;
 MemoryContext VAR_7;


 VAR_6 = &VAR_5;
 FUNC_1(VAR_6, 0, sizeof(ErrorData));

 VAR_6->domain = VAR_2 ? VAR_2 : FUNC_3("postgres");

 VAR_6->saved_errno = VAR_3;

 VAR_7 = FUNC_2(VAR_0);

 VAR_6->message_id = VAR_4;
 FUNC_0(VAR_6->domain, VAR_1, 0, 1);

 FUNC_2(VAR_7);

 return VAR_6->message;
}
