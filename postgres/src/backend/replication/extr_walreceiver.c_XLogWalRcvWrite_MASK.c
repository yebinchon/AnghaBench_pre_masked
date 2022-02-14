
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int off_t ;
typedef int XLogRecPtr ;
struct TYPE_2__ {int Write; } ;
typedef scalar_t__ Size ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int*,int) ;
 int FUNC_5 (char*,int ,int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (char*,int ,...) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_13 (int,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_14 (int,char*,int) ;

__attribute__((used)) static void
FUNC_15(char *VAR_14, Size VAR_15, XLogRecPtr VAR_16)
{
 int VAR_17;
 int VAR_18;

 while (VAR_15 > 0)
 {
  int VAR_19;

  if (VAR_9 < 0 || !FUNC_0(VAR_16, VAR_12, VAR_13))
  {
   bool VAR_20;





   if (VAR_9 >= 0)
   {
    char VAR_21[VAR_3];

    FUNC_8(0);






    if (FUNC_9(VAR_9) != 0)
     FUNC_10(VAR_4,
       (FUNC_11(),
        FUNC_12("could not close log segment %s: %m",
         FUNC_6(VAR_10, VAR_12))));





    FUNC_5(VAR_21, VAR_10, VAR_12, VAR_13);
    if (VAR_7 != VAR_0)
     FUNC_2(VAR_21);
    else
     FUNC_3(VAR_21);
   }
   VAR_9 = -1;


   FUNC_1(VAR_16, VAR_12, VAR_13);
   VAR_20 = 1;
   VAR_9 = FUNC_4(VAR_12, &VAR_20, 1);
   VAR_10 = VAR_6;
   VAR_11 = 0;
  }


  VAR_17 = FUNC_7(VAR_16, VAR_13);

  if (VAR_17 + VAR_15 > VAR_13)
   VAR_19 = VAR_13 - VAR_17;
  else
   VAR_19 = VAR_15;


  if (VAR_11 != VAR_17)
  {
   if (FUNC_13(VAR_9, (off_t) VAR_17, VAR_5) < 0)
    FUNC_10(VAR_4,
      (FUNC_11(),
       FUNC_12("could not seek in log segment %s to offset %u: %m",
        FUNC_6(VAR_10, VAR_12),
        VAR_17)));
   VAR_11 = VAR_17;
  }


  VAR_8 = 0;

  VAR_18 = FUNC_14(VAR_9, VAR_14, VAR_19);
  if (VAR_18 <= 0)
  {

   if (VAR_8 == 0)
    VAR_8 = VAR_1;
   FUNC_10(VAR_4,
     (FUNC_11(),
      FUNC_12("could not write to log segment %s "
       "at offset %u, length %lu: %m",
       FUNC_6(VAR_10, VAR_12),
       VAR_11, (unsigned long) VAR_19)));
  }


  VAR_16 += VAR_18;

  VAR_11 += VAR_18;
  VAR_15 -= VAR_18;
  VAR_14 += VAR_18;

  VAR_2.Write = VAR_16;
 }
}
