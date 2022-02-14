
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* data; } ;
typedef TYPE_1__ MYSQLND_READ_BUFFER ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(MYSQLND_READ_BUFFER ** VAR_1)
{
 FUNC_0("mysqlnd_read_buffer_free");
 if (*VAR_1) {
  FUNC_1((*VAR_1)->data);
  FUNC_1(*VAR_1);
  *VAR_1 = ((void*)0);
 }
 VAR_0;
}
