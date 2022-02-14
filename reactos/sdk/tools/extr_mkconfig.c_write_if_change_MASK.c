
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int *) ;
 unsigned int FUNC_4 (char*,int,unsigned int,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int ,int ) ;
 unsigned int FUNC_7 (int *) ;
 unsigned int FUNC_8 (char*,int,unsigned int,int *) ;
 char* FUNC_9 (unsigned int) ;
 scalar_t__ FUNC_10 (char*,char*,unsigned int) ;
 int VAR_2 ;
 unsigned int FUNC_11 (char*) ;

int
FUNC_12(char* VAR_3, char* VAR_4)
{
  FILE* VAR_5;
  unsigned int VAR_6;
  char* VAR_7;
  unsigned int VAR_8;

  VAR_5 = FUNC_1(VAR_4, "rb");
  if (VAR_5 == ((void*)0))
    {
      VAR_5 = FUNC_1(VAR_4, "wb");
      if (VAR_5 == ((void*)0))
 {
   FUNC_2(VAR_2, "Unable to create output file\n");
   return(1);
 }
      FUNC_3(VAR_3, VAR_5);
      FUNC_0(VAR_5);
      return(0);
    }

  FUNC_6(VAR_5, 0, VAR_0);
  VAR_6 = FUNC_7(VAR_5);
  VAR_7 = FUNC_9(VAR_6);
  if (VAR_7 == ((void*)0))
    {
      FUNC_2(VAR_2, "Out of memory\n");
      FUNC_0(VAR_5);
      return(1);
    }

  FUNC_6(VAR_5, 0, VAR_1);
  VAR_8 = FUNC_4(VAR_7, 1, VAR_6, VAR_5);
  if (VAR_8 != VAR_6)
    {
      FUNC_2(VAR_2, "Failed to read data\n");
      FUNC_0(VAR_5);
      FUNC_5(VAR_7);
      return(1);
    }
  if (VAR_6 == FUNC_11(VAR_3) && FUNC_10(VAR_7, VAR_3, VAR_6) == 0)
    {
      FUNC_0(VAR_5);
      FUNC_5(VAR_7);
      return(0);
    }

  FUNC_0(VAR_5);
  FUNC_5(VAR_7);
  VAR_5 = FUNC_1(VAR_4, "wb");
  if (VAR_5 == ((void*)0))
    {
      FUNC_2(VAR_2, "Unable to create output file\n");
      return(1);
    }

  VAR_8 = FUNC_8(VAR_3, 1, FUNC_11(VAR_3), VAR_5);
  if (FUNC_11(VAR_3) != VAR_8)
    {
      FUNC_2(VAR_2, "Unable to write output file\n");
      FUNC_0(VAR_5);
      return(1);
    }
  FUNC_0(VAR_5);
  return(0);
}
