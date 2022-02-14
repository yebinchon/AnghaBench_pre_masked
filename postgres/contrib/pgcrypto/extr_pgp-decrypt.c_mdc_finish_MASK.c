
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
typedef int tmpbuf ;
struct TYPE_3__ {int in_mdc_pkt; int mdc_checked; int mdc_ctx; scalar_t__ use_mdcbuf_filter; } ;
typedef int PullFilter ;
typedef TYPE_1__ PGP_Context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int,int **,int *) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_5(PGP_Context *VAR_2, PullFilter *VAR_3, int VAR_4)
{
 int VAR_5;
 uint8 VAR_6[20];
 uint8 VAR_7[20];
 uint8 *VAR_8;


 if (VAR_2->use_mdcbuf_filter)
  return VAR_0;


 if (VAR_4 != 20)
  return VAR_1;


 VAR_2->in_mdc_pkt = 1;


 VAR_5 = FUNC_1(VAR_3, VAR_4, &VAR_8, VAR_7);
 if (VAR_5 < 0)
  return VAR_5;
 if (VAR_5 == 0)
 {
  FUNC_2("no mdc");
  return VAR_1;
 }


 if (VAR_5 != 20)
 {
  FUNC_2("mdc_finish: read failed, res=%d", VAR_5);
  return VAR_1;
 }




 FUNC_3(VAR_2->mdc_ctx, VAR_6);
 VAR_5 = FUNC_0(VAR_6, VAR_8, 20);
 FUNC_4(VAR_6, 0, 20);
 FUNC_4(VAR_7, 0, sizeof(VAR_7));
 if (VAR_5 != 0)
 {
  FUNC_2("mdc_finish: mdc failed");
  return VAR_1;
 }
 VAR_2->mdc_checked = 1;
 return 0;
}
