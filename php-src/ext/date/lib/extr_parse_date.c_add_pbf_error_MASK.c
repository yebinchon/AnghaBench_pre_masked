
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int timelib_error_message ;
struct TYPE_8__ {int error_code; int position; char character; int message; } ;
struct TYPE_7__ {TYPE_1__* errors; } ;
struct TYPE_6__ {int error_count; TYPE_3__* error_messages; } ;
typedef TYPE_2__ Scanner ;


 TYPE_3__* FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(Scanner *VAR_0, int VAR_1, char *VAR_2, char *VAR_3, char *VAR_4)
{
 VAR_0->errors->error_count++;
 VAR_0->errors->error_messages = FUNC_0(VAR_0->errors->error_messages, VAR_0->errors->error_count * sizeof(timelib_error_message));
 VAR_0->errors->error_messages[VAR_0->errors->error_count - 1].error_code = VAR_1;
 VAR_0->errors->error_messages[VAR_0->errors->error_count - 1].position = VAR_4 - VAR_3;
 VAR_0->errors->error_messages[VAR_0->errors->error_count - 1].character = *VAR_4;
 VAR_0->errors->error_messages[VAR_0->errors->error_count - 1].message = FUNC_1(VAR_2);
}
