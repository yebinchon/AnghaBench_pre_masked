
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
struct TYPE_6__ {TYPE_2__* time; } ;
typedef TYPE_1__ php_date_obj ;
struct TYPE_7__ {int tz_info; int sse_uptodate; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_5(zval *VAR_1, zval *VAR_2)
{
 php_date_obj *VAR_3;
 php_date_obj *VAR_4;

 FUNC_0(VAR_1, VAR_2);

 VAR_3 = FUNC_1(VAR_1);
 VAR_4 = FUNC_1(VAR_2);

 if (!VAR_3->time || !VAR_4->time) {
  FUNC_2(((void*)0), VAR_0, "Trying to compare an incomplete DateTime or DateTimeImmutable object");
  return 1;
 }
 if (!VAR_3->time->sse_uptodate) {
  FUNC_4(VAR_3->time, VAR_3->time->tz_info);
 }
 if (!VAR_4->time->sse_uptodate) {
  FUNC_4(VAR_4->time, VAR_4->time->tz_info);
 }

 return FUNC_3(VAR_3->time, VAR_4->time);
}
