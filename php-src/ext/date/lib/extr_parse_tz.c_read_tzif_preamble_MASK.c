
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {char* country_code; } ;
struct TYPE_5__ {TYPE_1__ location; scalar_t__ bc; } ;
typedef TYPE_2__ timelib_tzinfo ;



__attribute__((used)) static int FUNC_0(const unsigned char **VAR_0, timelib_tzinfo *VAR_1)
{
 uint32_t VAR_2;


 switch ((*VAR_0)[4]) {
  case '\0':
   VAR_2 = 0;
   break;
  case '2':
   VAR_2 = 2;
   break;
  case '3':
   VAR_2 = 3;
   break;
  default:
   return -1;
 }
 *VAR_0 += 5;


 VAR_1->bc = 0;
 VAR_1->location.country_code[0] = '?';
 VAR_1->location.country_code[1] = '?';
 VAR_1->location.country_code[2] = '\0';


 *VAR_0 += 15;

 return VAR_2;
}
