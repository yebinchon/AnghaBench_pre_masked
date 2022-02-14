
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* bufstart; char* bufptr; char* bufend; int nchars; int failed; int * stream; } ;
typedef TYPE_1__ PrintfTarget ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,TYPE_1__*) ;
 int FUNC_2 (char*,int,TYPE_1__*) ;
 scalar_t__ FUNC_3 (double) ;
 scalar_t__ FUNC_4 (double) ;
 scalar_t__ FUNC_5 (double*,double const*,int) ;
 int FUNC_6 (char*,char*,int,double) ;
 int FUNC_7 (char*,char*) ;

int
FUNC_8(char *VAR_0, size_t VAR_1, int VAR_2, double VAR_3)
{
 PrintfTarget VAR_4;
 int VAR_5 = 0;
 int VAR_6;
 char VAR_7[8];
 char VAR_8[64];


 FUNC_0(VAR_1 > 0);
 VAR_4.bufstart = VAR_4.bufptr = VAR_0;
 VAR_4.bufend = VAR_0 + VAR_1 - 1;
 VAR_4.stream = ((void*)0);
 VAR_4.nchars = 0;
 VAR_4.failed = 0;






 if (VAR_2 < 1)
  VAR_2 = 1;
 else if (VAR_2 > 32)
  VAR_2 = 32;





 if (FUNC_4(VAR_3))
 {
  FUNC_7(VAR_8, "NaN");
  VAR_6 = 3;
 }
 else
 {
  static const double VAR_9 = 0.0;

  if (VAR_3 < 0.0 ||
   (VAR_3 == 0.0 &&
    FUNC_5(&VAR_3, &VAR_9, sizeof(double)) != 0))
  {
   VAR_5 = '-';
   VAR_3 = -VAR_3;
  }

  if (FUNC_3(VAR_3))
  {
   FUNC_7(VAR_8, "Infinity");
   VAR_6 = 8;
  }
  else
  {
   VAR_7[0] = '%';
   VAR_7[1] = '.';
   VAR_7[2] = '*';
   VAR_7[3] = 'g';
   VAR_7[4] = '\0';
   VAR_6 = FUNC_6(VAR_8, VAR_7, VAR_2, VAR_3);
   if (VAR_6 < 0)
   {
    VAR_4.failed = 1;
    goto fail;
   }
  }
 }

 if (VAR_5)
  FUNC_1(VAR_5, &VAR_4);

 FUNC_2(VAR_8, VAR_6, &VAR_4);

fail:
 *(VAR_4.bufptr) = '\0';
 return VAR_4.failed ? -1 : (VAR_4.bufptr - VAR_4.bufstart
         + VAR_4.nchars);
}
