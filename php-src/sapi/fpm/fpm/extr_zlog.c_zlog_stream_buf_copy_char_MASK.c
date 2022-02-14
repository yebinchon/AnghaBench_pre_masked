
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; char* data; } ;
struct zlog_stream {int len; TYPE_1__ buf; } ;
typedef int ssize_t ;


 int FUNC_0 (struct zlog_stream*,int) ;

__attribute__((used)) static inline ssize_t FUNC_1(struct zlog_stream *VAR_0, char VAR_1)
{
 if (VAR_0->buf.size - VAR_0->len < 1 && !FUNC_0(VAR_0, 1)) {
  return -1;
 }

 VAR_0->buf.data[VAR_0->len++] = VAR_1;

 return 1;
}
