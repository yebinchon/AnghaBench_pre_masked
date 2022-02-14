
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {int dummy; } ;


 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct trace_array*,int,int) ;
 int FUNC_4 (struct trace_array*,char*,int) ;
 int FUNC_5 (char*,char*) ;
 size_t FUNC_6 (char*) ;
 char* FUNC_7 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_8(struct trace_array *VAR_2, char *VAR_3)
{
 char *VAR_4;
 int VAR_5 = 0;
 int VAR_6;
 size_t VAR_7 = FUNC_6(VAR_3);
 int VAR_8;

 VAR_4 = FUNC_7(VAR_3);

 VAR_8 = FUNC_5(VAR_4, "no");
 if (VAR_8)
  VAR_5 = 1;

 VAR_4 += VAR_8;

 FUNC_1(&VAR_1);

 VAR_6 = FUNC_0(VAR_0, -1, VAR_4);

 if (VAR_6 < 0)
  VAR_6 = FUNC_4(VAR_2, VAR_4, VAR_5);
 else
  VAR_6 = FUNC_3(VAR_2, 1 << VAR_6, !VAR_5);

 FUNC_2(&VAR_1);





 if (VAR_7 > FUNC_6(VAR_3))
  VAR_3[FUNC_6(VAR_3)] = ' ';

 return VAR_6;
}
