
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ key_len; int flags; int key; } ;
typedef TYPE_1__ wsec_pmk_t ;
typedef int wlc_param ;
typedef int pmk ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int ,int ,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_3(wlc_param VAR_6, void *VAR_7, void *VAR_8)
{
 int VAR_9 = -1;
 char *VAR_10 = (char *) VAR_8;
 wsec_pmk_t VAR_11;



 if ((VAR_6 & VAR_0) == VAR_1) {
  FUNC_1(VAR_11.key, VAR_10, VAR_3);
  VAR_11.key_len = FUNC_0(VAR_10);

  if (VAR_11.key_len > VAR_3)
   VAR_11.key_len = VAR_3;

  VAR_11.flags = VAR_4;

  VAR_9 = FUNC_2(VAR_5, VAR_2, &VAR_11, sizeof(VAR_11));
 }

 return VAR_9;
}
