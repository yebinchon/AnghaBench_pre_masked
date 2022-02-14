
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zlog_stream {scalar_t__ use_stderr; int fd; scalar_t__ use_fd; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,size_t) ;

__attribute__((used)) static inline ssize_t FUNC_1(
  struct zlog_stream *VAR_1, const char *VAR_2, size_t VAR_3,
  const char *VAR_4, size_t VAR_5)
{
 if (VAR_1->use_fd) {
  FUNC_0(VAR_1->fd, VAR_2, VAR_3);
  if (VAR_5 > 0) {
   FUNC_0(VAR_1->fd, VAR_4, VAR_5);
  }
 }

 if (VAR_1->use_stderr) {
  FUNC_0(VAR_0, VAR_2, VAR_3);
  if (VAR_5 > 0) {
   FUNC_0(VAR_0, VAR_4, VAR_5);
  }
 }

 return VAR_3;
}
