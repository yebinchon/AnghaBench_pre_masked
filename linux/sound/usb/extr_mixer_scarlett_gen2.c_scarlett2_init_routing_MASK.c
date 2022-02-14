
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scarlett2_ports {int* num; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;


 size_t VAR_2 ;

 int FUNC_0 (struct scarlett2_ports const*,size_t,int) ;

__attribute__((used)) static void FUNC_1(u8 *VAR_3,
       const struct scarlett2_ports *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11;

 static const int VAR_12[] = {
  129,
  128,
  130,
  -1
 };


 VAR_9 = FUNC_0(VAR_4,
        VAR_1,
        VAR_2);
 VAR_10 = VAR_4[VAR_2].num[VAR_1];

 for (VAR_8 = VAR_12[VAR_11 = 0];
      VAR_8 >= 0;
      VAR_8 = VAR_12[++VAR_11]) {
  VAR_6 = FUNC_0(
   VAR_4, VAR_0, VAR_8);
  VAR_7 = VAR_4[VAR_8].num[VAR_0];
  for (VAR_5 = 0;
       VAR_5 < VAR_7 && VAR_10;
       VAR_5++, VAR_10--)
   VAR_3[VAR_9++] = VAR_6++;
 }


 VAR_6 = FUNC_0(VAR_4,
       VAR_0,
       VAR_2);
 VAR_7 = VAR_4[VAR_2].num[VAR_0];

 for (VAR_8 = VAR_12[VAR_11 = 0];
      VAR_8 >= 0;
      VAR_8 = VAR_12[++VAR_11]) {
  VAR_9 = FUNC_0(
   VAR_4, VAR_1, VAR_8);
  VAR_10 = VAR_4[VAR_8].num[VAR_1];
  for (VAR_5 = 0;
       VAR_5 < VAR_10 && VAR_7;
       VAR_5++, VAR_7--)
   VAR_3[VAR_9++] = VAR_6++;
 }
}
