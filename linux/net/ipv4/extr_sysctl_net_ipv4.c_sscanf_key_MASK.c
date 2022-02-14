
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int __le32 ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ,int ,int ,char*,int) ;
 int FUNC_3 (char*,char*,int *,int *,int *,int *) ;

__attribute__((used)) static int FUNC_4(char *VAR_1, __le32 *VAR_2)
{
 u32 VAR_3[4];
 int VAR_4, VAR_5 = 0;

 if (FUNC_3(VAR_1, "%x-%x-%x-%x", VAR_3, VAR_3 + 1,
     VAR_3 + 2, VAR_3 + 3) != 4) {
  VAR_5 = -VAR_0;
 } else {
  for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3); VAR_4++)
   VAR_2[VAR_4] = FUNC_1(VAR_3[VAR_4]);
 }
 FUNC_2("proc TFO key set 0x%x-%x-%x-%x <- 0x%s: %u\n",
   VAR_3[0], VAR_3[1], VAR_3[2], VAR_3[3], VAR_1, VAR_5);

 return VAR_5;
}
