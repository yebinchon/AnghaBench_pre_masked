
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned short zip_uint8_t ;
typedef int zip_int64_t ;
struct zip_stat {unsigned short crc; int mtime; } ;
struct zip_source {int dummy; } ;
struct trad_pkware {scalar_t__* e; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,unsigned short*,unsigned short*) ;
 int FUNC_1 (struct trad_pkware*,unsigned short*,unsigned short*,int,int ) ;
 int FUNC_2 (struct zip_source*,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (struct zip_source*,unsigned short*,int) ;
 scalar_t__ FUNC_4 (struct zip_source*,struct zip_stat*) ;

__attribute__((used)) static int
FUNC_5(struct zip_source *VAR_3, struct trad_pkware *VAR_4)
{
    zip_uint8_t VAR_5[VAR_0];
    struct zip_stat VAR_6;
    zip_int64_t VAR_7;
    unsigned short VAR_8, VAR_9;

    if ((VAR_7=FUNC_3(VAR_3, VAR_5, VAR_0)) < 0) {
 FUNC_2(VAR_3, VAR_4->e, VAR_4->e+1);
 return -1;
    }

    if (VAR_7 != VAR_0) {
 VAR_4->e[0] = VAR_1;
 VAR_4->e[1] = 0;
 return -1;
    }

    FUNC_1(VAR_4, VAR_5, VAR_5, VAR_0, 0);

    if (FUNC_4(VAR_3, &VAR_6) < 0) {

 return 0;
    }

    FUNC_0(VAR_6.mtime, &VAR_8, &VAR_9);

    if (VAR_5[VAR_0-1] != VAR_6.crc>>24
 && VAR_5[VAR_0-1] != VAR_8>>8) {
 VAR_4->e[0] = VAR_2;
 VAR_4->e[1] = 0;
 return -1;
    }

    return 0;
}
