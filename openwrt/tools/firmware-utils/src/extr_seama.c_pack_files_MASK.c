
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int FILE ;


 size_t FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 char** VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*,char*) ;
 int FUNC_7 (char*,char*,size_t) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,int ,int ,size_t) ;

__attribute__((used)) static void FUNC_11(void)
{
 FILE * VAR_4;
 FILE * VAR_5;
 size_t VAR_6, VAR_7;
 char VAR_8[512];
 uint8_t VAR_9[16];

 for (VAR_6=0; VAR_6<VAR_1; VAR_6++)
 {

  VAR_5 = FUNC_3(VAR_0[VAR_6], "r+");
  if (VAR_5)
  {
   VAR_7 = FUNC_0(VAR_5, 0, VAR_9);
   FUNC_7("file size (%s) : %d\n", VAR_0[VAR_6], VAR_7);
   FUNC_5(VAR_5);


   FUNC_6(VAR_8, "%s.seama", VAR_0[VAR_6]);
   VAR_4 = FUNC_3(VAR_8, "w+");
   if (VAR_4)
   {
    FUNC_10(VAR_4, VAR_2, VAR_3, VAR_7);
    FUNC_8(VAR_4, VAR_9);
    FUNC_9(VAR_4, VAR_2, VAR_3);
    FUNC_1(VAR_4, VAR_5);
    FUNC_2(VAR_4);
   }
   FUNC_2(VAR_5);
  }
  else
  {
   FUNC_4("Unable to open image file '%s'\n",VAR_0[VAR_6]);
  }
 }
}
