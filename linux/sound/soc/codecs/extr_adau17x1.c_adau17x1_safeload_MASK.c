
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint8_t ;
struct sigmadsp {int control_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int const*,int const*,size_t) ;
 int FUNC_1 (int const*,int ,int) ;
 int FUNC_2 (unsigned int,int const*) ;
 int FUNC_3 (int ,int ,int const*,int) ;

__attribute__((used)) static int FUNC_4(struct sigmadsp *VAR_5, unsigned int VAR_6,
 const uint8_t VAR_7[], size_t VAR_8)
{
 uint8_t VAR_9[VAR_4];
 uint8_t VAR_10[VAR_1];
 unsigned int VAR_11;
 unsigned int VAR_12;
 int VAR_13;




 VAR_12 = VAR_8 / VAR_4;
 if ((VAR_8 - VAR_12 * VAR_4) == 0) {
  VAR_13 = FUNC_3(VAR_5->control_data,
   VAR_0, VAR_7, VAR_8);
 } else {
  VAR_12++;
  FUNC_1(VAR_10, 0, VAR_1);
  FUNC_0(VAR_10, VAR_7, VAR_8);
  VAR_13 = FUNC_3(VAR_5->control_data,
   VAR_0, VAR_10,
   VAR_12 * VAR_4);
 }

 if (VAR_13 < 0)
  return VAR_13;


 VAR_11 = VAR_6 - 1;
 FUNC_2(VAR_11, VAR_9);
 VAR_13 = FUNC_3(VAR_5->control_data,
  VAR_2, VAR_9, VAR_4);
 if (VAR_13 < 0)
  return VAR_13;


 FUNC_2(VAR_12, VAR_9);
 VAR_13 = FUNC_3(VAR_5->control_data,
  VAR_3, VAR_9, VAR_4);
 if (VAR_13 < 0)
  return VAR_13;

 return 0;
}
