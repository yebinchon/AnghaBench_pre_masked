
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zlog_bool ;
struct TYPE_2__ {size_t size; char* data; } ;
struct zlog_stream {size_t buf_init_size; TYPE_1__ buf; } ;


 int FUNC_0 (size_t,size_t) ;
 size_t FUNC_1 (int ,int ) ;
 char* FUNC_2 (size_t) ;
 char* FUNC_3 (char*,size_t) ;
 int VAR_0 ;

__attribute__((used)) static zlog_bool FUNC_4(struct zlog_stream *VAR_1, size_t VAR_2)
{
 char *VAR_3;
 size_t VAR_4 = VAR_1->buf.size ?: VAR_1->buf_init_size;

 if (VAR_1->buf.data) {
  VAR_4 = FUNC_1(VAR_0, FUNC_0(VAR_4 * 2, VAR_2));
  VAR_3 = FUNC_3(VAR_1->buf.data, VAR_4);
 } else {
  VAR_4 = FUNC_1(VAR_0, FUNC_0(VAR_4, VAR_2));
  VAR_3 = FUNC_2(VAR_4);
 }

 if (VAR_3 == ((void*)0)) {
  return 0;
 }

 VAR_1->buf.data = VAR_3;
 VAR_1->buf.size = VAR_4;

 return 1;
}
