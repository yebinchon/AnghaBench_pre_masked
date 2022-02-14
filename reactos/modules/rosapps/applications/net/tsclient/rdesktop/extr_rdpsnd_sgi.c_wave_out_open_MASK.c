
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ll; } ;
struct TYPE_5__ {int ll; } ;
struct TYPE_7__ {TYPE_2__ max; TYPE_1__ min; } ;
typedef int BOOL ;
typedef scalar_t__ ALport ;
typedef TYPE_3__ ALparamInfo ;
typedef scalar_t__ ALconfig ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_3__*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,char*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int ,char*,...) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 () ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;

BOOL
FUNC_7(void)
{
 ALparamInfo VAR_12;





 if (FUNC_2(VAR_0, VAR_1, &VAR_12) < 0)
 {
  FUNC_5(VAR_10, "wave_out_open: alGetParamInfo failed: %s\n",
   FUNC_1(FUNC_6()));
 }
 VAR_6 = FUNC_0(VAR_12.min.ll);
 VAR_5 = FUNC_0(VAR_12.max.ll);
 VAR_11 = (VAR_5 - VAR_6);





 VAR_9 = VAR_8 = 0;

 VAR_4 = FUNC_3();
 if (VAR_4 == (ALconfig) 0)
 {
  FUNC_5(VAR_10, "wave_out_open: alNewConfig failed: %s\n",
   FUNC_1(FUNC_6()));
  return VAR_2;
 }

 VAR_7 = FUNC_4("rdpsnd", "w", 0);
 if (VAR_7 == (ALport) 0)
 {
  FUNC_5(VAR_10, "wave_out_open: alOpenPort failed: %s\n",
   FUNC_1(FUNC_6()));
  return VAR_2;
 }




 return VAR_3;
}
