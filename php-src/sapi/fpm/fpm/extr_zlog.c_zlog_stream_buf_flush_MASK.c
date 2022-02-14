
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ data; } ;
struct zlog_stream {int flags; scalar_t__ len; TYPE_1__ buf; scalar_t__ prefix_len; scalar_t__ use_syslog; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int * VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (struct zlog_stream*,char) ;
 int FUNC_3 (struct zlog_stream*,scalar_t__,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_4(struct zlog_stream *VAR_3)
{
 ssize_t VAR_4;
 if (&FUNC_0 != ((void*)0)) {
  FUNC_0(VAR_3->flags & VAR_0,
    VAR_3->buf.data + VAR_3->prefix_len, VAR_3->len - VAR_3->prefix_len);
 }
 FUNC_2(VAR_3, '\n');
 VAR_4 = FUNC_3(VAR_3, VAR_3->buf.data, VAR_3->len);
 VAR_3->len = 0;

 return VAR_4;
}
