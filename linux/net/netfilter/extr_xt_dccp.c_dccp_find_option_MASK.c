
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char const u_int8_t ;
struct sk_buff {int dummy; } ;
struct dccp_hdr {int dccph_doff; } ;


 int FUNC_0 (struct dccp_hdr const*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned char* FUNC_1 (struct sk_buff const*,unsigned int,unsigned int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline bool
FUNC_4(u_int8_t VAR_2,
   const struct sk_buff *VAR_3,
   unsigned int VAR_4,
   const struct dccp_hdr *VAR_5,
   bool *VAR_6)
{

 const unsigned char *VAR_7;
 unsigned int VAR_8 = FUNC_0(VAR_5);
 unsigned int VAR_9 = VAR_5->dccph_doff*4 - FUNC_0(VAR_5);
 unsigned int VAR_10;

 if (VAR_5->dccph_doff * 4 < FUNC_0(VAR_5))
  goto invalid;

 if (!VAR_9)
  return 0;

 FUNC_2(&VAR_0);
 VAR_7 = FUNC_1(VAR_3, VAR_4 + VAR_8, VAR_9, VAR_1);
 if (VAR_7 == ((void*)0)) {

  goto partial;
 }

 for (VAR_10 = 0; VAR_10 < VAR_9; ) {
  if (VAR_7[VAR_10] == VAR_2) {
   FUNC_3(&VAR_0);
   return 1;
  }

  if (VAR_7[VAR_10] < 2)
   VAR_10++;
  else
   VAR_10 += VAR_7[VAR_10+1]?:1;
 }

 FUNC_3(&VAR_0);
 return 0;

partial:
 FUNC_3(&VAR_0);
invalid:
 *VAR_6 = 1;
 return 0;
}
