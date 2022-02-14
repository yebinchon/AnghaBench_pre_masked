
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tmsize_t ;
typedef int thandle_t ;
struct TYPE_2__ {int fd; int h; } ;
typedef TYPE_1__ fd_as_handle_union_t ;
typedef int TIFFIOSize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,char const*,int ) ;

__attribute__((used)) static tmsize_t
FUNC_1(thandle_t VAR_3, void* VAR_4, tmsize_t VAR_5)
{
 fd_as_handle_union_t VAR_6;
 const size_t VAR_7 = (size_t) VAR_5;
        size_t VAR_8;
        tmsize_t VAR_9 = -1;
 if ((tmsize_t) VAR_7 != VAR_5)
 {
  VAR_2=VAR_0;
  return (tmsize_t) -1;
 }
 VAR_6.h = VAR_3;
        for (VAR_8=0; VAR_8 < VAR_7; VAR_8+=VAR_9)
        {
                const char *VAR_10 = (char *) VAR_4+VAR_8;
                size_t VAR_11 = VAR_7-VAR_8;
                if (VAR_11 > VAR_1)
                        VAR_11 = VAR_1;
                VAR_9=FUNC_0(VAR_6.fd, VAR_10, (TIFFIOSize_t) VAR_11);
                if (VAR_9 <= 0)
                        break;
        }
        if (VAR_9 < 0)
                return (tmsize_t)-1;
        return (tmsize_t) VAR_8;

}
