
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fdt_property {int dummy; } ;
typedef int fdt32_t ;





 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int const) ;
 void* FUNC_2 (void const*,int,int) ;
 int FUNC_3 (void const*) ;

uint32_t FUNC_4(const void *VAR_3, int VAR_4, int *VAR_5)
{
 const fdt32_t *VAR_6, *VAR_7;
 uint32_t VAR_8;
 int VAR_9 = VAR_4;
 const char *VAR_10;

 *VAR_5 = -VAR_1;
 VAR_6 = FUNC_2(VAR_3, VAR_9, VAR_2);
 if (!VAR_6)
  return 131;
 VAR_8 = FUNC_1(*VAR_6);
 VAR_9 += VAR_2;

 *VAR_5 = -VAR_0;
 switch (VAR_8) {
 case 132:

  do {
   VAR_10 = FUNC_2(VAR_3, VAR_9++, 1);
  } while (VAR_10 && (*VAR_10 != '\0'));
  if (!VAR_10)
   return 131;
  break;

 case 128:
  VAR_7 = FUNC_2(VAR_3, VAR_9, sizeof(*VAR_7));
  if (!VAR_7)
   return 131;

  VAR_9 += sizeof(struct fdt_property) - VAR_2
   + FUNC_1(*VAR_7);
  if (FUNC_3(VAR_3) < 0x10 && FUNC_1(*VAR_7) >= 8 &&
      ((VAR_9 - FUNC_1(*VAR_7)) % 8) != 0)
   VAR_9 += 4;
  break;

 case 131:
 case 130:
 case 129:
  break;

 default:
  return 131;
 }

 if (!FUNC_2(VAR_3, VAR_4, VAR_9 - VAR_4))
  return 131;

 *VAR_5 = FUNC_0(VAR_9);
 return VAR_8;
}
