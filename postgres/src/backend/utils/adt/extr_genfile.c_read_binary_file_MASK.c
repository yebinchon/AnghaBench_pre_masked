
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;
typedef int off_t ;
typedef scalar_t__ int64 ;
typedef int bytea ;
typedef scalar_t__ Size ;
typedef int FILE ;


 int * FUNC_0 (char const*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,...) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_8 (int *) ;
 size_t FUNC_9 (int ,int,size_t,int *) ;
 scalar_t__ FUNC_10 (int *,int ,int ) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (char const*,struct stat*) ;

__attribute__((used)) static bytea *
FUNC_13(const char *VAR_9, int64 VAR_10, int64 VAR_11,
     bool VAR_12)
{
 bytea *VAR_13;
 size_t VAR_14;
 FILE *VAR_15;

 if (VAR_11 < 0)
 {
  if (VAR_10 < 0)
   VAR_11 = -VAR_10;
  else
  {
   struct stat VAR_16;

   if (FUNC_12(VAR_9, &VAR_16) < 0)
   {
    if (VAR_12 && VAR_8 == VAR_0)
     return ((void*)0);
    else
     FUNC_4(VAR_2,
       (FUNC_6(),
        FUNC_7("could not stat file \"%s\": %m", VAR_9)));
   }

   VAR_11 = VAR_16.st_size - VAR_10;
  }
 }


 if (VAR_11 > (VAR_3 - VAR_7))
  FUNC_4(VAR_2,
    (FUNC_5(VAR_1),
     FUNC_7("requested length too large")));

 if ((VAR_15 = FUNC_0(VAR_9, VAR_4)) == ((void*)0))
 {
  if (VAR_12 && VAR_8 == VAR_0)
   return ((void*)0);
  else
   FUNC_4(VAR_2,
     (FUNC_6(),
      FUNC_7("could not open file \"%s\" for reading: %m",
       VAR_9)));
 }

 if (FUNC_10(VAR_15, (off_t) VAR_10,
      (VAR_10 >= 0) ? VAR_6 : VAR_5) != 0)
  FUNC_4(VAR_2,
    (FUNC_6(),
     FUNC_7("could not seek in file \"%s\": %m", VAR_9)));

 VAR_13 = (bytea *) FUNC_11((Size) VAR_11 + VAR_7);

 VAR_14 = FUNC_9(FUNC_3(VAR_13), 1, (size_t) VAR_11, VAR_15);

 if (FUNC_8(VAR_15))
  FUNC_4(VAR_2,
    (FUNC_6(),
     FUNC_7("could not read file \"%s\": %m", VAR_9)));

 FUNC_2(VAR_13, VAR_14 + VAR_7);

 FUNC_1(VAR_15);

 return VAR_13;
}
