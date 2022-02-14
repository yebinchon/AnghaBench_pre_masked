
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {struct iw_handler_def* wireless_handlers; TYPE_2__* ieee80211_ptr; } ;
struct iw_handler_def {unsigned int num_standard; unsigned int num_private; int ** private; int ** standard; } ;
typedef int * iw_handler ;
struct TYPE_4__ {TYPE_1__* wiphy; } ;
struct TYPE_3__ {struct iw_handler_def* wext; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;

__attribute__((used)) static iw_handler FUNC_1(struct net_device *VAR_1, unsigned int VAR_2)
{

 unsigned int VAR_3;
 const struct iw_handler_def *VAR_4 = ((void*)0);
 if (!VAR_4)
  return ((void*)0);


 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 < VAR_4->num_standard)
  return VAR_4->standard[VAR_3];
 return ((void*)0);
}
