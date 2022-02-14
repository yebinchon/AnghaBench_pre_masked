
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ,unsigned long,int ,int,int,int ) ;
 void* FUNC_2 (void*,unsigned long,unsigned long,int,void*) ;
 int FUNC_3 (void*,unsigned long) ;
 int FUNC_4 (char*,...) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_5(void *VAR_9, unsigned long VAR_10)
{
 void *VAR_11, *VAR_12;


 VAR_11 = FUNC_1(0, VAR_10, VAR_6, VAR_3|VAR_1, -1, 0);
 if (VAR_11 == VAR_2) {
  FUNC_4("[WARN]\tmmap failed (%d): %m\n", VAR_7);
  return 0;
 }

 FUNC_4("[NOTE]\tMoving vDSO: [%p, %#lx] -> [%p, %#lx]\n",
  VAR_9, (unsigned long)VAR_9 + VAR_10,
  VAR_11, (unsigned long)VAR_11 + VAR_10);
 FUNC_0(VAR_8);

 VAR_12 = FUNC_2(VAR_9, VAR_10, VAR_10,
   VAR_4|VAR_5, VAR_11);
 if ((unsigned long)VAR_12 == (unsigned long)-1) {
  FUNC_3(VAR_11, VAR_10);
  if (VAR_7 == VAR_0) {
   FUNC_4("[NOTE]\tvDSO partial move failed, will try with bigger size\n");
   return -1;
  }
  FUNC_4("[FAIL]\tmremap failed (%d): %m\n", VAR_7);
  return 1;
 }

 return 0;

}
