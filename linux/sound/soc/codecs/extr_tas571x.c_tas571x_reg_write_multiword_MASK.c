
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;
typedef int uint32_t ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_client*,unsigned int*,size_t) ;
 int FUNC_1 (unsigned int*) ;
 unsigned int* FUNC_2 (size_t,int) ;
 int FUNC_3 (long const,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_4,
  unsigned int VAR_5, const long VAR_6[], size_t VAR_7)
{
 size_t VAR_8;
 uint8_t *VAR_9, *VAR_10;
 int VAR_11;
 size_t VAR_12 = 1 + VAR_7 * sizeof(uint32_t);

 VAR_9 = FUNC_2(VAR_12, VAR_3 | VAR_2);
 if (!VAR_9)
  return -VAR_1;
 VAR_9[0] = VAR_5;

 for (VAR_8 = 0, VAR_10 = VAR_9 + 1; VAR_8 < VAR_7; VAR_8++, VAR_10 += sizeof(uint32_t))
  FUNC_3(VAR_6[VAR_8], VAR_10);

 VAR_11 = FUNC_0(VAR_4, VAR_9, VAR_12);

 FUNC_1(VAR_9);

 if (VAR_11 == VAR_12)
  return 0;
 else if (VAR_11 < 0)
  return VAR_11;
 else
  return -VAR_0;
}
