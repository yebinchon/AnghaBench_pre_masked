
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct trace_seq*,char*,char*,char*) ;
 int FUNC_4 (struct trace_seq*,char) ;

__attribute__((used)) static void FUNC_5(struct trace_seq *VAR_2, pid_t VAR_3)
{
 char VAR_4[VAR_0];

 char VAR_5[11];
 int VAR_6 = 0;
 int VAR_7;
 int VAR_8;

 FUNC_2(VAR_3, VAR_4);
 VAR_4[7] = '\0';
 FUNC_0(VAR_5, "%d", VAR_3);


 VAR_7 = FUNC_1(VAR_4) + FUNC_1(VAR_5) + 1;

 if (VAR_7 < VAR_1)
  VAR_6 = VAR_1 - VAR_7;


 for (VAR_8 = 0; VAR_8 < VAR_6 / 2; VAR_8++)
  FUNC_4(VAR_2, ' ');

 FUNC_3(VAR_2, "%s-%s", VAR_4, VAR_5);


 for (VAR_8 = 0; VAR_8 < VAR_6 - (VAR_6 / 2); VAR_8++)
  FUNC_4(VAR_2, ' ');
}
