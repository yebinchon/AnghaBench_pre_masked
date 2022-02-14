
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GLenum ;
typedef int GLboolean ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static GLboolean FUNC_1(GLenum VAR_17, GLenum VAR_18)
{

   if (!FUNC_0(VAR_18)) {
      return VAR_4;
   }


   if ((VAR_18 == VAR_6 || VAR_18 == VAR_5||
 VAR_18 == VAR_15|| VAR_18 == VAR_16)
       && VAR_17 != VAR_2)
      return VAR_1;




   if ((VAR_18 == VAR_12 ||
 VAR_18 == VAR_13 ||
 VAR_18 == VAR_14 ||
 VAR_18 == VAR_11 ||
 VAR_18 == VAR_9 ||
 VAR_18 == VAR_10 ||
 VAR_18 == VAR_7 ||
 VAR_18 == VAR_8) &&
       (VAR_17 != VAR_3 &&
 VAR_17 != VAR_0)) {
      return VAR_1;
   }

   return VAR_4;
}
