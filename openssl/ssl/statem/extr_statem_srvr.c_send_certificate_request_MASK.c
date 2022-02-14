
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* new_cipher; } ;
struct TYPE_9__ {TYPE_2__ tmp; } ;
struct TYPE_10__ {int verify_mode; scalar_t__ post_handshake_auth; int certreqs_sent; TYPE_3__ s3; } ;
struct TYPE_7__ {int algorithm_auth; } ;
typedef TYPE_4__ SSL ;


 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_1(SSL *VAR_8)
{
    if (

           VAR_8->verify_mode & VAR_3




           && (!FUNC_0(VAR_8) || !(VAR_8->verify_mode & VAR_4)
               || VAR_8->post_handshake_auth == VAR_0)




           && (VAR_8->certreqs_sent < 1 ||
               !(VAR_8->verify_mode & VAR_1))





           && (!(VAR_8->s3.tmp.new_cipher->algorithm_auth & VAR_5)





               || (VAR_8->verify_mode & VAR_2))

           && !(VAR_8->s3.tmp.new_cipher->algorithm_auth & VAR_7)




           && !(VAR_8->s3.tmp.new_cipher->algorithm_auth & VAR_6)) {
        return 1;
    }

    return 0;
}
