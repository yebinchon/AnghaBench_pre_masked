
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_2(int VAR_8, int VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
  char * VAR_13;

  if (!VAR_12 ||
        (VAR_8 >= VAR_3 && VAR_8 < VAR_4 &&
         VAR_9 >= VAR_5 && VAR_9 < VAR_2))
  {
    if (VAR_8 >= 0 && VAR_8 < VAR_7 && VAR_9 >= 0 && VAR_9 < VAR_6)
    {
      VAR_13 = VAR_1 + (VAR_9 * VAR_7 * VAR_0) + (VAR_8 * VAR_0);
      if (VAR_11 != 12)
      {
        VAR_10 = FUNC_0(VAR_11, VAR_10, FUNC_1(VAR_8, VAR_9));
      }
      if (VAR_0 == 1)
      {
        *((unsigned char *) VAR_13) = VAR_10;
      }
      else if (VAR_0 == 2)
      {
        *((unsigned short *) VAR_13) = VAR_10;
      }
      else
      {
        *((unsigned int *) VAR_13) = VAR_10;
      }
    }
  }
}
