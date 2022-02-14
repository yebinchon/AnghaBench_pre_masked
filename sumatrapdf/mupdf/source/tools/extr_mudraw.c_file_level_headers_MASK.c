
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; } ;
typedef TYPE_1__ fz_pclm_options ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,char*,...) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void
FUNC_7(fz_context *VAR_11)
{
 if (VAR_10 == VAR_4 || VAR_10 == VAR_5)
  FUNC_4(VAR_11, VAR_9, "<?xml version=\"1.0\"?>\n");

 if (VAR_10 == VAR_0)
  FUNC_2(VAR_11, VAR_9);
 if (VAR_10 == VAR_6)
  FUNC_3(VAR_11, VAR_9);

 if (VAR_10 == VAR_4 || VAR_10 == VAR_5)
  FUNC_4(VAR_11, VAR_9, "<document name=\"%s\">\n", VAR_8);

 if (VAR_10 == VAR_2)
  FUNC_5(VAR_11, VAR_9);

 if (VAR_10 == VAR_3)
  FUNC_6(VAR_11, VAR_9);

 if (VAR_10 == VAR_1)
 {
  fz_pclm_options VAR_12 = { 0 };
  FUNC_1(VAR_11, &VAR_12, "compression=flate");
  VAR_7 = FUNC_0(VAR_11, VAR_9, &VAR_12);
 }
}
