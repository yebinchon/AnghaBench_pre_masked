
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cache; int status; int (* flush_function ) (int ) ;int data; int (* output_function ) (int,int ) ;TYPE_1__* to; } ;
typedef TYPE_2__ mbfl_convert_filter ;
struct TYPE_4__ {scalar_t__ no_encoding; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int,int) ;
 int* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int,int ) ;

int
FUNC_12(mbfl_convert_filter *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_5 = VAR_4->cache;
 VAR_4->cache = 0;

 if (VAR_4->status == 1 && VAR_5 >= 0 && VAR_5 <= VAR_1) {
  VAR_8 = VAR_0[VAR_5];

  if (VAR_4->to->no_encoding == VAR_3) {
   VAR_6 = (VAR_8 >> 8) & 0xff;
   VAR_7 = VAR_8 & 0xff;
   FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9);
  } else if (VAR_4->to->no_encoding == VAR_2) {
   VAR_9 = (VAR_8 & 0xff) | 0x80;
   VAR_8 = ((VAR_8 >> 8) & 0xff) | 0x80;
  } else {
   VAR_9 = VAR_8 & 0x7f;
   VAR_8 = (VAR_8 >> 8) & 0x7f;
   if ((VAR_4->status & 0xff00) != 0x200) {
    FUNC_0((*VAR_4->output_function)(0x1b, VAR_4->data));
    FUNC_0((*VAR_4->output_function)(0x24, VAR_4->data));
    FUNC_0((*VAR_4->output_function)(0x28, VAR_4->data));
    FUNC_0((*VAR_4->output_function)(0x51, VAR_4->data));
   }
   VAR_4->status = 0x200;
  }

  FUNC_0((*VAR_4->output_function)(VAR_8, VAR_4->data));
  FUNC_0((*VAR_4->output_function)(VAR_9, VAR_4->data));
 }


 if ((VAR_4->status & 0xff00) != 0) {
  FUNC_0((*VAR_4->output_function)(0x1b, VAR_4->data));
  FUNC_0((*VAR_4->output_function)(0x28, VAR_4->data));
  FUNC_0((*VAR_4->output_function)(0x42, VAR_4->data));
 }

 VAR_4->status = 0;

 if (VAR_4->flush_function != ((void*)0)) {
  return (*VAR_4->flush_function)(VAR_4->data);
 }

 return 0;
}
