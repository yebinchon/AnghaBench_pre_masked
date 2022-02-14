
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XLogSegNo ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int VAR_6 ;

int
FUNC_6(XLogSegNo VAR_7)
{
 char VAR_8[VAR_0];
 int VAR_9;

 FUNC_1(VAR_8, VAR_4, VAR_7, VAR_6);

 VAR_9 = FUNC_0(VAR_8, VAR_1 | VAR_3 | FUNC_5(VAR_5));
 if (VAR_9 < 0)
  FUNC_2(VAR_2,
    (FUNC_3(),
     FUNC_4("could not open file \"%s\": %m", VAR_8)));

 return VAR_9;
}
