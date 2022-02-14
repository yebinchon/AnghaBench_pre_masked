
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_3__ {int fd; int tcp; } ;
typedef TYPE_1__ fcgi_request ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char*,int,int ) ;
 int FUNC_2 (int ,char*,size_t) ;

__attribute__((used)) static inline ssize_t FUNC_3(fcgi_request *VAR_4, const void *VAR_5, size_t VAR_6)
{
 int VAR_7;
 size_t VAR_8 = 0;

 do {



  VAR_3 = 0;
  VAR_7 = FUNC_2(VAR_4->fd, ((char*)VAR_5)+VAR_8, VAR_6-VAR_8);

  if (VAR_7 > 0) {
   VAR_8 += VAR_7;
  } else if (VAR_7 <= 0 && VAR_3 != 0 && VAR_3 != VAR_0) {
   return VAR_7;
  }
 } while (VAR_8 != VAR_6);
 return VAR_8;
}
