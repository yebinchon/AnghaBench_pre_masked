
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int srcpath ;
typedef int off_t ;
typedef int buf ;
struct TYPE_2__ {int data; } ;
typedef TYPE_1__ PGAlignedBlock ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 char* VAR_4 ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int,int ,int) ;
 int FUNC_6 (char*,int,char*,char*,char const*) ;
 int FUNC_7 (int ,int,int) ;

__attribute__((used)) static void
FUNC_8(const char *VAR_5, off_t VAR_6, off_t VAR_7, bool VAR_8)
{
 PGAlignedBlock VAR_9;
 char VAR_10[VAR_0];
 int VAR_11;

 FUNC_6(VAR_10, sizeof(VAR_10), "%s/%s", VAR_4, VAR_5);

 VAR_11 = FUNC_2(VAR_10, VAR_1 | VAR_2, 0);
 if (VAR_11 < 0)
  FUNC_4("could not open source file \"%s\": %m",
     VAR_10);

 if (FUNC_1(VAR_11, VAR_6, VAR_3) == -1)
  FUNC_4("could not seek in source file: %m");

 FUNC_3(VAR_5, VAR_8);

 while (VAR_7 - VAR_6 > 0)
 {
  int VAR_12;
  int VAR_13;

  if (VAR_7 - VAR_6 > sizeof(VAR_9))
   VAR_13 = sizeof(VAR_9);
  else
   VAR_13 = VAR_7 - VAR_6;

  VAR_12 = FUNC_5(VAR_11, VAR_9.data, VAR_13);

  if (VAR_12 < 0)
   FUNC_4("could not read file \"%s\": %m",
      VAR_10);
  else if (VAR_12 == 0)
   FUNC_4("unexpected EOF while reading file \"%s\"", VAR_10);

  FUNC_7(VAR_9.data, VAR_6, VAR_12);
  VAR_6 += VAR_12;
 }

 if (FUNC_0(VAR_11) != 0)
  FUNC_4("could not close file \"%s\": %m", VAR_10);
}
