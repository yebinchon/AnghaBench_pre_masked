
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int adns_initflags ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__*,int,int ) ;
 int FUNC_1 (scalar_t__*,int,int ,scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_16 ;
 int FUNC_3 (char*,int) ;

void FUNC_4(void) {
  adns_initflags VAR_17;
  int VAR_18;

  if (VAR_6) return;





  VAR_17= VAR_3|VAR_5|VAR_15;
  if (!VAR_13) VAR_17 |= VAR_4;

  if (VAR_7) {
    VAR_18= FUNC_1(&VAR_6, VAR_17, VAR_16, VAR_7);
  } else {
    VAR_18= FUNC_0(&VAR_6, VAR_17, 0);
  }
  if (VAR_18) FUNC_3("adns_init",VAR_18);

  if (VAR_14 == VAR_10)
    VAR_14= VAR_12 ? VAR_9 : VAR_11;
}
