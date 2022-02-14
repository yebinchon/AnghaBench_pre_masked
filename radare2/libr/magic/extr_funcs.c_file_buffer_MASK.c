
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flags; } ;
typedef TYPE_1__ RMagic ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,void const*,size_t) ;
 int FUNC_1 (TYPE_1__*,void const*,size_t) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,void const*,size_t,int ) ;
 int FUNC_4 (TYPE_1__*,int,char const*,void const*,size_t) ;

int FUNC_5(RMagic *VAR_7, int VAR_8, const char *VAR_9, const void *VAR_10, size_t VAR_11) {
 int VAR_12, VAR_13 = 0;
 if (!VAR_7) {
  return -1;
 }
 VAR_12 = VAR_7->flags & VAR_1;
 if (VAR_11 == 0) {
  if ((!VAR_12 || (VAR_12 & VAR_2)) &&
   FUNC_2 (VAR_7, VAR_12 ? "application/x-empty" : "empty") == -1) {
   return -1;
  }
  return 1;
 } else if (VAR_11 == 1) {
  if ((!VAR_12 || (VAR_12 & VAR_2)) &&
   FUNC_2 (VAR_7, VAR_12 ? "application/octet-stream" : "very short file (no magic)") == -1) {
   return -1;
  }
  return 1;
 }







     if ((VAR_7->flags & VAR_6) != 0 ||
  (VAR_13 = FUNC_1(VAR_7, VAR_10, VAR_11)) == 0) {

  if ((VAR_7->flags & VAR_5) != 0 ||
      (VAR_13 = FUNC_3(VAR_7, VAR_10, VAR_11, VAR_0)) == 0) {

      if ((VAR_7->flags & VAR_3) != 0 ||
   (VAR_13 = FUNC_0(VAR_7, VAR_10, VAR_11)) == 0) {

   if ((!VAR_12 || (VAR_12 & VAR_2))) {

     FUNC_2 (VAR_7, "application/octet-stream");
    return -1;
   }
   VAR_13 = 1;
      }
  }
     }



 return VAR_13;
}
