
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct idr {int dummy; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct idr*,void*,int*,int,int ) ;
 int FUNC_2 (struct idr*,int ,int *) ;
 void* FUNC_3 (struct idr*,int*) ;
 int FUNC_4 (struct idr*) ;
 void* FUNC_5 (struct idr*,int) ;
 int VAR_4 ;
 int FUNC_6 (char*) ;

void FUNC_7(struct idr *VAR_5, u32 VAR_6)
{
 static bool VAR_7 = 0;
 u32 VAR_8 = VAR_6;
 int VAR_9 = 0;
 void *VAR_10;

 FUNC_0(FUNC_1(VAR_5, VAR_0, &VAR_8, VAR_8, VAR_2));
 FUNC_0(VAR_8 != VAR_6);
 FUNC_0(FUNC_1(VAR_5, VAR_0, &VAR_8, VAR_8, VAR_2) != -VAR_1);
 FUNC_0(VAR_8 != VAR_6);
 if (!VAR_7 && VAR_8 > VAR_3)
  FUNC_6("vvv Ignore these warnings\n");
 VAR_10 = FUNC_3(VAR_5, &VAR_9);
 if (VAR_8 > VAR_3) {
  FUNC_0(VAR_10 != ((void*)0));
  FUNC_0(VAR_9 != 0);
 } else {
  FUNC_0(VAR_10 != VAR_0);
  FUNC_0(VAR_9 != VAR_8);
 }
 FUNC_2(VAR_5, VAR_4, ((void*)0));
 if (!VAR_7 && VAR_8 > VAR_3) {
  FUNC_6("^^^ Warnings over\n");
  VAR_7 = 1;
 }
 FUNC_0(FUNC_5(VAR_5, VAR_8) != VAR_0);
 FUNC_0(!FUNC_4(VAR_5));
}
