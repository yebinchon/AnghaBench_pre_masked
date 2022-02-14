
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int max_packages ;


 int FUNC_0 (int,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int*,int,int) ;
 int FUNC_4 (int,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(void (*VAR_4)(int, void *, void *,
           void *, void *),
        void *VAR_5, void *VAR_6, void *VAR_7,
        void *VAR_8)
{
 int VAR_9[VAR_0 * VAR_0];
 int VAR_10 = 0, VAR_11;

 FUNC_3(VAR_9, 0xff, sizeof(VAR_9));
 for (VAR_11 = 0; VAR_11 < VAR_3; ++VAR_11) {
  int VAR_12, VAR_13, VAR_14, VAR_15 = 0, VAR_16 = 0;

  if (!FUNC_0(VAR_11, VAR_2, VAR_1))
   continue;
  if (VAR_11)
   VAR_13 = FUNC_4(
    1, "/sys/devices/system/cpu/cpu%d/online", VAR_11);
  else
   VAR_13 =
    1;

  VAR_15 = FUNC_1(VAR_11);
  if (VAR_15 < 0)
   VAR_15 = 0;
  VAR_14 = FUNC_2(VAR_11);

  VAR_14 = (VAR_0 * VAR_14 + VAR_15);

  for (VAR_12 = 0; VAR_12 < VAR_10; ++VAR_12) {
   if (VAR_9[VAR_12] == VAR_14) {
    VAR_16 = 1;
    break;
   }
  }

  if (!VAR_16 && VAR_13 && VAR_4) {
   VAR_4(VAR_11, VAR_5, VAR_6, VAR_7, VAR_8);
   VAR_9[VAR_10++] = VAR_14;
  }
 }
}
