
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_3__ {int statbar_ctx_id; int statbar; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 char* FUNC_6 (char*,char) ;
 scalar_t__ FUNC_7 (char**,char const*,int ) ;
 int FUNC_8 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_9(const char *VAR_2, va_list VAR_3)
{
 char *VAR_4, *VAR_5;

 if (!FUNC_5(VAR_0) ||
     FUNC_7(&VAR_4, VAR_2, VAR_3) < 0) {
  FUNC_1(VAR_1, "Warning:\n");
  FUNC_8(VAR_1, VAR_2, VAR_3);
  FUNC_1(VAR_1, "\n");
  return -1;
 }

 FUNC_3(FUNC_0(VAR_0->statbar),
     VAR_0->statbar_ctx_id);


 VAR_5 = FUNC_6(VAR_4, '\n');
 if (VAR_5)
  *VAR_5 = '\0';

 FUNC_4(FUNC_0(VAR_0->statbar),
      VAR_0->statbar_ctx_id, VAR_4);

 FUNC_2(VAR_4);
 return 0;
}
