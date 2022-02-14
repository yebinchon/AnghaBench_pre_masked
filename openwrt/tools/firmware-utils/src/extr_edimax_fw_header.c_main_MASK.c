
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_4 (int,char**,char*) ;
 void* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (void*,int *) ;
 int FUNC_6 (void*,int *) ;
 int FUNC_7 (int) ;

int FUNC_8(int VAR_14, char *VAR_15[])
{
 int VAR_16 = VAR_0;

 VAR_12 = FUNC_1(VAR_15[0]);

 while (1) {
  int VAR_17;

  VAR_17 = FUNC_4(VAR_14, VAR_15, "e:fhi:o:m:M:n:s:t:v:");
  if (VAR_17 == -1)
   break;

  switch (VAR_17) {
  case 'e':
   if (FUNC_5(VAR_11, &VAR_2)) {
    FUNC_0("%s is invalid '%s'",
        "end address", VAR_11);
    goto out;
   }
   break;
  case 'f':
   VAR_3 = 1;
   break;
  case 'i':
   VAR_5 = VAR_11;
   break;
  case 'h':
   FUNC_7(VAR_1);
   break;
  case 'o':
   VAR_10 = VAR_11;
   break;
  case 'm':
   VAR_8 = VAR_11;
   break;
  case 'M':
   VAR_7 = VAR_11;
   break;
  case 'n':
   VAR_9 = VAR_11;
   break;
  case 's':
   if (FUNC_5(VAR_11, &VAR_13)) {
    FUNC_0("%s is invalid '%s'",
        "start address", VAR_11);
    goto out;
   }
   break;
  case 't':
   if (FUNC_6(VAR_11, &VAR_6)) {
    FUNC_0("%s is invalid '%s'",
        "image type", VAR_11);
    goto out;
   }
   break;
  case 'v':
   VAR_4 = VAR_11;
   break;
  default:
   FUNC_7(VAR_0);
   break;
  }
 }

 VAR_16 = FUNC_3();
 if (VAR_16)
  goto out;

 VAR_16 = FUNC_2();

out:
 return VAR_16;
}
