
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {char* country_code; } ;
struct TYPE_5__ {int bc; TYPE_1__ location; } ;
typedef TYPE_2__ timelib_tzinfo ;


 int FUNC_0 (char*,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_1(const unsigned char **VAR_0, timelib_tzinfo *VAR_1)
{
 uint32_t VAR_2;


 VAR_2 = (*VAR_0)[3] - '0';
 *VAR_0 += 4;


 VAR_1->bc = (**VAR_0 == '\1');
 *VAR_0 += 1;


 FUNC_0(VAR_1->location.country_code, *VAR_0, 2);
 VAR_1->location.country_code[2] = '\0';
 *VAR_0 += 2;


 *VAR_0 += 13;

 return VAR_2;
}
