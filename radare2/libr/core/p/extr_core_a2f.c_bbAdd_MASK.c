
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut64 ;
typedef int Sdb ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int *,char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *,char*,scalar_t__,int ) ;
 int FUNC_4 (int *,int ,int,scalar_t__,int ) ;
 int FUNC_5 (int *,char*,scalar_t__,int ) ;
 int FUNC_6 (int *,char*,scalar_t__,int ) ;
 int FUNC_7 (int *,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_8(Sdb *VAR_1, ut64 VAR_2, ut64 VAR_3, ut64 VAR_4, ut64 VAR_5) {
 ut64 VAR_6 = FUNC_2 (VAR_1, "bbs", VAR_2, VAR_3);
 int VAR_7 = 1;
 if (VAR_6 == VAR_0) {

 } else if (VAR_6 == VAR_2) {

  VAR_7 = 0;
 } else {
  if (VAR_2 > VAR_6) {


   FUNC_7 (VAR_1, FUNC_0(VAR_6), VAR_2, 0);
   FUNC_7 (VAR_1, FUNC_1(VAR_6), VAR_2, 0);
   FUNC_4 (VAR_1, FUNC_1(VAR_6), 0, VAR_2, 0);
   FUNC_4 (VAR_1, FUNC_1(VAR_6), 1, VAR_0, 0);
  } else {

   VAR_3 = VAR_6;
   VAR_4 = VAR_6;
   VAR_5 = VAR_0;
  }
 }
 if (VAR_7) {
  FUNC_3 (VAR_1, "bbs", VAR_2, 0);
  FUNC_7 (VAR_1, FUNC_0(VAR_2), VAR_3, 0);
  FUNC_4 (VAR_1, FUNC_1(VAR_2), 0, VAR_4, 0);
  FUNC_4 (VAR_1, FUNC_1(VAR_2), 1, VAR_5, 0);
  FUNC_6 (VAR_1, "min", VAR_2, 0);
  FUNC_5 (VAR_1, "max", VAR_3, 0);
 }
 return 0;
}
