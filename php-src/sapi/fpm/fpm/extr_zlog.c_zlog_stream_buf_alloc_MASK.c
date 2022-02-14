
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zlog_bool ;
struct TYPE_2__ {scalar_t__ size; scalar_t__ data; } ;
struct zlog_stream {int buf_init_size; TYPE_1__ buf; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct zlog_stream*,int ) ;

__attribute__((used)) inline static zlog_bool FUNC_2(struct zlog_stream *VAR_1)
{

 if (VAR_1->buf.data && VAR_1->buf.size >= FUNC_0(VAR_0, VAR_1->buf_init_size)) {
  return 1;
 }
 return FUNC_1(VAR_1, 0);
}
