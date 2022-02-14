
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mode; } ;
typedef TYPE_1__ mbfl_filt_tl_jisx0201_jisx0208_param ;
struct TYPE_5__ {int cache; int (* output_function ) (scalar_t__,int ) ;int (* flush_function ) (int ) ;int data; scalar_t__ status; scalar_t__ opaque; } ;
typedef TYPE_2__ mbfl_convert_filter ;


 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ) ;

int
FUNC_3(mbfl_convert_filter *VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5 = ((mbfl_filt_tl_jisx0201_jisx0208_param *)VAR_2->opaque)->mode;

 VAR_3 = 0;
 if (VAR_2->status) {
  VAR_4 = (VAR_2->cache - 0xff60) & 0x3f;
  if (VAR_5 & 0x100) {
   VAR_3 = (*VAR_2->output_function)(0x3000 + VAR_1[VAR_4], VAR_2->data);
  } else if (VAR_5 & 0x200) {
   VAR_3 = (*VAR_2->output_function)(0x3000 + VAR_0[VAR_4], VAR_2->data);
  }
  VAR_2->status = 0;
 }

 if (VAR_2->flush_function != ((void*)0)) {
  return (*VAR_2->flush_function)(VAR_2->data);
 }

 return VAR_3;
}
