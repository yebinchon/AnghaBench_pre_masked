
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tjhandle ;
struct TYPE_4__ {int setjmp_buffer; } ;
struct TYPE_5__ {int init; TYPE_1__ jerr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_2__* VAR_4 ;

int FUNC_5(tjhandle VAR_5)
{
 FUNC_1(VAR_5);

 if(FUNC_4(VAR_4->jerr.setjmp_buffer)) return -1;
 if(VAR_4->init&VAR_0) FUNC_2(VAR_2);
 if(VAR_4->init&VAR_1) FUNC_3(VAR_3);
 FUNC_0(VAR_4);
 return 0;
}
