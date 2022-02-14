
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GucSource ;
typedef int GucContext ;


 int FUNC_0 (char const*,char*,int ,int ) ;

bool
FUNC_1(const char *VAR_0, GucContext VAR_1, GucSource VAR_2)
{
 const char *VAR_3 = ((void*)0);

 switch (VAR_0[0])
 {
  case 's':
   VAR_3 = "enable_seqscan";
   break;
  case 'i':
   VAR_3 = "enable_indexscan";
   break;
  case 'o':
   VAR_3 = "enable_indexonlyscan";
   break;
  case 'b':
   VAR_3 = "enable_bitmapscan";
   break;
  case 't':
   VAR_3 = "enable_tidscan";
   break;
  case 'n':
   VAR_3 = "enable_nestloop";
   break;
  case 'm':
   VAR_3 = "enable_mergejoin";
   break;
  case 'h':
   VAR_3 = "enable_hashjoin";
   break;
 }
 if (VAR_3)
 {
  FUNC_0(VAR_3, "false", VAR_1, VAR_2);
  return 1;
 }
 else
  return 0;
}
