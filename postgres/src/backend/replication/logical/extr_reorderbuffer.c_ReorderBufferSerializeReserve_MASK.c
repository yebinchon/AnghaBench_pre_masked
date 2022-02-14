
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ outbufsize; int outbuf; int context; } ;
typedef scalar_t__ Size ;
typedef TYPE_1__ ReorderBuffer ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(ReorderBuffer *VAR_0, Size VAR_1)
{
 if (!VAR_0->outbufsize)
 {
  VAR_0->outbuf = FUNC_0(VAR_0->context, VAR_1);
  VAR_0->outbufsize = VAR_1;
 }
 else if (VAR_0->outbufsize < VAR_1)
 {
  VAR_0->outbuf = FUNC_1(VAR_0->outbuf, VAR_1);
  VAR_0->outbufsize = VAR_1;
 }
}
