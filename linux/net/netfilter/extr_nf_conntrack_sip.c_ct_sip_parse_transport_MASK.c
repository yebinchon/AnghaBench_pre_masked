
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct nf_conn {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct nf_conn*,char const*,unsigned int,unsigned int,char*,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_1 (struct nf_conn*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct nf_conn *VAR_2, const char *VAR_3,
      unsigned int VAR_4, unsigned int VAR_5,
      u8 *VAR_6)
{
 unsigned int VAR_7, VAR_8;

 if (FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, "transport=",
          &VAR_7, &VAR_8)) {
  if (!FUNC_3(VAR_3 + VAR_7, "TCP", FUNC_2("TCP")))
   *VAR_6 = VAR_0;
  else if (!FUNC_3(VAR_3 + VAR_7, "UDP", FUNC_2("UDP")))
   *VAR_6 = VAR_1;
  else
   return 0;

  if (*VAR_6 != FUNC_1(VAR_2))
   return 0;
 } else
  *VAR_6 = FUNC_1(VAR_2);

 return 1;
}
