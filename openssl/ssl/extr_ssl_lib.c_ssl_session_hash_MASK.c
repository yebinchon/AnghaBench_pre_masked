
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmp_storage ;
struct TYPE_3__ {unsigned char* session_id; int session_id_length; } ;
typedef TYPE_1__ SSL_SESSION ;


 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;

__attribute__((used)) static unsigned long FUNC_2(const SSL_SESSION *VAR_0)
{
    const unsigned char *VAR_1 = VAR_0->session_id;
    unsigned long VAR_2;
    unsigned char VAR_3[4];

    if (VAR_0->session_id_length < sizeof(VAR_3)) {
        FUNC_1(VAR_3, 0, sizeof(VAR_3));
        FUNC_0(VAR_3, VAR_0->session_id, VAR_0->session_id_length);
        VAR_1 = VAR_3;
    }

    VAR_2 = (unsigned long)
        ((unsigned long)VAR_1[0]) |
        ((unsigned long)VAR_1[1] << 8L) |
        ((unsigned long)VAR_1[2] << 16L) |
        ((unsigned long)VAR_1[3] << 24L);
    return VAR_2;
}
