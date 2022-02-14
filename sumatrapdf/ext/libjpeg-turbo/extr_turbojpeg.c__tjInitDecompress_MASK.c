
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int err; } ;
struct TYPE_10__ {int output_message; int error_exit; } ;
struct TYPE_8__ {int setjmp_buffer; TYPE_3__ pub; } ;
struct TYPE_9__ {int init; TYPE_4__ dinfo; TYPE_1__ jerr; } ;
typedef TYPE_2__ tjinstance ;
typedef int * tjhandle ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,unsigned char*,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static tjhandle FUNC_5(tjinstance *VAR_3)
{
 unsigned char VAR_4[1];


 VAR_3->dinfo.err=FUNC_3(&VAR_3->jerr.pub);
 VAR_3->jerr.pub.error_exit=VAR_1;
 VAR_3->jerr.pub.output_message=VAR_2;

 if(FUNC_4(VAR_3->jerr.setjmp_buffer))
 {

  if(VAR_3) FUNC_0(VAR_3); return ((void*)0);
 }

 FUNC_1(&VAR_3->dinfo);

 FUNC_2(&VAR_3->dinfo, VAR_4, 1);

 VAR_3->init|=VAR_0;
 return (tjhandle)VAR_3;
}
