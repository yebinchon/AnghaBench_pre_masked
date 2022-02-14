
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_uint8_t ;
typedef scalar_t__ zip_uint16_t ;
struct zip_source {int dummy; } ;
struct zip {int error; } ;
struct trad_pkware {int * key; scalar_t__* e; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct trad_pkware*,int *,int const*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (struct trad_pkware*) ;
 int FUNC_4 (char const*) ;
 struct zip_source* FUNC_5 (struct zip*,struct zip_source*,int ,struct trad_pkware*) ;

struct zip_source *
FUNC_6(struct zip *VAR_9, struct zip_source *VAR_10,
    zip_uint16_t VAR_11, int VAR_12, const char *VAR_13)
{
    struct trad_pkware *VAR_14;
    struct zip_source *VAR_15;

    if (VAR_13 == ((void*)0) || VAR_10 == ((void*)0) || VAR_11 != VAR_4) {
 FUNC_0(&VAR_9->error, VAR_6, 0);
 return ((void*)0);
    }
    if (VAR_12 & VAR_3) {
 FUNC_0(&VAR_9->error, VAR_5, 0);
 return ((void*)0);
    }

    if ((VAR_14=(struct trad_pkware *)FUNC_2(sizeof(*VAR_14))) == ((void*)0)) {
 FUNC_0(&VAR_9->error, VAR_7, 0);
 return ((void*)0);
    }

    VAR_14->e[0] = VAR_14->e[1] = 0;

    VAR_14->key[0] = VAR_0;
    VAR_14->key[1] = VAR_1;
    VAR_14->key[2] = VAR_2;
    FUNC_1(VAR_14, ((void*)0), (const zip_uint8_t *)VAR_13, FUNC_4(VAR_13), 1);

    if ((VAR_15=FUNC_5(VAR_9, VAR_10, VAR_8, VAR_14)) == ((void*)0)) {
 FUNC_3(VAR_14);
 return ((void*)0);
    }

    return VAR_15;
}
