
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int line; int len; int line_position; int firstline; scalar_t__ L; } ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

void FUNC_4 (bool VAR_1)
{
  while (VAR_0.L && (VAR_1 || FUNC_2 (&VAR_0))) {
    FUNC_0("Handle Input: first=%u, pos=%u, len=%u, actual=%u, line=%s\n", VAR_0.firstline,
              VAR_0.line_position, VAR_0.len, FUNC_3(VAR_0.line), VAR_0.line);
    FUNC_1 (&VAR_0);
    VAR_1 = 0;
  }
}
