
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; scalar_t__ flags; } ;
union iwreq_data {TYPE_1__ data; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int updated; } ;
struct iw_statistics {TYPE_2__ qual; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iw_statistics* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,struct iw_statistics*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device * VAR_2,
      struct iw_request_info * VAR_3,
      union iwreq_data * VAR_4,
      char * VAR_5)
{

 struct iw_statistics *VAR_6;

 VAR_6 = FUNC_0(VAR_2);
 if (VAR_6) {

  FUNC_1(VAR_5, VAR_6, sizeof(struct iw_statistics));
  VAR_4->data.length = sizeof(struct iw_statistics);


  if (VAR_4->data.flags != 0)
   VAR_6->qual.updated &= ~VAR_1;
  return 0;
 } else
  return -VAR_0;
}
