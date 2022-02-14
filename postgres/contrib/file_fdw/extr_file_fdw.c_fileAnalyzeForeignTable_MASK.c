
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
typedef int Relation ;
typedef int List ;
typedef int BlockNumber ;
typedef int AcquireSampleRowsFunc ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char**,int*,int **) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (char*,struct stat*) ;

__attribute__((used)) static bool
FUNC_6(Relation VAR_3,
      AcquireSampleRowsFunc *VAR_4,
      BlockNumber *VAR_5)
{
 char *VAR_6;
 bool VAR_7;
 List *VAR_8;
 struct stat VAR_9;


 FUNC_4(FUNC_0(VAR_3), &VAR_6, &VAR_7, &VAR_8);
 if (VAR_7)
  return 0;





 if (FUNC_5(VAR_6, &VAR_9) < 0)
  FUNC_1(VAR_1,
    (FUNC_2(),
     FUNC_3("could not stat file \"%s\": %m",
      VAR_6)));





 *VAR_5 = (VAR_9.st_size + (VAR_0 - 1)) / VAR_0;
 if (*VAR_5 < 1)
  *VAR_5 = 1;

 *VAR_4 = VAR_2;

 return 1;
}
