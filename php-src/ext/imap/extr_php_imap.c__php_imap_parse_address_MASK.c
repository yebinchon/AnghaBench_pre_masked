
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_4__ {scalar_t__ host; scalar_t__ mailbox; scalar_t__ adl; scalar_t__ personal; struct TYPE_4__* next; } ;
typedef TYPE_1__ ADDRESS ;


 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static zend_string* FUNC_4 (ADDRESS *VAR_0, zval *VAR_1)
{
 zend_string *VAR_2;
 ADDRESS *VAR_3;
 zval VAR_4;

 VAR_3 = VAR_0;

 VAR_2 = FUNC_0(VAR_3);

 VAR_3 = VAR_0;
 do {
  FUNC_3(&VAR_4);
  if (VAR_3->personal) FUNC_2(&VAR_4, "personal", VAR_3->personal);
  if (VAR_3->adl) FUNC_2(&VAR_4, "adl", VAR_3->adl);
  if (VAR_3->mailbox) FUNC_2(&VAR_4, "mailbox", VAR_3->mailbox);
  if (VAR_3->host) FUNC_2(&VAR_4, "host", VAR_3->host);
  FUNC_1(VAR_1, &VAR_4);
 } while ((VAR_3 = VAR_3->next));
 return VAR_2;
}
