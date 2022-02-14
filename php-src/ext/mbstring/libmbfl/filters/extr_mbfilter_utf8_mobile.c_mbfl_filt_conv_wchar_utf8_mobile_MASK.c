
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int status; scalar_t__ cache; int data; int (* output_function ) (int,int ) ;TYPE_1__* to; } ;
typedef TYPE_2__ mbfl_convert_filter ;
struct TYPE_8__ {scalar_t__ no_encoding; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,int*,int ,int) ;
 scalar_t__ FUNC_2 (int,int*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int,int*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (int,int*,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_5 (int,TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (int,int ) ;

int FUNC_16(int VAR_8, mbfl_convert_filter *VAR_9)
{
 if (VAR_8 >= 0 && VAR_8 < 0x110000) {
  int VAR_10, VAR_11;

  if ((VAR_9->to->no_encoding == VAR_3 &&
    FUNC_2(VAR_8, &VAR_10, VAR_9) > 0 &&
    FUNC_1(VAR_10, &VAR_11, VAR_0, 4) > 0) ||
   (VAR_9->to->no_encoding == VAR_4 &&
    FUNC_3(VAR_8, &VAR_10, VAR_9) > 0 &&
    FUNC_1(VAR_10, &VAR_11, VAR_1, 7) > 0) ||
   (VAR_9->to->no_encoding == VAR_5 &&
    FUNC_3(VAR_8, &VAR_10, VAR_9) > 0 &&
    FUNC_1(VAR_10, &VAR_11, VAR_2, 8) > 0) ||
   (VAR_9->to->no_encoding == VAR_6 &&
    FUNC_4(VAR_8, &VAR_10, VAR_9) > 0 &&
    FUNC_1(VAR_10, &VAR_11, VAR_7, 6) > 0)) {
   VAR_8 = VAR_11;
  }

  if (VAR_9->status == 1 && VAR_9->cache > 0) {
   return VAR_8;
  }

  if (VAR_8 < 0x80) {
   FUNC_0((*VAR_9->output_function)(VAR_8, VAR_9->data));
  } else if (VAR_8 < 0x800) {
   FUNC_0((*VAR_9->output_function)(((VAR_8 >> 6) & 0x1f) | 0xc0, VAR_9->data));
   FUNC_0((*VAR_9->output_function)((VAR_8 & 0x3f) | 0x80, VAR_9->data));
  } else if (VAR_8 < 0x10000) {
   FUNC_0((*VAR_9->output_function)(((VAR_8 >> 12) & 0x0f) | 0xe0, VAR_9->data));
   FUNC_0((*VAR_9->output_function)(((VAR_8 >> 6) & 0x3f) | 0x80, VAR_9->data));
   FUNC_0((*VAR_9->output_function)((VAR_8 & 0x3f) | 0x80, VAR_9->data));
  } else {
   FUNC_0((*VAR_9->output_function)(((VAR_8 >> 18) & 0x07) | 0xf0, VAR_9->data));
   FUNC_0((*VAR_9->output_function)(((VAR_8 >> 12) & 0x3f) | 0x80, VAR_9->data));
   FUNC_0((*VAR_9->output_function)(((VAR_8 >> 6) & 0x3f) | 0x80, VAR_9->data));
   FUNC_0((*VAR_9->output_function)((VAR_8 & 0x3f) | 0x80, VAR_9->data));
  }
 } else {
  FUNC_0(FUNC_5(VAR_8, VAR_9));
 }

 return VAR_8;
}
