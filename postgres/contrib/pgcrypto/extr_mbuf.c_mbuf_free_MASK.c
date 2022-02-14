
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* data; struct TYPE_6__* buf_end; scalar_t__ own_data; } ;
typedef TYPE_1__ MBuf ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,TYPE_1__*) ;

int
FUNC_2(MBuf *VAR_0)
{
 if (VAR_0->own_data)
 {
  FUNC_1(VAR_0->data, 0, VAR_0->buf_end - VAR_0->data);
  FUNC_0(VAR_0->data);
 }
 FUNC_0(VAR_0);
 return 0;
}
