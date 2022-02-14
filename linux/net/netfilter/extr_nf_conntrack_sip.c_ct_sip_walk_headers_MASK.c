
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conn {int dummy; } ;
typedef enum sip_header_types { ____Placeholder_sip_header_types } sip_header_types ;


 int FUNC_0 (struct nf_conn const*,char const*,unsigned int,unsigned int,int,unsigned int*,unsigned int*) ;
 int FUNC_1 (struct nf_conn const*,char const*,unsigned int,unsigned int,int,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_2(const struct nf_conn *VAR_0, const char *VAR_1,
          unsigned int VAR_2, unsigned int VAR_3,
          enum sip_header_types VAR_4, int *VAR_5,
          unsigned int *VAR_6, unsigned int *VAR_7)
{
 int VAR_8;

 if (VAR_5 && *VAR_5) {
  while (1) {
   VAR_8 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3,
       VAR_4, VAR_6, VAR_7);
   if (VAR_8 > 0)
    return VAR_8;
   if (VAR_8 == 0)
    break;
   VAR_2 += *VAR_6;
  }
  *VAR_5 = 0;
 }

 while (1) {
  VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
     VAR_4, VAR_6, VAR_7);
  if (VAR_8 > 0)
   break;
  if (VAR_8 == 0)
   return VAR_8;
  VAR_2 += *VAR_6;
 }

 if (VAR_5)
  *VAR_5 = 1;
 return 1;
}
