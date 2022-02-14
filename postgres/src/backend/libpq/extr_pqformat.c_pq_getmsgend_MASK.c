
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cursor; scalar_t__ len; } ;
typedef TYPE_1__* StringInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

void
FUNC_3(StringInfo VAR_2)
{
 if (VAR_2->cursor != VAR_2->len)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("invalid message format")));
}
