
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hists_evsel {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ,int ) ;
 int VAR_2 ;

int FUNC_2(void)
{
 int VAR_3 = FUNC_1(sizeof(struct hists_evsel),
         VAR_1,
         VAR_0);
 if (VAR_3)
  FUNC_0("FATAL ERROR: Couldn't setup hists class\n", VAR_2);

 return VAR_3;
}
