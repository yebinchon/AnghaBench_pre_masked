
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int failed; } ;
typedef TYPE_1__ PrintfTarget ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int,int,int*) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int ,int,TYPE_1__*) ;
 int FUNC_4 (char*,int,TYPE_1__*) ;
 scalar_t__ FUNC_5 (double) ;
 scalar_t__ FUNC_6 (double) ;
 int FUNC_7 (int,int,int*,TYPE_1__*) ;
 scalar_t__ FUNC_8 (double*,double const*,int) ;
 int FUNC_9 (char*,char*,double,...) ;
 int FUNC_10 (char*,char*) ;
 char* FUNC_11 (char*,char) ;
 int FUNC_12 (int,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_13(double VAR_0, char VAR_1, int VAR_2, int VAR_3,
   int VAR_4, int VAR_5, int VAR_6, int VAR_7,
   PrintfTarget *VAR_8)
{
 int VAR_9 = 0;
 int VAR_10;
 int VAR_11;
 char VAR_12[8];
 char VAR_13[1024];
 int VAR_14 = 0;
 int VAR_15;
 if (VAR_6 < 0)
  VAR_6 = 0;
 VAR_10 = FUNC_0(VAR_6, 350);

 if (FUNC_6(VAR_0))
 {
  FUNC_10(VAR_13, "NaN");
  VAR_11 = 3;

 }
 else
 {






  static const double VAR_16 = 0.0;

  if (FUNC_1((VAR_0 < 0.0 ||
       (VAR_0 == 0.0 &&
        FUNC_8(&VAR_0, &VAR_16, sizeof(double)) != 0)),
      VAR_2, &VAR_9))
   VAR_0 = -VAR_0;

  if (FUNC_5(VAR_0))
  {
   FUNC_10(VAR_13, "Infinity");
   VAR_11 = 8;

  }
  else if (VAR_7)
  {
   VAR_14 = VAR_6 - VAR_10;
   VAR_12[0] = '%';
   VAR_12[1] = '.';
   VAR_12[2] = '*';
   VAR_12[3] = VAR_1;
   VAR_12[4] = '\0';
   VAR_11 = FUNC_9(VAR_13, VAR_12, VAR_10, VAR_0);
  }
  else
  {
   VAR_12[0] = '%';
   VAR_12[1] = VAR_1;
   VAR_12[2] = '\0';
   VAR_11 = FUNC_9(VAR_13, VAR_12, VAR_0);
  }
  if (VAR_11 < 0)
   goto fail;
 }

 VAR_15 = FUNC_2(VAR_4, VAR_11 + VAR_14, VAR_3);

 FUNC_7(VAR_5, VAR_9, &VAR_15, VAR_8);

 if (VAR_14 > 0)
 {

  char *VAR_17 = FUNC_11(VAR_13, 'e');

  if (!VAR_17)
   VAR_17 = FUNC_11(VAR_13, 'E');
  if (VAR_17)
  {

   FUNC_4(VAR_13, VAR_17 - VAR_13, VAR_8);
   if (VAR_14 > 0)
    FUNC_3('0', VAR_14, VAR_8);
   FUNC_4(VAR_17, VAR_11 - (VAR_17 - VAR_13), VAR_8);
  }
  else
  {

   FUNC_4(VAR_13, VAR_11, VAR_8);
   if (VAR_14 > 0)
    FUNC_3('0', VAR_14, VAR_8);
  }
 }
 else
 {

  FUNC_4(VAR_13, VAR_11, VAR_8);
 }

 FUNC_12(VAR_15, VAR_8);
 return;

fail:
 VAR_8->failed = 1;
}
