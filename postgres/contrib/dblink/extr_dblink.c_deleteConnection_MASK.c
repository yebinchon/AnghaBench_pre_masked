
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int remoteConnHashEnt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (scalar_t__,char*,int ,int*) ;
 char* FUNC_5 (char const*) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int ,int) ;

__attribute__((used)) static void
FUNC_8(const char *VAR_4)
{
 remoteConnHashEnt *VAR_5;
 bool VAR_6;
 char *VAR_7;

 if (!VAR_3)
  VAR_3 = FUNC_0();

 VAR_7 = FUNC_5(VAR_4);
 FUNC_7(VAR_7, FUNC_6(VAR_7), 0);
 VAR_5 = (remoteConnHashEnt *) FUNC_4(VAR_3,
              VAR_7, VAR_2, &VAR_6);

 if (!VAR_5)
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("undefined connection name")));

}
