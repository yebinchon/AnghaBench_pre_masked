
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hws_trailer_entry {int dsdes; int bsdes; } ;
struct hws_basic_entry {int def; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(int VAR_1,
     unsigned char *VAR_2, size_t VAR_3,
     unsigned short *VAR_4,
     unsigned short *VAR_5)
{
 struct hws_basic_entry *VAR_6 = (struct hws_basic_entry *)VAR_2;
 struct hws_trailer_entry *VAR_7;

 *VAR_5 = *VAR_4 = 0;
 if (VAR_3 & (VAR_0 - 1))
  return 0;
 if (FUNC_0(VAR_6->def) != 1)
  return 0;

 VAR_7 = (struct hws_trailer_entry *)(VAR_2 + VAR_0
           - sizeof(*VAR_7));
 *VAR_4 = FUNC_0(VAR_7->bsdes);
 *VAR_5 = FUNC_0(VAR_7->dsdes);
 if (!VAR_7->bsdes && !VAR_7->dsdes) {

  switch (VAR_1) {
  case 2097:
  case 2098:
   *VAR_5 = 64;
   *VAR_4 = 32;
   break;
  case 2817:
  case 2818:
   *VAR_5 = 74;
   *VAR_4 = 32;
   break;
  case 2827:
  case 2828:
   *VAR_5 = 85;
   *VAR_4 = 32;
   break;
  case 2964:
  case 2965:
   *VAR_5 = 112;
   *VAR_4 = 32;
   break;
  default:

   return 0;
  }
 }
 return 1;
}
