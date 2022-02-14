
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int err; } ;
struct TYPE_10__ {int last_addon_message; int first_addon_message; int addon_message_table; int emit_message; int output_message; int error_exit; } ;
struct TYPE_8__ {int setjmp_buffer; TYPE_3__ pub; int emit_message; } ;
struct TYPE_9__ {int init; TYPE_4__ cinfo; TYPE_1__ jerr; } ;
typedef TYPE_2__ tjinstance ;
typedef int * tjhandle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,unsigned char**,unsigned long*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_6 ;

__attribute__((used)) static tjhandle FUNC_5(tjinstance *VAR_7)
{
 static unsigned char VAR_8[1];
  unsigned char *VAR_9 = VAR_8;
  unsigned long VAR_10 = 1;


 VAR_7->cinfo.err=FUNC_3(&VAR_7->jerr.pub);
 VAR_7->jerr.pub.error_exit=VAR_4;
 VAR_7->jerr.pub.output_message=VAR_5;
 VAR_7->jerr.emit_message=VAR_7->jerr.pub.emit_message;
 VAR_7->jerr.pub.emit_message=VAR_3;
  VAR_7->jerr.pub.addon_message_table = VAR_6;
  VAR_7->jerr.pub.first_addon_message = VAR_1;
  VAR_7->jerr.pub.last_addon_message = VAR_2;

  if (FUNC_4(VAR_7->jerr.setjmp_buffer)) {

  if(VAR_7) FUNC_0(VAR_7);
  return ((void*)0);
 }

 FUNC_1(&VAR_7->cinfo);

 FUNC_2(&VAR_7->cinfo, &VAR_9, &VAR_10, 0);

 VAR_7->init|=VAR_0;
 return (tjhandle)VAR_7;
}
