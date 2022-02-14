
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int session_id_length; unsigned char const* session_id; } ;
typedef TYPE_1__ SSL_SESSION ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned char const*,unsigned char const*,unsigned int) ;

int FUNC_2(SSL_SESSION *VAR_3, const unsigned char *VAR_4,
                        unsigned int VAR_5)
{
    if (VAR_5 > VAR_1) {
      FUNC_0(VAR_0,
             VAR_2);
      return 0;
    }
    VAR_3->session_id_length = VAR_5;
    if (VAR_4 != VAR_3->session_id)
        FUNC_1(VAR_3->session_id, VAR_4, VAR_5);
    return 1;
}
