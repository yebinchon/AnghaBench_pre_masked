
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iw_request_info {int dummy; } ;
struct TYPE_3__ {int length; } ;
struct TYPE_4__ {TYPE_1__ data; } ;
struct iw_event {int len; TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iw_request_info*) ;
 int FUNC_1 (struct iw_request_info*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;

char *FUNC_4(struct iw_request_info *VAR_3, char *VAR_4,
      char *VAR_5, struct iw_event *VAR_6, char *VAR_7)
{
 int VAR_8 = FUNC_1(VAR_3) + VAR_6->u.data.length;
 int VAR_9 = FUNC_1(VAR_3);
 int VAR_10 = FUNC_0(VAR_3);


 if (FUNC_2((VAR_4 + VAR_8) < VAR_5)) {
  VAR_6->len = VAR_8;
  FUNC_3(VAR_4, (char *) VAR_6, VAR_0);
  FUNC_3(VAR_4 + VAR_10,
         ((char *) &VAR_6->u) + VAR_1,
         VAR_2 - VAR_0);
  if (VAR_6->u.data.length && VAR_7)
   FUNC_3(VAR_4 + VAR_9, VAR_7, VAR_6->u.data.length);
  VAR_4 += VAR_8;
 }

 return VAR_4;
}
