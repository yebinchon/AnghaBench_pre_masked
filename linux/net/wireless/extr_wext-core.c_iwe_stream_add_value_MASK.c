
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iw_request_info {int dummy; } ;
struct iw_event {char u; int len; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct iw_request_info*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int) ;

char *FUNC_3(struct iw_request_info *VAR_1, char *VAR_2,
      char *VAR_3, char *VAR_4, struct iw_event *VAR_5,
      int VAR_6)
{
 int VAR_7 = FUNC_0(VAR_1);


 VAR_6 -= VAR_0;


 if (FUNC_1((VAR_3 + VAR_6) < VAR_4)) {

  FUNC_2(VAR_3, &VAR_5->u, VAR_6);
  VAR_3 += VAR_6;

  VAR_5->len = VAR_3 - VAR_2;
  FUNC_2(VAR_2, (char *) VAR_5, VAR_7);
 }

 return VAR_3;
}
