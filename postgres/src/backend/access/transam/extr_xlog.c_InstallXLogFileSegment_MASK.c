
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef scalar_t__ XLogSegNo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (char*,char*,int ) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (char*,struct stat*) ;
 int VAR_6 ;

__attribute__((used)) static bool
FUNC_6(XLogSegNo *VAR_7, char *VAR_8,
        bool VAR_9, XLogSegNo VAR_10,
        bool VAR_11)
{
 char VAR_12[VAR_4];
 struct stat VAR_13;

 FUNC_2(VAR_12, VAR_5, *VAR_7, VAR_6);




 if (VAR_11)
  FUNC_0(VAR_0, VAR_3);

 if (!VAR_9)
 {

  FUNC_4(VAR_12, VAR_1);
 }
 else
 {

  while (FUNC_5(VAR_12, &VAR_13) == 0)
  {
   if ((*VAR_7) >= VAR_10)
   {

    if (VAR_11)
     FUNC_1(VAR_0);
    return 0;
   }
   (*VAR_7)++;
   FUNC_2(VAR_12, VAR_5, *VAR_7, VAR_6);
  }
 }





 if (FUNC_3(VAR_8, VAR_12, VAR_2) != 0)
 {
  if (VAR_11)
   FUNC_1(VAR_0);

  return 0;
 }

 if (VAR_11)
  FUNC_1(VAR_0);

 return 1;
}
