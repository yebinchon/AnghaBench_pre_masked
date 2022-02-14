
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float int32_t ;
typedef int VTCompressionSessionRef ;
typedef int OSStatus ;
typedef int CFNumberRef ;
typedef int CFMutableArrayRef ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int *,int ,float*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,int *,char*,int ) ;
 int VAR_8 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static OSStatus FUNC_8(VTCompressionSessionRef VAR_9,
        int VAR_10, bool VAR_11,
        int VAR_12, float VAR_13)
{
 OSStatus VAR_14;

 FUNC_4(FUNC_7(
  VAR_9, VAR_5,
  VAR_10 * 1000));

 if (VAR_11) {
  int32_t VAR_15 = VAR_12 * 125 * VAR_13;

  CFNumberRef VAR_16 =
   FUNC_2(((void*)0), VAR_3, &VAR_15);
  CFNumberRef VAR_17 = FUNC_2(
   ((void*)0), VAR_2, &VAR_13);

  CFMutableArrayRef VAR_18 = FUNC_1(
   VAR_1, 2, &VAR_4);

  FUNC_0(VAR_18, VAR_16);
  FUNC_0(VAR_18, VAR_17);

  VAR_14 = FUNC_6(
   VAR_9, VAR_6,
   VAR_18);

  FUNC_3(VAR_16);
  FUNC_3(VAR_17);
  FUNC_3(VAR_18);

  if (VAR_14 == VAR_7) {
   FUNC_5(VAR_0, ((void*)0),
         "setting DataRateLimits on session", VAR_14);
   return VAR_8;
  }
 }

 return VAR_8;
}
