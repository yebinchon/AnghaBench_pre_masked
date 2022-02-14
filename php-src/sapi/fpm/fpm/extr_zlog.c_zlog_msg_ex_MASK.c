
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zlog_stream {int dummy; } ;


 size_t FUNC_0 (char const*) ;
 int FUNC_1 (struct zlog_stream*) ;
 int FUNC_2 (struct zlog_stream*) ;
 int FUNC_3 (struct zlog_stream*,int,size_t,int ) ;
 int FUNC_4 (struct zlog_stream*,char const*,int) ;
 int FUNC_5 (struct zlog_stream*,char const*,size_t) ;

void FUNC_6(const char *VAR_0, int VAR_1, int VAR_2,
  const char *VAR_3, const char *VAR_4)
{
 struct zlog_stream VAR_5;
 size_t VAR_6 = FUNC_0(VAR_3);
 size_t VAR_7 = FUNC_0(VAR_4);

 FUNC_3(&VAR_5, VAR_2, VAR_7 + VAR_6, 0);
 FUNC_4(&VAR_5, VAR_0, VAR_1);
 FUNC_5(&VAR_5, VAR_3, VAR_6);
 FUNC_5(&VAR_5, VAR_4, VAR_7);
 FUNC_2(&VAR_5);
 FUNC_1(&VAR_5);
}
