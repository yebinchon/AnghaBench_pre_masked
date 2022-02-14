
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int kSafariExtensionsBlock ;
struct TYPE_9__ {int extensions; } ;
struct TYPE_7__ {int is_probably_safari; } ;
struct TYPE_8__ {TYPE_1__ s3; } ;
typedef TYPE_2__ SSL ;
typedef int PACKET ;
typedef TYPE_3__ CLIENTHELLO_MSG ;


 int FUNC_0 (int *,unsigned char const*,size_t) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 unsigned int VAR_1 ;

__attribute__((used)) static void FUNC_5(SSL *VAR_2, const CLIENTHELLO_MSG *VAR_3)
{
    static const unsigned char VAR_4[] = {
        0x00, 0x0a,
        0x00, 0x08,
        0x00, 0x06,
        0x00, 0x17,
        0x00, 0x18,
        0x00, 0x19,

        0x00, 0x0b,
        0x00, 0x02,
        0x01,
        0x00,

        0x00, 0x0d,
        0x00, 0x0c,
        0x00, 0x0a,
        0x05, 0x01,
        0x04, 0x01,
        0x02, 0x01,
        0x04, 0x03,
        0x02, 0x03,
    };

    static const size_t VAR_5 = 18;
    unsigned int VAR_6;
    PACKET VAR_7, VAR_8;
    size_t VAR_9;

    VAR_8 = VAR_3->extensions;

    if (!FUNC_1(&VAR_8, 2)
        || !FUNC_3(&VAR_8, &VAR_6)
        || !FUNC_2(&VAR_8, &VAR_7)) {
        return;
    }

    if (VAR_6 != VAR_1)
        return;

    VAR_9 = FUNC_4(VAR_2) >= VAR_0 ?
        sizeof(VAR_4) : VAR_5;

    VAR_2->s3.is_probably_safari = FUNC_0(&VAR_8, VAR_4,
                                             VAR_9);
}
