
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nf_inet_addr {void* ip; } ;
typedef int u8 ;
typedef scalar_t__ __u16 ;
typedef void* __be32 ;
typedef void* __be16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (void**) ;
 void* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char*,int,int *,char,char const**) ;
 scalar_t__ FUNC_3 (char*,int,int *,char,char const**) ;
 scalar_t__ FUNC_4 (char) ;
 scalar_t__ FUNC_5 (char*,char const*,size_t) ;

__attribute__((used)) static int FUNC_6(char *VAR_3, char *VAR_4,
      const char *VAR_5, size_t VAR_6,
      char VAR_7, bool VAR_8, int VAR_9,
      union nf_inet_addr *VAR_10, __be16 *VAR_11,
      __u16 VAR_12, char **VAR_13, char **VAR_14)
{
 char *VAR_15, VAR_16;
 unsigned char VAR_17[6];
 char VAR_18;
 __u16 VAR_19;
 int VAR_20 = 0;

 if (VAR_4 - VAR_3 < VAR_6) {

  if (FUNC_5(VAR_3, VAR_5, VAR_4 - VAR_3) == 0)
   return -1;
  else
   return 0;
 }

 if (FUNC_5(VAR_3, VAR_5, VAR_6) != 0) {
  return 0;
 }
 VAR_15 = VAR_3 + VAR_6;
 if (VAR_7) {
  bool VAR_21 = 0;

  for (;; VAR_15++) {
   if (VAR_15 == VAR_4)
    return -1;
   if (!VAR_21) {



    if (!VAR_8 && FUNC_4(*VAR_15))
     break;
    if (*VAR_15 == VAR_7)
     VAR_21 = 1;
   } else if (*VAR_15 != VAR_7) {
    break;
   }
  }
 }

 if (!VAR_8) {
  VAR_17[0] = 0;
  for (VAR_3 = VAR_15; ; VAR_3++) {
   if (VAR_3 == VAR_4)
    return -1;
   VAR_16 = *VAR_3;
   if (FUNC_4(VAR_16)) {
    VAR_17[VAR_20] = VAR_17[VAR_20]*10 + VAR_16 - '0';
   } else if (VAR_16 == ',' && VAR_20 < 5) {
    VAR_20++;
    VAR_17[VAR_20] = 0;
   } else {

    break;
   }
  }

  if (VAR_20 != 5)
   return -1;

  *VAR_13 = VAR_15;
  *VAR_14 = VAR_3;
  VAR_10->ip = FUNC_0((__be32 *) VAR_17);
  *VAR_11 = FUNC_0((__be16 *) (VAR_17 + 4));
  return 1;
 }
 if (VAR_15 == VAR_4)
  return -1;
 *VAR_13 = VAR_15;
 VAR_18 = *VAR_15++;
 if (VAR_18 < 33 || VAR_18 > 126)
  return -1;
 if (VAR_15 == VAR_4)
  return -1;
 if (*VAR_15 == VAR_18) {

  if (VAR_9 != VAR_2)
   return -1;
  VAR_15++;
  if (VAR_15 == VAR_4)
   return -1;

  if (*VAR_15 != VAR_18)
   return -1;

  VAR_15++;
 } else {
  const char *VAR_22;


  if (VAR_12 == VAR_1 && *VAR_15 != '2')
   return -1;
  if (VAR_12 == VAR_0 && *VAR_15 != '1')
   return -1;
  VAR_15++;
  if (VAR_15 == VAR_4)
   return -1;
  if (*VAR_15 != VAR_18)
   return -1;
  VAR_15++;
  if (VAR_15 == VAR_4)
   return -1;
  if (VAR_12 == VAR_1) {
   if (FUNC_3(VAR_15, VAR_4 - VAR_15, (u8 *)VAR_10, VAR_18,
         &VAR_22) <= 0)
    return -1;
  } else {
   if (FUNC_2(VAR_15, VAR_4 - VAR_15, (u8 *)VAR_10, VAR_18,
         &VAR_22) <= 0)
    return -1;
  }
  VAR_15 = (char *) VAR_22;
  if (VAR_15 == VAR_4)
   return -1;
  if (*VAR_15 != VAR_18)
   return -1;
  VAR_15++;
 }
 for (VAR_19 = 0; ; VAR_15++)
 {
  if (VAR_15 == VAR_4)
   return -1;
  if (!FUNC_4(*VAR_15))
   break;
  VAR_19 = VAR_19 * 10 + *VAR_15 - '0';
 }
 if (VAR_15 == VAR_4 || !VAR_19 || *VAR_15 != VAR_18)
  return -1;
 VAR_15++;
 *VAR_14 = VAR_15;
 *VAR_11 = FUNC_1(VAR_19);
 return 1;
}
