
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 void* VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int,char**,char*) ;
 void* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* FUNC_5 (void*,int *,int) ;
 int FUNC_6 (int) ;
 void* VAR_14 ;

int FUNC_7(int VAR_15, char *VAR_16[])
{
 int VAR_17 = VAR_0;
 int VAR_18;

 VAR_11 = FUNC_0(VAR_16[0]);

 while ( 1 ) {
  int VAR_19;

  VAR_19 = FUNC_4(VAR_15, VAR_16, "adi:m:o:hlp:v:k:O:r:s:S:");
  if (VAR_19 == -1)
   break;

  switch (VAR_19) {
  case 'd':
   VAR_3 = 1;
   break;
  case 'i':
   VAR_4 = VAR_9;
   break;
  case 'l':
   VAR_5 = 1;
   break;
  case 'm':
   VAR_6 = VAR_9;
   break;
  case 'o':
   VAR_8 = VAR_9;
   break;
  case 'p':
   VAR_10 = VAR_9;
   break;
  case 'v':
   VAR_14 = VAR_9;
   break;
  case 'k':
   VAR_2 = VAR_9;
   break;
  case 's':
   VAR_12 = FUNC_5(VAR_9, ((void*)0), 16);
   break;
  case 'O':
   VAR_7 = FUNC_5(VAR_9, ((void*)0), 0);
   break;
  case 'S':
   VAR_13 = FUNC_5(VAR_9, ((void*)0), 0);
   break;
  case 'h':
   FUNC_6(VAR_1);
   break;
  default:
   FUNC_6(VAR_0);
   break;
  }
 }

 VAR_18 = FUNC_1();
 if (VAR_18)
  goto out;

 if (VAR_3)
  VAR_18 = FUNC_2();
 else
  VAR_18 = FUNC_3();

 if (VAR_18)
  goto out;

 VAR_17 = VAR_1;

out:
 return VAR_17;
}
