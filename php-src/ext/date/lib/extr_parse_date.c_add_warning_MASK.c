
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int timelib_error_message ;
struct TYPE_8__ {int error_code; int message; int character; int * position; } ;
struct TYPE_7__ {int str; TYPE_1__* errors; int * tok; } ;
struct TYPE_6__ {int warning_count; TYPE_3__* warning_messages; } ;
typedef TYPE_2__ Scanner ;


 TYPE_3__* FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(Scanner *VAR_0, int VAR_1, char *VAR_2)
{
 VAR_0->errors->warning_count++;
 VAR_0->errors->warning_messages = FUNC_0(VAR_0->errors->warning_messages, VAR_0->errors->warning_count * sizeof(timelib_error_message));
 VAR_0->errors->warning_messages[VAR_0->errors->warning_count - 1].error_code = VAR_1;
 VAR_0->errors->warning_messages[VAR_0->errors->warning_count - 1].position = VAR_0->tok ? VAR_0->tok - VAR_0->str : 0;
 VAR_0->errors->warning_messages[VAR_0->errors->warning_count - 1].character = VAR_0->tok ? *VAR_0->tok : 0;
 VAR_0->errors->warning_messages[VAR_0->errors->warning_count - 1].message = FUNC_1(VAR_2);
}
