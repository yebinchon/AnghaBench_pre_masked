
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int cryptopro_ext ;
typedef int X509 ;
typedef int WPACKET ;
struct TYPE_8__ {TYPE_2__* new_cipher; } ;
struct TYPE_10__ {TYPE_1__ tmp; } ;
struct TYPE_11__ {TYPE_3__ s3; } ;
struct TYPE_9__ {int id; } ;
typedef TYPE_4__ SSL ;
typedef int EXT_RETURN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_2 (int *,unsigned char const*,int) ;

EXT_RETURN FUNC_3(SSL *VAR_7, WPACKET *VAR_8,
                                            unsigned int VAR_9, X509 *VAR_10,
                                            size_t VAR_11)
{
    const unsigned char VAR_12[36] = {
        0xfd, 0xe8,
        0x00, 0x20,
        0x30, 0x1e, 0x30, 0x08, 0x06, 0x06, 0x2a, 0x85,
        0x03, 0x02, 0x02, 0x09, 0x30, 0x08, 0x06, 0x06,
        0x2a, 0x85, 0x03, 0x02, 0x02, 0x16, 0x30, 0x08,
        0x06, 0x06, 0x2a, 0x85, 0x03, 0x02, 0x02, 0x17
    };

    if (((VAR_7->s3.tmp.new_cipher->id & 0xFFFF) != 0x80
         && (VAR_7->s3.tmp.new_cipher->id & 0xFFFF) != 0x81)
            || (FUNC_0(VAR_7) & VAR_6) == 0)
        return VAR_2;

    if (!FUNC_2(VAR_8, VAR_12, sizeof(VAR_12))) {
        FUNC_1(VAR_7, VAR_4,
                 VAR_5, VAR_0);
        return VAR_1;
    }

    return VAR_3;
}
