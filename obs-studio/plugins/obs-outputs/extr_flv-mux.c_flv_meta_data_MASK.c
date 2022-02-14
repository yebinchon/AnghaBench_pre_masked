
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint32_t ;
struct serializer {int dummy; } ;
struct TYPE_2__ {char* array; size_t num; } ;
struct array_output_data {TYPE_1__ bytes; } ;
typedef int obs_output_t ;


 int VAR_0 ;
 int FUNC_0 (struct serializer*,struct array_output_data*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char**,size_t*,size_t) ;
 int FUNC_3 (struct serializer*,int) ;
 int FUNC_4 (struct serializer*,int) ;
 int FUNC_5 (struct serializer*,int) ;
 int FUNC_6 (struct serializer*,char*,size_t) ;
 int FUNC_7 (struct serializer*) ;

bool FUNC_8(obs_output_t *VAR_1, uint8_t **VAR_2, size_t *VAR_3,
     bool VAR_4, size_t VAR_5)
{
 struct array_output_data VAR_6;
 struct serializer VAR_7;
 uint8_t *VAR_8 = ((void*)0);
 size_t VAR_9;
 uint32_t VAR_10;

 FUNC_0(&VAR_7, &VAR_6);

 if (!FUNC_2(VAR_1, &VAR_8, &VAR_9,
     VAR_5)) {
  FUNC_1(VAR_8);
  return 0;
 }

 if (VAR_4) {
  FUNC_6(&VAR_7, "FLV", 3);
  FUNC_3(&VAR_7, 1);
  FUNC_3(&VAR_7, 5);
  FUNC_5(&VAR_7, 9);
  FUNC_5(&VAR_7, 0);
 }

 VAR_10 = FUNC_7(&VAR_7);

 FUNC_3(&VAR_7, VAR_0);

 FUNC_4(&VAR_7, (uint32_t)VAR_9);
 FUNC_5(&VAR_7, 0);
 FUNC_4(&VAR_7, 0);

 FUNC_6(&VAR_7, VAR_8, VAR_9);

 FUNC_5(&VAR_7, (uint32_t)FUNC_7(&VAR_7) - VAR_10 - 1);

 *VAR_2 = VAR_6.bytes.array;
 *VAR_3 = VAR_6.bytes.num;

 FUNC_1(VAR_8);
 return 1;
}
