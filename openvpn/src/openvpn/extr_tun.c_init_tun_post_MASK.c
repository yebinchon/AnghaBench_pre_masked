
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tuntap_options {int dummy; } ;
struct TYPE_5__ {int hEvent; } ;
struct TYPE_6__ {TYPE_2__ overlapped; } ;
struct TYPE_4__ {int write; int read; } ;
struct tuntap {int adapter_index; TYPE_3__ writes; TYPE_1__ rw_handle; TYPE_3__ reads; struct tuntap_options options; } ;
struct frame {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,struct frame const*,int ,int) ;

void
FUNC_1(struct tuntap *VAR_3,
              const struct frame *VAR_4,
              const struct tuntap_options *VAR_5)
{
    VAR_3->options = *VAR_5;







}
