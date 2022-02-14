
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned char*,int,unsigned int,int *) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (int *,int ,int ) ;
 unsigned int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 unsigned int FUNC_6 (unsigned char*,unsigned char*,unsigned int) ;
 int FUNC_7 (unsigned char*) ;
 int * FUNC_8 (char*,char*) ;

char *FUNC_9(char *VAR_2, unsigned int *VAR_3)
{
   unsigned int VAR_4;
   char *VAR_5;
   unsigned char *VAR_6;
   FILE *VAR_7 = FUNC_8(VAR_2, "rb"); if (VAR_7 == ((void*)0)) return ((void*)0);
   FUNC_3(VAR_7, 0, VAR_0);
   VAR_4 = FUNC_4(VAR_7);
   FUNC_3(VAR_7, 0, VAR_1);
   VAR_6 = (unsigned char * ) FUNC_5(VAR_4); if (VAR_6 == ((void*)0)) return ((void*)0);
   FUNC_1(VAR_6, 1, VAR_4, VAR_7);
   FUNC_0(VAR_7);
   if (VAR_6 == ((void*)0)) return ((void*)0);
   if (VAR_6[0] != 0x57 || VAR_6[1] != 0xBc || VAR_6[2] || VAR_6[3]) { FUNC_2(VAR_6); return ((void*)0); }
   VAR_5 = (char *) FUNC_5(FUNC_7(VAR_6)+1);
   if (!VAR_5) { FUNC_2(VAR_6); return ((void*)0); }
   *VAR_3 = FUNC_6((unsigned char *) VAR_5, VAR_6, VAR_4);
   if (*VAR_3) VAR_5[*VAR_3] = 0;
   FUNC_2(VAR_6);
   return VAR_5;
}
