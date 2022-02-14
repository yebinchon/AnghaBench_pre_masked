
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ File ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char const*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char const*) ;
 scalar_t__ VAR_5 ;

File
FUNC_6(const char *VAR_6)
{
 File VAR_7;

 FUNC_2(VAR_0);


 VAR_7 = FUNC_0(VAR_6, VAR_3 | VAR_4);


 if (VAR_7 <= 0 && VAR_5 != VAR_1)
  FUNC_3(VAR_2,
    (FUNC_4(),
     FUNC_5("could not open temporary file \"%s\": %m",
      VAR_6)));

 if (VAR_7 > 0)
 {

  FUNC_1(VAR_7);
 }

 return VAR_7;
}
