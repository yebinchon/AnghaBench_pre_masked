
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {TYPE_1__* wireless_handlers; } ;
struct iw_priv_args {unsigned int cmd; char* name; int set_args; int get_args; } ;
typedef int __u32 ;
struct TYPE_2__ {int num_private_args; struct iw_priv_args* private_args; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, unsigned int VAR_3,
       const struct iw_priv_args **VAR_4)
{
 const struct iw_priv_args *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = ((void*)0);
 for (VAR_6 = 0; VAR_6 < VAR_2->wireless_handlers->num_private_args; VAR_6++) {
  if (VAR_3 == VAR_2->wireless_handlers->private_args[VAR_6].cmd) {
   VAR_5 = &VAR_2->wireless_handlers->private_args[VAR_6];
   break;
  }
 }

 VAR_7 = 0;
 if (VAR_5) {
  if (FUNC_0(VAR_3)) {
   int VAR_8 = 0;

   if (VAR_5->name[0] == '\0')

    VAR_8 = sizeof(__u32);


   VAR_7 = FUNC_1(VAR_5->set_args);


   if ((VAR_5->set_args & VAR_1) &&
      ((VAR_7 + VAR_8) <= VAR_0))
    VAR_7 = 0;
  } else {

   VAR_7 = FUNC_1(VAR_5->get_args);


   if ((VAR_5->get_args & VAR_1) &&
      (VAR_7 <= VAR_0))
    VAR_7 = 0;
  }
 }
 *VAR_4 = VAR_5;
 return VAR_7;
}
