
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int date ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (short*,int *) ;
 int VAR_0 ;

int
FUNC_7(void)
{
 short VAR_1[3] = { 11, 23, 1959 };
 char VAR_2[11];
 date VAR_3;
 int VAR_4;

 FUNC_0(1, VAR_0);

 VAR_4 = FUNC_6(VAR_1, &VAR_3);
 FUNC_4("create: r: %d\n", VAR_4);
 if (VAR_4 == 0)
 {
  FUNC_5(VAR_3, VAR_2);
  FUNC_4("date: %s\n", VAR_2);
 }


 FUNC_3("12031994");
 FUNC_3("9.6.1994");

 FUNC_2(VAR_3, "mmddyy");
 FUNC_2(VAR_3, "ddmmyy");
 FUNC_2(VAR_3, "yymmdd");
 FUNC_2(VAR_3, "yy/mm/dd");
 FUNC_2(VAR_3, "yy mm dd");
 FUNC_2(VAR_3, "yy.mm.dd");
 FUNC_2(VAR_3, ".mm.yyyy.dd.");
 FUNC_2(VAR_3, "mmm. dd, yyyy");
 FUNC_2(VAR_3, "mmm dd yyyy");
 FUNC_2(VAR_3, "yyyy dd mm");
 FUNC_2(VAR_3, "ddd, mmm. dd, yyyy");
 FUNC_2(VAR_3, "(ddd) mmm. dd, yyyy");

 FUNC_1("ddmmyy", "21-2-54");
 FUNC_1("ddmmyy", "2-12-54");
 FUNC_1("ddmmyy", "20111954");
 FUNC_1("ddmmyy", "130464");
 FUNC_1("mmm.dd.yyyy", "MAR-12-1967");
 FUNC_1("yy/mm/dd", "1954, February 3rd");
 FUNC_1("mmm.dd.yyyy", "041269");
 FUNC_1("yy/mm/dd", "In the year 2525, in the month of July, mankind will be alive on the 28th day");
 FUNC_1("dd-mm-yy", "I said on the 28th of July in the year 2525");
 FUNC_1("mmm.dd.yyyy", "9/14/58");
 FUNC_1("yy/mm/dd", "47/03/29");
 FUNC_1("mmm.dd.yyyy", "oct 28 1975");
 FUNC_1("mmddyy", "Nov 14th, 1985");

 FUNC_1("bladdfoommbaryybong", "20/11/1954");

 FUNC_1("ddmmyy", "29-02-1994");


 FUNC_1("dmy", "20/11/1954");


 FUNC_1("ddmmyy", "21254");
 FUNC_1("ddmmyy", "    21254    ");


 FUNC_1("ddmmyy", "320494");


 FUNC_1("mm-yyyy-dd", "13-1993-21");




 return 0;
}
