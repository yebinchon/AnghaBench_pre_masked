
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iwreq_data {int dummy; } iwreq_data ;
struct net_device {int dummy; } ;
struct iw_thrspy {int low; } ;
struct iw_spy_data {int spy_thr_under; int spy_thr_low; } ;
struct iw_request_info {int dummy; } ;
struct iw_quality {int dummy; } ;


 int VAR_0 ;
 struct iw_spy_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ,char,int) ;

int FUNC_3(struct net_device * VAR_1,
     struct iw_request_info *VAR_2,
     union iwreq_data * VAR_3,
     char * VAR_4)
{
 struct iw_spy_data * VAR_5 = FUNC_0(VAR_1);
 struct iw_thrspy * VAR_6 = (struct iw_thrspy *) VAR_4;


 if (!VAR_5)
  return -VAR_0;


 FUNC_1(&(VAR_5->spy_thr_low), &(VAR_6->low),
        2 * sizeof(struct iw_quality));


 FUNC_2(VAR_5->spy_thr_under, '\0', sizeof(VAR_5->spy_thr_under));

 return 0;
}
