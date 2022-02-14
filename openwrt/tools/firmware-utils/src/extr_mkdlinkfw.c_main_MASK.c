
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {void* file_name; } ;
struct TYPE_7__ {void* file_name; } ;
struct TYPE_6__ {void* file_name; } ;
struct TYPE_5__ {void* file_name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int,char**,char*) ;
 TYPE_4__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 () ;
 TYPE_3__ VAR_9 ;
 TYPE_2__ VAR_10 ;
 int FUNC_5 (int ,void*,int) ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_1__ VAR_15 ;
 int FUNC_6 (void*,char*,scalar_t__*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;

int FUNC_10(int VAR_16, char *VAR_17[])
{
 int VAR_18 = VAR_0;

 VAR_13 = FUNC_0(VAR_17[0]);
 VAR_8 = VAR_3;
 VAR_4 = 0;
 VAR_5 = 0;
 VAR_7 = VAR_2;

 while (1) {
  int VAR_19;

  VAR_19 = FUNC_3(VAR_16, VAR_17, "f:F:i:hk:m:o:O:r:s:");
  if (VAR_19 == -1)
   break;

  switch (VAR_19) {
  case 'f':
   FUNC_6(VAR_12, "0x%hx", &VAR_4);
   break;
  case 'F':
   VAR_6.file_name = VAR_12;
   VAR_8 = VAR_1;
   break;
  case 'i':
   VAR_9.file_name = VAR_12;
   break;
  case 'k':
   VAR_10.file_name = VAR_12;
   break;
  case 'm':
   if (FUNC_7(VAR_12) == 12)
    FUNC_5(VAR_14, VAR_12, 12);
   break;
  case 'r':
   VAR_15.file_name = VAR_12;
   break;
  case 'O':
   FUNC_6(VAR_12, "0x%x", &VAR_7);
   break;
  case 'o':
   VAR_11 = VAR_12;
   break;
  case 's':
   FUNC_6(VAR_12, "0x%x", &VAR_5);
   break;
  default:
   FUNC_8(VAR_0);
   break;
  }
 }

 VAR_18 = FUNC_2();
 if (VAR_18)
  goto out;

 if (!VAR_9.file_name) {
  if (VAR_8 == VAR_1)
   VAR_18 = FUNC_9();
  else
   VAR_18 = FUNC_1();
  }
 else
  VAR_18 = FUNC_4();

 out:
 return VAR_18;

}
