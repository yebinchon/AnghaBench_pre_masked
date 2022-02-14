
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,char*) ;
 scalar_t__ FUNC_1 (char*,size_t,char*,char*,int) ;
 char* FUNC_2 (int) ;
 int * VAR_9 ;
 scalar_t__ FUNC_3 (char*,size_t,char const*,int ) ;
 int FUNC_4 (int,char*,size_t) ;
 size_t FUNC_5 (char const*,int,int,char*,size_t,int) ;
 int FUNC_6 (int,char*,size_t,char const*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t FUNC_7 (char*,size_t,int) ;

void FUNC_8(const char *VAR_13, int VAR_14, int VAR_15, const char *VAR_16, va_list VAR_17)
{
 char VAR_18[VAR_0];
 size_t VAR_19 = VAR_0;
 size_t VAR_20 = 0;
 int VAR_21 = 0;
 int VAR_22;

 if (VAR_7) {
  FUNC_6(VAR_15, VAR_18, VAR_19, VAR_16, VAR_17);
 }

 if ((VAR_15 & VAR_3) < VAR_11) {
  return;
 }

 VAR_22 = VAR_6;
 VAR_20 = FUNC_5(VAR_13, VAR_14, VAR_15, VAR_18, VAR_19, VAR_10 == VAR_5);

 if (VAR_20 > VAR_19 - 1) {
  VAR_21 = 1;
 } else {
  VAR_20 += FUNC_3(VAR_18 + VAR_20, VAR_19 - VAR_20, VAR_16, VAR_17);
  if (VAR_20 >= VAR_19) {
   VAR_21 = 1;
  }
 }

 if (!VAR_21) {
  if (VAR_15 & VAR_2) {
   VAR_20 += FUNC_1(VAR_18 + VAR_20, VAR_19 - VAR_20,
     ": %s (%d)", FUNC_2(VAR_22), VAR_22);
   if (VAR_20 >= VAR_12) {
    VAR_21 = 1;
   }
  }
 }

 if (VAR_21) {
  VAR_20 = FUNC_7(VAR_18, VAR_12 < VAR_19 ? VAR_12 : VAR_19, 1);
 }
 {
  VAR_18[VAR_20++] = '\n';
  FUNC_4(VAR_10 > -1 ? VAR_10 : VAR_1, VAR_18, VAR_20);
 }

 if (VAR_10 != VAR_1 && VAR_10 != -1 &&
   !VAR_8 && (VAR_15 & VAR_3) >= VAR_4) {
  FUNC_4(VAR_1, VAR_18, VAR_20);
 }
}
