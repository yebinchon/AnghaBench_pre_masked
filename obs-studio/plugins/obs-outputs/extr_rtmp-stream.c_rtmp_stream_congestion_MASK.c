
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtmp_stream {scalar_t__ min_priority; float congestion; scalar_t__ write_buf_size; scalar_t__ write_buf_len; scalar_t__ new_socket_loop; } ;



__attribute__((used)) static float FUNC_0(void *VAR_0)
{
 struct rtmp_stream *VAR_1 = VAR_0;

 if (VAR_1->new_socket_loop)
  return (float)VAR_1->write_buf_len /
         (float)VAR_1->write_buf_size;
 else
  return VAR_1->min_priority > 0 ? 1.0f : VAR_1->congestion;
}
