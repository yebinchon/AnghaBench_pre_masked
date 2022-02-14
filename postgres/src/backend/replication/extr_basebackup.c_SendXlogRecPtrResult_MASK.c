
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int str ;
typedef int XLogRecPtr ;
typedef int TimeLineID ;
typedef int StringInfoData ;
typedef scalar_t__ Size ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char,char*) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (char*,int,char*,int,...) ;

__attribute__((used)) static void
FUNC_8(XLogRecPtr VAR_3, TimeLineID VAR_4)
{
 StringInfoData VAR_5;
 char VAR_6[VAR_1];
 Size VAR_7;

 FUNC_0(&VAR_5, 'T');
 FUNC_4(&VAR_5, 2);


 FUNC_6(&VAR_5, "recptr");
 FUNC_5(&VAR_5, 0);
 FUNC_4(&VAR_5, 0);
 FUNC_5(&VAR_5, VAR_2);
 FUNC_4(&VAR_5, -1);
 FUNC_5(&VAR_5, 0);
 FUNC_4(&VAR_5, 0);

 FUNC_6(&VAR_5, "tli");
 FUNC_5(&VAR_5, 0);
 FUNC_4(&VAR_5, 0);





 FUNC_5(&VAR_5, VAR_0);
 FUNC_4(&VAR_5, -1);
 FUNC_5(&VAR_5, 0);
 FUNC_4(&VAR_5, 0);
 FUNC_1(&VAR_5);


 FUNC_0(&VAR_5, 'D');
 FUNC_4(&VAR_5, 2);

 VAR_7 = FUNC_7(VAR_6, sizeof(VAR_6),
       "%X/%X", (uint32) (VAR_3 >> 32), (uint32) VAR_3);
 FUNC_5(&VAR_5, VAR_7);
 FUNC_3(&VAR_5, VAR_6, VAR_7);

 VAR_7 = FUNC_7(VAR_6, sizeof(VAR_6), "%u", VAR_4);
 FUNC_5(&VAR_5, VAR_7);
 FUNC_3(&VAR_5, VAR_6, VAR_7);

 FUNC_1(&VAR_5);


 FUNC_2('C', "SELECT");
}
