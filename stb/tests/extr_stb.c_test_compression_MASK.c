
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned char*,unsigned char*,int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (int ,unsigned char*,int) ;
 int FUNC_5 (unsigned char*,int ,int) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;

int FUNC_7(unsigned char *VAR_1, int VAR_2)
{
   unsigned char *VAR_3;
   int VAR_4 = FUNC_4(VAR_0, VAR_1, VAR_2);
   int VAR_5;
   FUNC_3("Compressed %d to %d\n", VAR_2, VAR_4);
   VAR_5 = FUNC_6(VAR_0);
   VAR_3 = FUNC_1(VAR_5);
   VAR_5 = FUNC_5(VAR_3, VAR_0, VAR_4);
   if (VAR_5 != VAR_2) { FUNC_0(VAR_3); return -1; }
   if (FUNC_2(VAR_1, VAR_3, VAR_2) != 0) { FUNC_0(VAR_3); return -1; }
   FUNC_0(VAR_3);
   return VAR_4;
}
