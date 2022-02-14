
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ length; } ;
union iwreq_data {TYPE_1__ data; } ;
struct sockaddr {int sa_data; } ;
struct net_device {int dummy; } ;
struct iw_spy_data {int spy_number; int spy_stat; int * spy_address; } ;
struct iw_request_info {int dummy; } ;
struct iw_quality {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iw_spy_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 () ;

int FUNC_4(struct net_device * VAR_3,
         struct iw_request_info * VAR_4,
         union iwreq_data * VAR_5,
         char * VAR_6)
{
 struct iw_spy_data * VAR_7 = FUNC_0(VAR_3);
 struct sockaddr * VAR_8 = (struct sockaddr *) VAR_6;


 if (!VAR_7)
  return -VAR_0;




 VAR_7->spy_number = 0;







 FUNC_3();


 if (VAR_5->data.length > 0) {
  int VAR_9;


  for (VAR_9 = 0; VAR_9 < VAR_5->data.length; VAR_9++)
   FUNC_1(VAR_7->spy_address[VAR_9], VAR_8[VAR_9].sa_data,
          VAR_1);

  FUNC_2(VAR_7->spy_stat, 0,
         sizeof(struct iw_quality) * VAR_2);
 }


 FUNC_3();


 VAR_7->spy_number = VAR_5->data.length;

 return 0;
}
