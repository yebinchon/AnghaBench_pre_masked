
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct zlog_stream {int dummy; } ;
typedef int ssize_t ;


 size_t FUNC_0 (char*,int,char const*,int ) ;
 int FUNC_1 (struct zlog_stream*,char*,size_t) ;

ssize_t FUNC_2(struct zlog_stream *VAR_0, const char *VAR_1, va_list VAR_2)
{
 char VAR_3[1024];
 size_t VAR_4;

 VAR_4 = FUNC_0(VAR_3, 1024, VAR_1, VAR_2);

 return FUNC_1(VAR_0, VAR_3, VAR_4);
}
