
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct serializer {int dummy; } ;
struct TYPE_2__ {size_t num; int * array; } ;
struct array_output_data {TYPE_1__ bytes; } ;


 int FUNC_0 (struct serializer*,struct array_output_data*) ;
 int * FUNC_1 (int const*,size_t) ;
 int FUNC_2 (int const*,size_t,int const**,size_t*,int const**,size_t*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (struct serializer*,int) ;
 int FUNC_5 (struct serializer*,int ) ;
 int FUNC_6 (struct serializer*,int const*,size_t) ;

size_t FUNC_7(uint8_t **VAR_0, const uint8_t *VAR_1, size_t VAR_2)
{
 struct array_output_data VAR_3;
 struct serializer VAR_4;
 const uint8_t *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 size_t VAR_7 = 0, VAR_8 = 0;

 FUNC_0(&VAR_4, &VAR_3);

 if (VAR_2 <= 6)
  return 0;

 if (!FUNC_3(VAR_1)) {
  *VAR_0 = FUNC_1(VAR_1, VAR_2);
  return VAR_2;
 }

 FUNC_2(VAR_1, VAR_2, &VAR_5, &VAR_7, &VAR_6, &VAR_8);
 if (!VAR_5 || !VAR_6 || VAR_7 < 4)
  return 0;

 FUNC_4(&VAR_4, 0x01);
 FUNC_6(&VAR_4, VAR_5 + 1, 3);
 FUNC_4(&VAR_4, 0xff);
 FUNC_4(&VAR_4, 0xe1);

 FUNC_5(&VAR_4, (uint16_t)VAR_7);
 FUNC_6(&VAR_4, VAR_5, VAR_7);
 FUNC_4(&VAR_4, 0x01);
 FUNC_5(&VAR_4, (uint16_t)VAR_8);
 FUNC_6(&VAR_4, VAR_6, VAR_8);

 *VAR_0 = VAR_3.bytes.array;
 return VAR_3.bytes.num;
}
