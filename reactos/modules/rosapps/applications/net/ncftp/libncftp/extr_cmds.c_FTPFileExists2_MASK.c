
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int time_t ;
typedef int longest_int ;
struct TYPE_8__ {int errNo; } ;
typedef int MLstItem ;
typedef TYPE_1__* FTPCIPtr ;


 int FUNC_0 (TYPE_1__* const,char const* const) ;
 int FUNC_1 (TYPE_1__* const,char const* const) ;
 int FUNC_2 (TYPE_1__* const,char const* const,int *) ;
 int FUNC_3 (TYPE_1__* const,char const* const,int *,int ) ;
 int FUNC_4 (TYPE_1__* const,char const* const,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int
FUNC_5(const FTPCIPtr VAR_8, const char *const VAR_9, const int VAR_10, const int VAR_11, const int VAR_12, const int VAR_13, const int VAR_14)
{
 int VAR_15;
 time_t VAR_16;
 longest_int VAR_17;
 MLstItem VAR_18;

 if (VAR_10 != 0) {
  VAR_15 = FUNC_2(VAR_8, VAR_9, &VAR_16);
  if (VAR_15 == VAR_6)
   return (VAR_6);
  if (VAR_15 == VAR_1) {
   VAR_8->errNo = VAR_4;
   return (VAR_4);
  }

 }

 if (VAR_11 != 0) {
  VAR_15 = FUNC_3(VAR_8, VAR_9, &VAR_17, VAR_7);
  if (VAR_15 == VAR_6)
   return (VAR_6);







 }


 if (VAR_12 != 0) {
  VAR_15 = FUNC_4(VAR_8, VAR_9, &VAR_18);
  if (VAR_15 == VAR_6)
   return (VAR_6);
  if (VAR_15 == VAR_2) {
   VAR_8->errNo = VAR_4;
   return (VAR_4);
  }

 }

 if (VAR_13 != 0) {
  VAR_15 = FUNC_1(VAR_8, VAR_9);
  if (VAR_15 == VAR_6)
   return (VAR_6);
  if (VAR_15 == VAR_5) {
   VAR_8->errNo = VAR_4;
   return (VAR_4);
  }

 }

 if (VAR_14 != 0) {
  VAR_15 = FUNC_0(VAR_8, VAR_9);
  if (VAR_15 == VAR_6)
   return (VAR_6);
  if (VAR_15 == VAR_3) {
   VAR_8->errNo = VAR_4;
   return (VAR_4);
  }

 }

 VAR_8->errNo = VAR_0;
 return (VAR_0);
}
