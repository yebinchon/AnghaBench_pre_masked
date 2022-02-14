
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fd; struct TYPE_4__* prev; scalar_t__ line_num; } ;
typedef TYPE_1__ BufferedFile ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;

void FUNC_2(void)
{
 BufferedFile *VAR_2 = VAR_0;
 if (VAR_2->fd > 0) {
  FUNC_0 (VAR_2->fd);
  VAR_1 += VAR_2->line_num;
 }
 VAR_0 = VAR_2->prev;
 FUNC_1 (VAR_2);
}
