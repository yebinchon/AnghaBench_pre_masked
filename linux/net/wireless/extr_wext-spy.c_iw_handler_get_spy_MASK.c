
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; } ;
union iwreq_data {TYPE_1__ data; } ;
struct sockaddr {char* sa_data; int sa_family; } ;
struct net_device {int dummy; } ;
struct iw_spy_data {int spy_number; TYPE_2__* spy_stat; TYPE_2__** spy_address; } ;
struct iw_request_info {int dummy; } ;
struct iw_quality {int dummy; } ;
struct TYPE_4__ {int updated; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct iw_spy_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,TYPE_2__*,int) ;

int FUNC_2(struct net_device * VAR_4,
         struct iw_request_info * VAR_5,
         union iwreq_data * VAR_6,
         char * VAR_7)
{
 struct iw_spy_data * VAR_8 = FUNC_0(VAR_4);
 struct sockaddr * VAR_9 = (struct sockaddr *) VAR_7;
 int VAR_10;


 if (!VAR_8)
  return -VAR_1;

 VAR_6->data.length = VAR_8->spy_number;


 for (VAR_10 = 0; VAR_10 < VAR_8->spy_number; VAR_10++) {
  FUNC_1(VAR_9[VAR_10].sa_data, VAR_8->spy_address[VAR_10], VAR_2);
  VAR_9[VAR_10].sa_family = VAR_0;
 }

 if (VAR_8->spy_number > 0)
  FUNC_1(VAR_7 + (sizeof(struct sockaddr) *VAR_8->spy_number),
         VAR_8->spy_stat,
         sizeof(struct iw_quality) * VAR_8->spy_number);

 for (VAR_10 = 0; VAR_10 < VAR_8->spy_number; VAR_10++)
  VAR_8->spy_stat[VAR_10].updated &= ~VAR_3;
 return 0;
}
