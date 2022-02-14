
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nr_firstnet; scalar_t__ nr_lastnet; } ;
struct TYPE_3__ {int s_node; scalar_t__ s_net; } ;
struct atalk_iface {int status; TYPE_2__ nets; TYPE_1__ address; struct atalk_iface* next; } ;
typedef scalar_t__ __be16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct atalk_iface* VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct atalk_iface *FUNC_3(__be16 VAR_6, int VAR_7)
{
 struct atalk_iface *VAR_8;

 FUNC_1(&VAR_5);
 for (VAR_8 = VAR_4; VAR_8; VAR_8 = VAR_8->next) {
  if ((VAR_7 == VAR_2 ||
       VAR_7 == VAR_1 ||
       VAR_8->address.s_node == VAR_7) &&
      VAR_8->address.s_net == VAR_6 &&
      !(VAR_8->status & VAR_3))
   break;


  if (VAR_7 == VAR_1 && VAR_6 != VAR_0 &&
      FUNC_0(VAR_8->nets.nr_firstnet) <= FUNC_0(VAR_6) &&
      FUNC_0(VAR_6) <= FUNC_0(VAR_8->nets.nr_lastnet))
   break;
 }
 FUNC_2(&VAR_5);
 return VAR_8;
}
