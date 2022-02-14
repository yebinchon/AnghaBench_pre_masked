
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct meta_tlvhdr {int len; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static bool FUNC_3(const unsigned char *VAR_1,
     const unsigned char *VAR_2)
{
 const struct meta_tlvhdr *VAR_3;
 u16 VAR_4;

 if (FUNC_2(VAR_1 + sizeof(*VAR_3) > VAR_2))
  return 0;

 VAR_3 = (const struct meta_tlvhdr *)VAR_1;
 VAR_4 = FUNC_1(VAR_3->len);


 if (VAR_4 < VAR_0)
  return 0;


 if (FUNC_0(VAR_4) < VAR_4)
  return 0;

 if (FUNC_2(VAR_1 + FUNC_0(VAR_4) > VAR_2))
  return 0;

 return 1;
}
