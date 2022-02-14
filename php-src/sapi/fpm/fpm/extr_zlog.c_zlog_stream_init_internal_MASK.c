
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zlog_stream {int flags; int use_syslog; int use_fd; int use_buffer; size_t buf_init_size; int use_stderr; int prefix_buffer; int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct zlog_stream*,int ,int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static inline void FUNC_1(
  struct zlog_stream *VAR_10, int VAR_11, size_t VAR_12, int VAR_13)
{
 if (VAR_13 == 0) {
  VAR_13 = VAR_8;
 }

 FUNC_0(VAR_10, 0, sizeof(struct zlog_stream));
 VAR_10->flags = VAR_11;
 VAR_10->use_syslog = VAR_13 == VAR_4;
 VAR_10->use_fd = VAR_13 > 0;
 VAR_10->use_buffer = VAR_7 || VAR_5 != ((void*)0) || VAR_10->use_syslog;
 VAR_10->buf_init_size = VAR_12;
 VAR_10->use_stderr = VAR_13 < 0 ||
   (
    VAR_13 != VAR_0 && VAR_13 != VAR_1 && !VAR_6 &&
    (VAR_11 & VAR_2) >= VAR_3
   );
 VAR_10->prefix_buffer = (VAR_11 & VAR_2) >= VAR_9 &&
   (VAR_10->use_fd || VAR_10->use_stderr || VAR_10->use_syslog);
 VAR_10->fd = VAR_13 > -1 ? VAR_13 : VAR_0;
}
