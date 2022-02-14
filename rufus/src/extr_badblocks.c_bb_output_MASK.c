
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long errcode_t ;
typedef enum error_types { ____Placeholder_error_types } error_types ;
typedef scalar_t__ blk64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,unsigned long,char*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (char*,int ,long) ;

__attribute__((used)) static int FUNC_6 (blk64_t VAR_11, enum error_types VAR_12)
{
 errcode_t VAR_13;

 if (FUNC_2(VAR_4, VAR_11))
  return 0;

 FUNC_5("%s%lu\n", VAR_5, (unsigned long)VAR_11);
 FUNC_4(VAR_6, "Block %lu: %s error\n", (unsigned long)VAR_11, (VAR_12==VAR_1)?"read":
  ((VAR_12 == VAR_2)?"write":"corruption"));
 FUNC_3(VAR_6);

 VAR_13 = FUNC_0(VAR_4, VAR_11);
 if (VAR_13) {
  FUNC_5("%sError %d adding to in-memory bad block list", VAR_5, VAR_13);
  return 0;
 }





 if (VAR_3 && VAR_11 < VAR_7)
  FUNC_1 (VAR_3, &VAR_7);

 if (VAR_12 == VAR_1) {
   VAR_9++;
 } else if (VAR_12 == VAR_2) {
   VAR_10++;
 } else if (VAR_12 == VAR_0) {
   VAR_8++;
 }
 return 1;
}
