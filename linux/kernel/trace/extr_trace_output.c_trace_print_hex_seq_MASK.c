
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;


 int FUNC_0 (int,int) ;
 char* FUNC_1 (struct trace_seq*) ;
 int FUNC_2 (struct trace_seq*,char const*,int ,unsigned char const*) ;
 int FUNC_3 (struct trace_seq*,int ) ;

const char *
FUNC_4(struct trace_seq *VAR_0, const unsigned char *VAR_1, int VAR_2,
      bool VAR_3)
{
 int VAR_4;
 const char *VAR_5 = FUNC_1(VAR_0);
 const char *VAR_6 = VAR_3 ? "%*phN" : "%*ph";

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4 += 16)
  FUNC_2(VAR_0, VAR_6, FUNC_0(VAR_2 - VAR_4, 16), &VAR_1[VAR_4]);
 FUNC_3(VAR_0, 0);

 return VAR_5;
}
