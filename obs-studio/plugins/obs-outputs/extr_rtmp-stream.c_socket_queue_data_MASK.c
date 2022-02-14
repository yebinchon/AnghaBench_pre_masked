
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtmp_stream {scalar_t__ write_buf_len; scalar_t__ write_buf_size; scalar_t__ write_buf; int buffer_has_data_event; int write_buf_mutex; int buffer_space_available_event; int rtmp; } ;
typedef int RTMPSockBuf ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,char const*,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(RTMPSockBuf *VAR_0, const char *VAR_1, int VAR_2,
        void *VAR_3)
{
 FUNC_1(VAR_0);

 struct rtmp_stream *VAR_4 = VAR_3;

retry_send:

 if (!FUNC_0(&VAR_4->rtmp))
  return 0;

 FUNC_5(&VAR_4->write_buf_mutex);

 if (VAR_4->write_buf_len + VAR_2 > VAR_4->write_buf_size) {

  FUNC_6(&VAR_4->write_buf_mutex);

  if (FUNC_4(VAR_4->buffer_space_available_event)) {
   return 0;
  }

  goto retry_send;
 }

 FUNC_2(VAR_4->write_buf + VAR_4->write_buf_len, VAR_1, VAR_2);
 VAR_4->write_buf_len += VAR_2;

 FUNC_6(&VAR_4->write_buf_mutex);

 FUNC_3(VAR_4->buffer_has_data_event);

 return VAR_2;
}
