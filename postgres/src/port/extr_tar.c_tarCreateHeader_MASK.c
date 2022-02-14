
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int time_t ;
typedef int pgoff_t ;
typedef int mode_t ;
typedef int gid_t ;
typedef enum tarError { ____Placeholder_tarError } tarError ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char*) ;

enum tarError
FUNC_9(char *VAR_3, const char *VAR_4, const char *VAR_5,
    pgoff_t VAR_6, mode_t VAR_7, uid_t VAR_8, gid_t VAR_9, time_t VAR_10)
{
 if (FUNC_7(VAR_4) > 99)
  return VAR_0;

 if (VAR_5 && FUNC_7(VAR_5) > 99)
  return VAR_2;

 FUNC_3(VAR_3, 0, 512);


 FUNC_6(&VAR_3[0], VAR_4, 100);
 if (VAR_5 != ((void*)0) || FUNC_1(VAR_7))
 {





  int VAR_11 = FUNC_7(VAR_4);

  VAR_11 = FUNC_0(VAR_11, 99);
  VAR_3[VAR_11] = '/';
  VAR_3[VAR_11 + 1] = '\0';
 }


 FUNC_4(&VAR_3[100], 8, (VAR_7 & 07777));


 FUNC_4(&VAR_3[108], 8, VAR_8);


 FUNC_4(&VAR_3[116], 8, VAR_9);


 if (VAR_5 != ((void*)0) || FUNC_1(VAR_7))

  FUNC_4(&VAR_3[124], 12, 0);
 else
  FUNC_4(&VAR_3[124], 12, VAR_6);


 FUNC_4(&VAR_3[136], 12, VAR_10);



 if (VAR_5 != ((void*)0))
 {

  VAR_3[156] = '2';

  FUNC_6(&VAR_3[157], VAR_5, 100);
 }
 else if (FUNC_1(VAR_7))
 {

  VAR_3[156] = '5';
 }
 else
 {

  VAR_3[156] = '0';
 }


 FUNC_5(&VAR_3[257], "ustar");


 FUNC_2(&VAR_3[263], "00", 2);



 FUNC_6(&VAR_3[265], "postgres", 32);



 FUNC_6(&VAR_3[297], "postgres", 32);


 FUNC_4(&VAR_3[329], 8, 0);


 FUNC_4(&VAR_3[337], 8, 0);




 FUNC_4(&VAR_3[148], 8, FUNC_8(VAR_3));

 return VAR_1;
}
