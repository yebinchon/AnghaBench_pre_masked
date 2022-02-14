
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iw_request_info {int dummy; } ;
struct iw_event {int len; char u; } ;


 int VAR_0 ;
 int FUNC_0 (struct iw_request_info*,int) ;
 int FUNC_1 (struct iw_request_info*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;

char *FUNC_4(struct iw_request_info *VAR_1, char *VAR_2,
      char *VAR_3, struct iw_event *VAR_4, int VAR_5)
{
 int VAR_6 = FUNC_1(VAR_1);

 VAR_5 = FUNC_0(VAR_1, VAR_5);


 if (FUNC_2((VAR_2 + VAR_5) < VAR_3)) {
  VAR_4->len = VAR_5;

  FUNC_3(VAR_2, (char *) VAR_4, VAR_0);
  FUNC_3(VAR_2 + VAR_6, &VAR_4->u,
         VAR_5 - VAR_6);
  VAR_2 += VAR_5;
 }

 return VAR_2;
}
