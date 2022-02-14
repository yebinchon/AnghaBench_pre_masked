
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int fd_set ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int*) ;
 scalar_t__ FUNC_6 (int ) ;
 unsigned char* FUNC_7 (int) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (int ,unsigned char*,int) ;
 int FUNC_10 (int ,int *,int *,int *,void*) ;
 int VAR_4 ;

int FUNC_11(unsigned char** VAR_5, char *VAR_6)
{
 int VAR_7, VAR_8;
 fd_set VAR_9;
 struct timeval VAR_10;
 void *VAR_11;

 FUNC_2(&VAR_9);
 VAR_8 = 0;

 VAR_10.tv_sec = 10;
 VAR_10.tv_usec = 0;

 if (FUNC_6(VAR_2))
 {
  VAR_11 = ((void*)0);
  if (VAR_6 != ((void*)0))
  {
   FUNC_8("%s", VAR_6);
   FUNC_4(VAR_4);
  }
 }
 else
 {
  VAR_11 = &VAR_10;
 }

 FUNC_1(VAR_2, &VAR_9);
 VAR_7 = FUNC_10(VAR_0, &VAR_9, ((void*)0), ((void*)0), VAR_11);
 if (VAR_7 < 0)
 {
  FUNC_3("Error while waiting for input data. Errno: %i", VAR_3);
  return -1;
 }
 if (VAR_7 > 0)
 {
  VAR_7 = FUNC_5(VAR_2, VAR_1, &VAR_8);
  if (VAR_7 < 0)
  {
   FUNC_3("Could not determine length of input. Errno: %i", VAR_3);
   return -1;
  }
  if (VAR_8 > 0)
  {
   *VAR_5 = FUNC_7(VAR_8);
   if (*VAR_5 == ((void*)0))
   {
    FUNC_3("Memory allocation error.");
    return -1;
   }
   VAR_7 = FUNC_9(VAR_2, *VAR_5, VAR_8);
   if (VAR_7 < 0)
   {
    FUNC_3("Input read error. Errno: %i", VAR_3);
    return -1;
   }
  }
 }

 FUNC_0(VAR_2, &VAR_9);

 return VAR_8;
}
