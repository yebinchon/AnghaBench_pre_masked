
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t size; size_t data; } ;
struct zlog_stream {size_t len; TYPE_1__ buf; } ;
typedef int ssize_t ;


 int FUNC_0 (size_t,char const*,size_t) ;
 int FUNC_1 (struct zlog_stream*,size_t) ;

__attribute__((used)) static inline ssize_t FUNC_2(
  struct zlog_stream *VAR_0, const char *VAR_1, size_t VAR_2)
{
 if (VAR_0->buf.size - VAR_0->len <= VAR_2 && !FUNC_1(VAR_0, VAR_2)) {
  return -1;
 }

 FUNC_0(VAR_0->buf.data + VAR_0->len, VAR_1, VAR_2);
 VAR_0->len += VAR_2;

 return VAR_2;
}
