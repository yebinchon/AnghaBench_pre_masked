
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * data; } ;
struct TYPE_4__ {int * tmpcontext; TYPE_1__ buf; int * attrinfo; int * myinfo; } ;
typedef int DestReceiver ;
typedef TYPE_2__ DR_printtup ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(DestReceiver *VAR_0)
{
 DR_printtup *VAR_1 = (DR_printtup *) VAR_0;

 if (VAR_1->myinfo)
  FUNC_1(VAR_1->myinfo);
 VAR_1->myinfo = ((void*)0);

 VAR_1->attrinfo = ((void*)0);

 if (VAR_1->buf.data)
  FUNC_1(VAR_1->buf.data);
 VAR_1->buf.data = ((void*)0);

 if (VAR_1->tmpcontext)
  FUNC_0(VAR_1->tmpcontext);
 VAR_1->tmpcontext = ((void*)0);
}
