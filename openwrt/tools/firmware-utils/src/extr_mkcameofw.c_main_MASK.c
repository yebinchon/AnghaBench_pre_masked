
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* file_name; } ;
struct TYPE_3__ {void* file_name; } ;


 int FUNC_0 (char*,char*,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (int,char**,char*) ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 TYPE_1__ VAR_11 ;
 void* VAR_12 ;
 int FUNC_5 (void*,int *) ;
 int FUNC_6 (int) ;
 void* VAR_13 ;

int FUNC_7(int VAR_14, char *VAR_15[])
{
 int VAR_16 = VAR_0;

 VAR_9 = FUNC_1(VAR_15[0]);

 while (1) {
  int VAR_17;

  VAR_17 = FUNC_4(VAR_14, VAR_15, "M:S:V:R:k:K:I:r:o:hc");
  if (VAR_17 == -1)
   break;

  switch (VAR_17) {
  case 'M':
   VAR_6 = VAR_8;
   break;
  case 'S':
   VAR_12 = VAR_8;
   break;
  case 'V':
   VAR_13 = VAR_8;
   break;
  case 'R':
   VAR_10 = VAR_8;
   break;
  case 'k':
   VAR_4.file_name = VAR_8;
   break;
  case 'K':
   if (FUNC_5(VAR_8, &VAR_5)) {
    FUNC_0("%s is invalid '%s'",
        "kernel size", VAR_8);
    goto out;
   }
   break;
  case 'I':
   if (FUNC_5(VAR_8, &VAR_3)) {
    FUNC_0("%s is invalid '%s'",
        "image size", VAR_8);
    goto out;
   }
   break;
  case 'r':
   VAR_11.file_name = VAR_8;
   break;
  case 'c':
   VAR_2 = 1;
   break;
  case 'o':
   VAR_7 = VAR_8;
   break;
  case 'h':
   FUNC_6(VAR_1);
   break;
  default:
   FUNC_6(VAR_0);
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
