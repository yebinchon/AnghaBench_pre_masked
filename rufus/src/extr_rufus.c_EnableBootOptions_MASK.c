
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int is_iso; scalar_t__ is_bootable_img; } ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int) ;
 int VAR_1 ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (TYPE_1__) ;
 int FUNC_8 () ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 TYPE_1__ VAR_14 ;
 scalar_t__ VAR_15 ;

__attribute__((used)) static void FUNC_9(BOOL VAR_16, BOOL VAR_17)
{
 BOOL VAR_18, VAR_19 = VAR_16;


 if (FUNC_0(VAR_11) < 0)
  VAR_19 = VAR_1;

 if ((VAR_10 == VAR_0) && (VAR_13 == ((void*)0)))
  VAR_19 = VAR_1;
 VAR_18 = VAR_19;

 if ((VAR_10 == VAR_0) && (VAR_14.is_bootable_img) && (!VAR_14.is_iso))
  VAR_19 = VAR_1;

 FUNC_4(FUNC_5(VAR_12, VAR_3), VAR_19);
 FUNC_4(FUNC_5(VAR_12, VAR_7), VAR_19);

 if ((VAR_13 != ((void*)0)) && FUNC_6(VAR_14))
  FUNC_8();
 FUNC_4(FUNC_5(VAR_12, VAR_6), (VAR_15 != 0) && VAR_19);
 FUNC_4(FUNC_5(VAR_12, VAR_8), (VAR_15 != 0) && VAR_19);
 FUNC_2(VAR_19, VAR_17);

 FUNC_4(FUNC_5(VAR_12, VAR_4), VAR_19);
 if (VAR_10 == VAR_0) {
  if (FUNC_7(VAR_14))
   VAR_17 = VAR_9;
  else if (VAR_13 == ((void*)0))
   VAR_17 = VAR_1;
 }
 FUNC_3(VAR_19, VAR_17);
 FUNC_1(VAR_19, VAR_17);
 FUNC_4(FUNC_5(VAR_12, VAR_2), VAR_18);
 FUNC_4(FUNC_5(VAR_12, VAR_5), VAR_18);
}
